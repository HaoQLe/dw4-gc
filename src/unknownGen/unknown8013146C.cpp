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
void fn_80131628();
extern char lbl_8049BEBC[];
extern char lbl_804A2F08[];
extern char lbl_8055F504[8];
extern void *lbl_805621F4;
extern void *lbl_80563B08;
void *fn_801314A8();
void *fn_801314E4();
void fn_8013156C();
void fn_80131594();
void *fn_80131608();
}
struct UnknownGenRoot801314E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801314E4(){fn_8006665C(this);}
};
struct UnknownGenObject801314E4 : UnknownGenRoot801314E4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801314E4(){unknown00=lbl_804A2F08;}
};
extern "C" {
void *fn_8013146C(){
 if(!lbl_80563B08) lbl_80563B08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B08;
}
void *fn_801314A8(){
 if(!lbl_80563B08 || !(reinterpret_cast<unsigned int *>(lbl_80563B08)[0x24/4]&4)) fn_8013156C();
 return lbl_80563B08;
}
void *fn_801314E4(){
 UnknownGenObject801314E4 object;
 object.unknown00=lbl_804A2F08;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013156C(){
 fn_80066188((int)fn_80131594);
}
void fn_80131594(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B08,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131608,(int)lbl_8049BEBC,12,(int)fn_801314E4,(int)fn_80131628,0,(int)lbl_8055F504);
}
void *fn_80131608(){return fn_801314A8();}
}
#pragma pop
