// fn_80328940: the deleting destructor of lbl_804EC398. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

extern "C" {
extern char lbl_804E6A60[];
extern char lbl_804EC398[];
void fn_80066DFC(void *object);   // frees an object
}

struct Level_804E6A60 {
    void *__vtable;
    char unknown04[48];
    igObjectRefMember unknown34;
    igObjectRefMember unknown38;
    igObjectRefMember unknown3C;
    igObjectRefMember unknown40;
    igObjectRefMember unknown44;
    igObjectRefMember unknown48;
    igObjectRefMember unknown4C;
    inline ~Level_804E6A60() { __vtable = lbl_804E6A60; }
};
struct Level_804EC398 : Level_804E6A60 {
    igStringMember unknown50;
    char unknown54[24];
    igObjectRefMember unknown6C;
};

extern "C" Level_804EC398 *fn_80328940(Level_804EC398 *self, short flags)
{
    if (self) {
        self->__vtable = lbl_804EC398;
        self->unknown6C.~igObjectRefMember();
        self->unknown50.~igStringMember();
        self->Level_804E6A60::~Level_804E6A60();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
