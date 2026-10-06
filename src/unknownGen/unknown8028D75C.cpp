#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8006665C(void *);
void fn_8028D884(void *,short);
void fn_8028DA5C();
extern char lbl_804CCBF0[];
extern void *lbl_805621F4;
extern void *lbl_80566118;
}
struct UnknownGenObject8028D80C {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 char unknown10[20];
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 char unknown3C[20];
};
extern "C" {
void *fn_8028D75C(void *object){
 fn_8028DA5C();
 return fn_8006546C(lbl_80566118,object);
}
void *fn_8028D794(){
 if(!lbl_80566118) lbl_80566118=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80566118;
}
void *fn_8028D7D0(){
 if(!lbl_80566118 || !(reinterpret_cast<unsigned int *>(lbl_80566118)[0x24/4]&4)) fn_8028DA5C();
 return lbl_80566118;
}
void *fn_8028D80C(){
 UnknownGenObject8028D80C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CCBF0;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_8028D884(&object,-1);
 return result;
}
}
#pragma pop
