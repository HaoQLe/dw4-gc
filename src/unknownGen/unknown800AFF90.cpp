#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AF31C();
void fn_800B013C();
extern char lbl_804786DC[];
extern char lbl_8047AF6C[];
extern char lbl_8047B198[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562548;
extern void *lbl_805625B0;
void *fn_800AFF90();
void *fn_800AFFCC();
void fn_800B007C();
void fn_800B00A4();
void *fn_800B0114();
void *fn_800B0134();
}
struct UnknownGenRoot800AFFCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AFFCC(){fn_8006665C(this);}
};
struct UnknownGenObject800AFFCC_0 : UnknownGenRoot800AFFCC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AFFCC_0(){unknown00=lbl_8047AF6C;}
};
struct UnknownGenObject800AFFCC : UnknownGenObject800AFFCC_0 {
 char unknown10[32];
 inline ~UnknownGenObject800AFFCC(){unknown00=lbl_8047B198;}
};
extern "C" {
void *fn_800AFF90(){
 if(!lbl_805625B0 || !(reinterpret_cast<unsigned int *>(lbl_805625B0)[0x24/4]&4)) fn_800B007C();
 return lbl_805625B0;
}
void *fn_800AFFCC(){
 UnknownGenObject800AFFCC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AF6C;
 object.unknown0C.value=0;
 object.unknown00=lbl_8047B198;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B007C(){
 fn_80066188((int)fn_800B00A4);
}
void fn_800B00A4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625B0,(int)fn_800AF31C,(int)fn_800B0134,(int)fn_800B0114,(int)lbl_804786DC,44,(int)fn_800AFFCC,(int)fn_800B013C,0,0);
}
void *fn_800B0114(){return fn_800AFF90();}
void *fn_800B0134(){return lbl_80562548;}
}
#pragma pop
