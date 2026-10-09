#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core10igResourceFv();
void fn_800265C0(void *,short);
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8006665C(void *);
extern char lbl_804712CC[];
extern void *lbl_80561610;
extern void *lbl_805621F4;
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
void *fn_8002648C(void *object){
 arkRegister__Q33Gap4Core10igResourceFv();
 return fn_8006546C(lbl_80561610,object);
}
void *fn_800264C4(){
 if(!lbl_80561610) lbl_80561610=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561610;
}
void *igResource_getMeta(){
 if(!lbl_80561610 || !(reinterpret_cast<unsigned int *>(lbl_80561610)[0x24/4]&4)) arkRegister__Q33Gap4Core10igResourceFv();
 return lbl_80561610;
}
void *igResource_vtableRead(){
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
