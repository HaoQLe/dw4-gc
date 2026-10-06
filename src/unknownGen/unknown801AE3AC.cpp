#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
void fn_801AE468(void *,short);
extern char lbl_804B37AC[];
}
struct UnknownGenObject801AE3AC {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[4];
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
 char unknown4C[4];
 int unknown50;
 int unknown54;
 int unknown58;
 int unknown5C;
 int unknown60;
 int unknown64;
 int unknown68;
 int unknown6C;
 char unknown70[4];
 int unknown74;
 char unknown78[24];
};
extern "C" {
void *fn_801AE3AC(){
 UnknownGenObject801AE3AC object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B37AC;
 object.unknown08=0;
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
 object.unknown50=0;
 object.unknown54=0;
 object.unknown58=0;
 object.unknown5C=0;
 object.unknown60=0;
 object.unknown64=0;
 object.unknown68=0;
 object.unknown6C=0;
 object.unknown74=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801AE468(&object,-1);
 return result;
}
}
#pragma pop
