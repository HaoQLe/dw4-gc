#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
void fn_800AC6A0(void *,short);
extern char lbl_8047A784[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}
struct UnknownGenObject800AC60C {
 void *unknown00;
 char unknown04[8];
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 char unknown20[8];
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 char unknown38[8];
};
extern "C" {
void *fn_800AC60C(){
 UnknownGenObject800AC60C object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A784;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_800AC6A0(&object,-1);
 return result;
}
}
#pragma pop
