// Gap::Bec::bePadData: one controller's state (0x803116E0..0x80311CC0). Each frame bePadManager feeds it the
// sticks and the button bits; it keeps, for the buttons and for each stick's direction, the bits held now,
// the bits newly pressed (trigger) and auto-repeat pulses (repeat).
#include <meta/bePadData.h>

using namespace Meta;

struct igVec2f;   // a 2D vector (defined below)

extern "C" {
void fn_800667B0(bePadData *self, void *argument);   // the base class's version of virtual24
void fn_800667B4(bePadData *self);   // the base class's version of virtual28
extern char lbl_80534AC8[];          // bePadData's metaobject pointer
extern int __float_nan[];
double atan2(double y, double x);
void bePadData_stickDirection(bePadData *self, int *direction, igVec2f stick);
}

// MSL's sqrtf: three Newton steps from the hardware estimate; NaN for negative input or NaN.
static inline int fpclassifyf(float x)
{
    switch (*reinterpret_cast<int *>(&x) & 0x7F800000) {
    case 0x7F800000:
        if (*reinterpret_cast<int *>(&x) & 0x7FFFFF) return 1;   // NaN
        return 2;                                                // infinite
    case 0:
        if (*reinterpret_cast<int *>(&x) & 0x7FFFFF) return 5;   // subnormal
        return 3;                                                // zero
    }
    return 4;                                                    // normal
}
static inline float sqrtf(float x)
{
    static const double _half = .5;
    static const double _three = 3.0;
    if (x > 0.0f) {
        double guess = __frsqrte((double)x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        return (float)(x * guess);
    } else if (x < 0.0) {
        return *reinterpret_cast<float *>(__float_nan);
    } else if (fpclassifyf(x) == 1) {
        return *reinterpret_cast<float *>(__float_nan);
    }
    return x;
}

// A 2D vector, passed by value.
struct igVec2f {
    float x, y;
    igVec2f() {}
    igVec2f(float x_, float y_) : x(x_), y(y_) {}
    igVec2f(const igVec2f &o) : x(o.x), y(o.y) {}
    float length() const { return sqrtf(x * x + y * y); }
};

extern "C" {

// Resets the pad: stick dead zone 0.4, direction tolerance 45 degrees, repeat after 10 then every 6 frames.
void bePadData_virtual24(bePadData *self, void *argument)
{
    fn_800667B0(self, argument);
    self->_enaLen = 0.4f;
    igVec2f deadZone(self->_enaLen, 0.0f);
    self->_enaLen = sqrtf(deadZone.x * deadZone.x + deadZone.y * deadZone.y);
    self->_adAngle = 0.785398163f;
    self->_1sttime = 10;
    self->_2ndtime = 6;
    self->_lTrg = self->_lRpt = self->_lStk = self->_lLast = self->_lTime = 0;
    self->_rTrg = self->_rRpt = self->_rStk = self->_rLast = self->_rTime = 0;
    self->_button = self->_trigger = self->_repeat = self->_last = self->_rptime = 0;
}

void bePadData_virtual28(bePadData *self)
{
    fn_800667B4(self);
}

// Sets this frame's button bits.
void bePadData_setButtons(bePadData *self, int buttons)
{
    self->_last = self->_button;
    self->_button = buttons;
    self->_trigger = self->_button & (self->_last ^ self->_button);
    if (self->_last ^ self->_button) {
        self->_repeat = self->_trigger;
        self->_rptime = self->_1sttime;
    } else if (--self->_rptime) {
        self->_repeat = 0;
    } else {
        self->_repeat = self->_button;
        self->_rptime = self->_2ndtime;
    }
}

// Sets the left stick and its direction bits.
void bePadData_setLStick(bePadData *self, igVec2f stick)
{
    self->_LStick[0] = stick.x;
    self->_LStick[1] = stick.y;
    self->_lLast = self->_lStk;
    bePadData_stickDirection(self, &self->_lStk, *reinterpret_cast<igVec2f *>(self->_LStick));
    self->_lTrg = self->_lStk & (self->_lLast ^ self->_lStk);
    if (self->_lLast ^ self->_lStk) {
        self->_lRpt = self->_lTrg;
        self->_lTime = self->_1sttime;
    } else if (--self->_lTime) {
        self->_lRpt = 0;
    } else {
        self->_lRpt = self->_lStk;
        self->_lTime = self->_2ndtime;
    }
}

// Sets the right stick and its direction bits.
void bePadData_setRStick(bePadData *self, igVec2f stick)
{
    self->_RStick[0] = stick.x;
    self->_RStick[1] = stick.y;
    self->_rLast = self->_rStk;
    bePadData_stickDirection(self, &self->_rStk, *reinterpret_cast<igVec2f *>(self->_RStick));
    self->_rTrg = self->_rStk & (self->_rLast ^ self->_rStk);
    if (self->_rLast ^ self->_rStk) {
        self->_rRpt = self->_rTrg;
        self->_rTime = self->_1sttime;
    } else if (--self->_rTime) {
        self->_rRpt = 0;
    } else {
        self->_rRpt = self->_rStk;
        self->_rTime = self->_2ndtime;
    }
}

// Direction bits of a stick beyond the dead zone (_enaLen): 1, 2, 4 and 8 for the four quadrants around
// the axes (angles from atan2), overlapping by half of _adAngle so diagonals set two bits.
void bePadData_stickDirection(bePadData *self, int *direction, igVec2f stick)
{
    float length = stick.length();
    float angle = atan2(stick.y, stick.x);
    float tolerance = 0.5f * self->_adAngle;
    *direction = 0;
    if (length < self->_enaLen) return;
    if (angle < -2.35619449f + tolerance) *direction |= 8;
    if (angle >= -2.35619449f - tolerance && angle <= -0.785398163f + tolerance) *direction |= 4;
    if (angle > -0.785398163f - tolerance && angle < 0.785398163f + tolerance) *direction |= 2;
    if (angle >= 0.785398163f - tolerance && angle <= 2.35619449f + tolerance) *direction |= 1;
    if (angle > 2.35619449f - tolerance) *direction |= 8;
}

// The class's metaobject.
void *bePadData_virtual58(bePadData *)
{
    return *reinterpret_cast<void **>(lbl_80534AC8);
}

}
