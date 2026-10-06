#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800265C0(void *,short);
void fn_8006665C(void *);
extern char lbl_804712CC[];
}
struct UnknownGenObject8002653C {
 void *unknown00;
 char unknown04[8];
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 char unknown1C[4];
 int unknown20;
 int unknown24;
 char unknown28[4];
 int unknown2C;
 int unknown30;
 char unknown34[4];
 int unknown38;
 int unknown3C;
 int unknown40;
 char unknown44[12];
};
extern "C" {
void *fn_8002653C(){
 UnknownGenObject8002653C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804712CC;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown38=0;
 object.unknown3C=0;
 object.unknown40=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_800265C0(&object,-1);
 return result;
}
}
#pragma pop
