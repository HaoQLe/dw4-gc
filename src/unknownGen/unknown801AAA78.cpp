#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801AABFC();
void fn_801AACA8();
extern char lbl_804AB3D4[];
extern char lbl_804B326C[];
extern char lbl_80560090[8];
extern void *lbl_80564668;
void *fn_801AAA78();
void *fn_801AAAB4();
void fn_801AAB3C();
void fn_801AAB64();
void *fn_801AABDC();
}
struct UnknownGenRoot801AAAB4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AAAB4(){fn_8006665C(this);}
};
struct UnknownGenObject801AAAB4 : UnknownGenRoot801AAAB4 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801AAAB4(){unknown00=lbl_804B326C;}
};
extern "C" {
void *fn_801AAA78(){
 if(!lbl_80564668 || !(reinterpret_cast<unsigned int *>(lbl_80564668)[0x24/4]&4)) fn_801AAB3C();
 return lbl_80564668;
}
void *fn_801AAAB4(){
 UnknownGenObject801AAAB4 object;
 object.unknown00=lbl_804B326C;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AAB3C(){
 fn_80066188((int)fn_801AAB64);
}
void fn_801AAB64(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564668,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AABDC,(int)lbl_804AB3D4,32,(int)fn_801AAAB4,(int)fn_801AABFC,(int)fn_801AACA8,(int)lbl_80560090);
}
void *fn_801AABDC(){return fn_801AAA78();}
}
#pragma pop
