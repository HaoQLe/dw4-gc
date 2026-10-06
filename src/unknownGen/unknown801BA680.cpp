#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8006665C(void *);
void fn_801BA7A8(void *,short);
void fn_801BA980();
extern char lbl_804B4254[];
extern void *lbl_805621F4;
extern void *lbl_80564D48;
}
struct UnknownGenObject801BA730 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 char unknown10[8];
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 char unknown28[12];
 int unknown34;
 int unknown38;
 char unknown3C[4];
};
extern "C" {
void *fn_801BA680(void *object){
 fn_801BA980();
 return fn_8006546C(lbl_80564D48,object);
}
void *fn_801BA6B8(){
 if(!lbl_80564D48) lbl_80564D48=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D48;
}
void *fn_801BA6F4(){
 if(!lbl_80564D48 || !(reinterpret_cast<unsigned int *>(lbl_80564D48)[0x24/4]&4)) fn_801BA980();
 return lbl_80564D48;
}
void *fn_801BA730(){
 UnknownGenObject801BA730 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B4254;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown34=0;
 object.unknown38=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801BA7A8(&object,-1);
 return result;
}
}
#pragma pop
