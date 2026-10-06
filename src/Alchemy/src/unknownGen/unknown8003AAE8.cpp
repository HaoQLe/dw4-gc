#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80027BE4();
void *fn_80027D08();
void fn_8003AD18();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_804685A0[];
extern char lbl_8046F87C[];
extern char lbl_8047156C[];
extern char lbl_8055D700[8];
extern void *lbl_805616A8;
extern void *lbl_80562048;
void *fn_8003AB24();
void fn_8003AC74();
void fn_8003AC9C();
void *fn_8003AD10();
}
struct UnknownGenRoot8003AB24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003AB24(){fn_8006665C(this);}
};
struct UnknownGenObject8003AB24_0 : UnknownGenRoot8003AB24 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8003AB24_0(){unknown00=lbl_8047156C;}
};
struct UnknownGenObject8003AB24 : UnknownGenObject8003AB24_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject8003AB24(){unknown00=lbl_8046F87C;}
};
extern "C" {
void *fn_8003AAE8(){
 if(!lbl_80562048 || !(reinterpret_cast<unsigned int *>(lbl_80562048)[0x24/4]&4)) fn_8003AC74();
 return lbl_80562048;
}
void *fn_8003AB24(){
 UnknownGenObject8003AB24 object;
 object.unknown00=lbl_8047156C;
 object.unknown08.value=0;
 object.unknown00=lbl_8046F87C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003AC74(){
 fn_80066188((int)fn_8003AC9C);
}
void fn_8003AC9C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562048,(int)fn_80027BE4,(int)fn_8003AD10,(int)fn_80027D08,(int)lbl_804685A0,44,(int)fn_8003AB24,(int)fn_8003AD18,0,(int)lbl_8055D700);
}
void *fn_8003AD10(){return lbl_805616A8;}
}
#pragma pop
