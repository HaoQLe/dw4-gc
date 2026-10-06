#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801B09E4();
void fn_801B4C6C();
extern char lbl_804AD478[];
extern char lbl_804AD488[];
extern char lbl_804B39E8[];
extern char lbl_804B3DCC[];
extern void *lbl_80564A4C;
void *fn_801B4A64();
void *fn_801B4AA0();
void fn_801B4BAC();
void fn_801B4BD4();
void *fn_801B4C4C();
}
struct UnknownGenRoot801B4AA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4AA0(){fn_8006665C(this);}
};
struct UnknownGenObject801B4AA0 : UnknownGenRoot801B4AA0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[52];
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject801B4AA0(){unknown00=lbl_804B3DCC;}
};
extern "C" {
void *fn_801B4A64(){
 if(!lbl_80564A4C || !(reinterpret_cast<unsigned int *>(lbl_80564A4C)[0x24/4]&4)) fn_801B4BAC();
 return lbl_80564A4C;
}
void *fn_801B4AA0(){
 UnknownGenObject801B4AA0 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B3DCC;
 object.unknown08.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B4BAC(){
 fn_80066188((int)fn_801B4BD4);
}
void fn_801B4BD4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A4C,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801B4C4C,(int)lbl_804AD488,72,(int)fn_801B4AA0,(int)fn_801B4C6C,0,(int)lbl_804AD478);
}
void *fn_801B4C4C(){return fn_801B4A64();}
}
#pragma pop
