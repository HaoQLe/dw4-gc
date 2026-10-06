#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
void fn_801C7E6C(void *,short);
extern char lbl_804B54A0[];
}
struct UnknownGenObject801C7DE8 {
 void *unknown00;
 char unknown04[12];
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 char unknown30[4];
 int unknown34;
 int unknown38;
 char unknown3C[4];
 int unknown40;
 char unknown44[12];
};
extern "C" {
void *fn_801C7DE8(){
 UnknownGenObject801C7DE8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B54A0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown40=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C7E6C(&object,-1);
 return result;
}
}
#pragma pop
