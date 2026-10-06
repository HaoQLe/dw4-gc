#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8006665C(void *);
void fn_80406344(void *,short);
void fn_8040651C();
extern char lbl_804F1968[];
extern void *lbl_8055C974;
extern void *lbl_805621F4;
}
struct UnknownGenObject804062C8 {
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
 char unknown28[8];
};
extern "C" {
void *fn_80406228(){
 if(!lbl_8055C974) lbl_8055C974=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C974;
}
void *fn_8040627C(){
 if(!lbl_8055C974 || !(reinterpret_cast<unsigned int *>(lbl_8055C974)[0x24/4]&4)) fn_8040651C();
 return lbl_8055C974;
}
void *fn_804062C8(){
 UnknownGenObject804062C8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804F1968;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80406344(&object,-1);
 return result;
}
}
#pragma pop
