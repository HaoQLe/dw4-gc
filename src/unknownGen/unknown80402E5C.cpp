#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8006665C(void *);
void fn_80402F78(void *,short);
void fn_80403150();
extern char lbl_804F1C80[];
extern void *lbl_8055C700;
extern void *lbl_805621F4;
}
struct UnknownGenObject80402EFC {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 char unknown20[4];
 int unknown24;
 int unknown28;
 char unknown2C[36];
};
extern "C" {
void *fn_80402E5C(){
 if(!lbl_8055C700) lbl_8055C700=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C700;
}
void *fn_80402EB0(){
 if(!lbl_8055C700 || !(reinterpret_cast<unsigned int *>(lbl_8055C700)[0x24/4]&4)) fn_80403150();
 return lbl_8055C700;
}
void *fn_80402EFC(){
 UnknownGenObject80402EFC object;
 fn_8006665C(&object);
 object.unknown00=lbl_804F1C80;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown24=0;
 object.unknown28=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80402F78(&object,-1);
 return result;
}
}
#pragma pop
