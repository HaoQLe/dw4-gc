#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
void fn_802C64EC(void *,short);
extern char lbl_804D9D3C[];
}
struct UnknownGenObject802C6420 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 char unknown10[4];
 int unknown14;
 int unknown18;
 char unknown1C[8];
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 char unknown3C[12];
 int unknown48;
 int unknown4C;
 int unknown50;
 char unknown54[4];
 int unknown58;
 int unknown5C;
 int unknown60;
 char unknown64[16];
 int unknown74;
 char unknown78[52];
 int unknownAC;
 int unknownB0;
 int unknownB4;
 int unknownB8;
 char unknownBC[12];
 int unknownC8;
 int unknownCC;
 int unknownD0;
 int unknownD4;
 char unknownD8[4];
 int unknownDC;
 char unknownE0[4];
 int unknownE4;
 int unknownE8;
 char unknownEC[4];
};
extern "C" {
void *beModelCtrlInfoWork_vtableRead(){
 UnknownGenObject802C6420 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804D9D3C;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown48=0;
 object.unknown4C=0;
 object.unknown50=0;
 object.unknown58=0;
 object.unknown5C=0;
 object.unknown60=0;
 object.unknown74=0;
 object.unknownAC=0;
 object.unknownB0=0;
 object.unknownB4=0;
 object.unknownB8=0;
 object.unknownC8=0;
 object.unknownCC=0;
 object.unknownD0=0;
 object.unknownD4=0;
 object.unknownDC=0;
 object.unknownE4=0;
 object.unknownE8=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_802C64EC(&object,-1);
 return result;
}
}
#pragma pop
