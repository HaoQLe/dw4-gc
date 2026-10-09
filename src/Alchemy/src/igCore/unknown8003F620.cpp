#include <igGap.h>

// Synthetic ABI view; unused slots and argument meanings remain unknown.
struct Unknown8003F620Result {
    Gap::igInt unknown00;
    inline Unknown8003F620Result(Gap::igInt value) : unknown00(value) {}
    inline Unknown8003F620Result(const Unknown8003F620Result& other) : unknown00(other.unknown00) {}
};
class Unknown8003F620 {
public:
    virtual void slot08();
    virtual void slot0C();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1C();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2C();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3C();
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4C();
    virtual void slot50();
    virtual void slot54();
    virtual void slot58();
    virtual Gap::igInt slot5C();
    virtual void slot60();
    virtual void slot64();
    virtual void slot68();
    virtual Unknown8003F620Result slot6C(Gap::igUnsignedInt, char *, Gap::igInt, Gap::igInt *, void *, Gap::igInt, Gap::igInt *);
    virtual Unknown8003F620Result slot70(Gap::igUnsignedInt, char *, Gap::igInt, void *, Gap::igInt, const char *, char *, Gap::igInt);
};
class Unknown8003F620Provider {
public:
    virtual void slot08();
    virtual void slot0C();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1C();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2C();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3C();
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4C();
    virtual void slot50();
    virtual void slot54();
    virtual void slot58();
    virtual Gap::igInt slot5C();
    virtual void slot60();
    virtual void slot64();
    virtual void slot68();
    virtual Unknown8003F620Result slot6C(Gap::igUnsignedInt, char *, Gap::igInt, Gap::igInt *, Gap::igInt *, void *, Gap::igInt, Gap::igInt *);
};
namespace Gap { namespace Core {
    class igArkCore;
    extern igArkCore *_arkCore;
} }
extern "C" {
    extern Gap::igInt kSuccess__3Gap, kFailure__3Gap;
    extern char lbl_8055D7B8[7];
    int sprintf(char *, const char *, ...);
    char *strncpy(char *, const char *, unsigned long);
}

static inline Unknown8003F620Provider *unknownProvider(){
    return reinterpret_cast<Unknown8003F620Provider **>(reinterpret_cast<char *>(Gap::Core::_arkCore) + 0x50)[0];
}

extern "C" Gap::igBool igCallStackTracer_virtual64(){
    Unknown8003F620Provider *object = unknownProvider();
    if(object && object->slot5C()) return true;
    return false;
}

extern "C" Unknown8003F620Result igCallStackTracer_virtual68(Unknown8003F620 *object, Gap::igUnsignedInt value, const char *arg6, char *arg7, Gap::igInt arg8){
    char first[0x100], second[0x100];
    Gap::igInt firstCount, secondCount;
    Unknown8003F620Result result = object->slot6C(value, first, 0xFF, &firstCount, second, 0xFF, &secondCount);
    object->slot70(value, first, firstCount, second, secondCount, arg6, arg7, arg8);
    return result;
}

extern "C" Unknown8003F620Result igCallStackTracer_virtual6C(Unknown8003F620 *, Gap::igUnsignedInt value, char *arg6, Gap::igInt arg7, Gap::igInt *arg8, void *arg9, Gap::igInt arg10, Gap::igInt *arg11){
    Unknown8003F620Provider *object = unknownProvider();
    if(object && object->slot5C()){
        Gap::igInt first = 0, second = 0;
        Unknown8003F620Result result = object->slot6C(value, arg6, arg7, &first, &second, arg9, arg10, arg11);
        if(result.unknown00 == kSuccess__3Gap){
            *arg8 = value - first;
            return kSuccess__3Gap;
        }
    }
    if(arg6){
        char buffer[16];
        sprintf(buffer, lbl_8055D7B8, value);
        strncpy(arg6, buffer, arg7);
    }
    *arg8 = 0;
    if(arg9) *static_cast<char *>(arg9) = 0;
    *arg11 = 0;
    return kFailure__3Gap;
}
