#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801C19D0();
extern char lbl_804AFA4C[];
extern char lbl_804AFA58[];
extern char lbl_804B4CE4[];
extern void *lbl_80564F84;
void *fn_801C17D4();
void *fn_801C1810();
void fn_801C1910();
void fn_801C1938();
void *fn_801C19B0();
}
struct UnknownGenRoot801C1810 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1810(){fn_8006665C(this);}
};
struct UnknownGenObject801C1810 : UnknownGenRoot801C1810 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801C1810(){unknown00=lbl_804B4CE4;}
};
extern "C" {
void *fn_801C179C(void *object){
 fn_801C1910();
 return fn_8006546C(lbl_80564F84,object);
}
void *fn_801C17D4(){
 if(!lbl_80564F84 || !(reinterpret_cast<unsigned int *>(lbl_80564F84)[0x24/4]&4)) fn_801C1910();
 return lbl_80564F84;
}
void *fn_801C1810(){
 UnknownGenObject801C1810 object;
 object.unknown00=lbl_804B4CE4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C1910(){
 fn_80066188((int)fn_801C1938);
}
void fn_801C1938(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F84,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C19B0,(int)lbl_804AFA58,20,(int)fn_801C1810,(int)fn_801C19D0,0,(int)lbl_804AFA4C);
}
void *fn_801C19B0(){return fn_801C17D4();}
}
#pragma pop
