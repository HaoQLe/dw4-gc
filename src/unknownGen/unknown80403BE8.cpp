#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80403D78(void *,short);
void fn_80404544(void *);
void fn_80404638();
extern char lbl_80461E48[];
extern char lbl_804F0060[];
extern char lbl_804F006C[];
extern void *lbl_8055C784;
extern void *lbl_8055C788;
extern void *lbl_805621F4;
}
struct UnknownGenObject80403D28 {
 void *unknown00;
 char unknown04[204];
};
extern "C" {
void *fn_80403BE8(){
 if(!lbl_8055C784) lbl_8055C784=fn_800635C8(lbl_80461E48,lbl_804F0060,lbl_804F006C,0x3);
 return lbl_8055C784;
}
void *fn_80403C48(void *object){
 fn_80404638();
 return fn_8006546C(lbl_8055C788,object);
}
void *fn_80403C88(){
 if(!lbl_8055C788) lbl_8055C788=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C788;
}
void *fn_80403CDC(){
 if(!lbl_8055C788 || !(reinterpret_cast<unsigned int *>(lbl_8055C788)[0x24/4]&4)) fn_80404638();
 return lbl_8055C788;
}
void *fn_80403D28(){
 UnknownGenObject80403D28 object;
 fn_80404544(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80403D78(&object,-1);
 return result;
}
}
#pragma pop
