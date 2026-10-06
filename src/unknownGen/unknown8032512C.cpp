#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
void fn_803251E8(void *,short);
extern char lbl_804CDE20[];
extern char lbl_804E6DB0[];
}
struct UnknownGenObject8032512C {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 int unknown3C;
 int unknown40;
 int unknown44;
 int unknown48;
 int unknown4C;
 int unknown50;
 int unknown54;
 int unknown58;
 char unknown5C[4];
};
extern "C" {
void *fn_8032512C(){
 UnknownGenObject8032512C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CDE20;
 object.unknown00=lbl_804E6DB0;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown3C=0;
 object.unknown40=0;
 object.unknown44=0;
 object.unknown48=0;
 object.unknown4C=0;
 object.unknown50=0;
 object.unknown54=0;
 object.unknown58=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_803251E8(&object,-1);
 return result;
}
}
#pragma pop
