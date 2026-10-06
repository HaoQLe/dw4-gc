#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_801313E4();
extern char lbl_8049BE94[];
extern char lbl_804A2EAC[];
extern char lbl_8055F4EC[8];
extern void *lbl_805621F4;
extern void *lbl_80563B00;
void *fn_80131264();
void *fn_801312A0();
void fn_80131328();
void fn_80131350();
void *fn_801313C4();
}
struct UnknownGenRoot801312A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801312A0(){fn_8006665C(this);}
};
struct UnknownGenObject801312A0 : UnknownGenRoot801312A0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801312A0(){unknown00=lbl_804A2EAC;}
};
extern "C" {
void *fn_80131228(){
 if(!lbl_80563B00) lbl_80563B00=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B00;
}
void *fn_80131264(){
 if(!lbl_80563B00 || !(reinterpret_cast<unsigned int *>(lbl_80563B00)[0x24/4]&4)) fn_80131328();
 return lbl_80563B00;
}
void *fn_801312A0(){
 UnknownGenObject801312A0 object;
 object.unknown00=lbl_804A2EAC;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131328(){
 fn_80066188((int)fn_80131350);
}
void fn_80131350(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B00,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801313C4,(int)lbl_8049BE94,12,(int)fn_801312A0,(int)fn_801313E4,0,(int)lbl_8055F4EC);
}
void *fn_801313C4(){return fn_80131264();}
}
#pragma pop
