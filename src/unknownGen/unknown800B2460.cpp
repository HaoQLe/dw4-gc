#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B25F8();
extern char lbl_80478CE8[];
extern char lbl_8047B964[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E2A0[8];
extern void *lbl_805626B8;
void *fn_800B2460();
void *fn_800B249C();
void fn_800B253C();
void fn_800B2564();
void *fn_800B25D8();
}
struct UnknownGenRoot800B249C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B249C(){fn_8006665C(this);}
};
struct UnknownGenObject800B249C : UnknownGenRoot800B249C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B249C(){unknown00=lbl_8047B964;}
};
extern "C" {
void *fn_800B2460(){
 if(!lbl_805626B8 || !(reinterpret_cast<unsigned int *>(lbl_805626B8)[0x24/4]&4)) fn_800B253C();
 return lbl_805626B8;
}
void *fn_800B249C(){
 UnknownGenObject800B249C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B964;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B253C(){
 fn_80066188((int)fn_800B2564);
}
void fn_800B2564(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626B8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B25D8,(int)lbl_80478CE8,16,(int)fn_800B249C,(int)fn_800B25F8,0,(int)lbl_8055E2A0);
}
void *fn_800B25D8(){return fn_800B2460();}
}
#pragma pop
