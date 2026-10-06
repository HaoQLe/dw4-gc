#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800261F4(void *,short);
void fn_8006665C(void *);
extern char lbl_80472A58[];
}
struct UnknownGenObject80030CC8 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[36];
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
 char unknown58[4];
 int unknown5C;
 char unknown60[9424];
};
extern "C" {
void *fn_80030CC8(){
 UnknownGenObject80030CC8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472A58;
 object.unknown08=0;
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
 object.unknown5C=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_800261F4(&object,-1);
 return result;
}
}
#pragma pop
