#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800CF17C();
extern char lbl_8047650C[];
extern char lbl_80488408[];
extern char lbl_80488418[];
extern char lbl_8049233C[];
extern void *lbl_805621F4;
extern void *lbl_80562D84;
void *fn_800CEF30();
void *fn_800CEF6C();
void fn_800CF0BC();
void fn_800CF0E4();
void *fn_800CF15C();
}
struct UnknownGenRoot800CEF6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CEF6C(){fn_8006665C(this);}
};
struct UnknownGenObject800CEF6C_0 : UnknownGenRoot800CEF6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CEF6C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CEF6C : UnknownGenObject800CEF6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800CEF6C(){unknown00=lbl_8049233C;}
};
extern "C" {
void *fn_800CEEBC(void *object){
 fn_800CF0BC();
 return fn_8006546C(lbl_80562D84,object);
}
void *fn_800CEEF4(){
 if(!lbl_80562D84) lbl_80562D84=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D84;
}
void *fn_800CEF30(){
 if(!lbl_80562D84 || !(reinterpret_cast<unsigned int *>(lbl_80562D84)[0x24/4]&4)) fn_800CF0BC();
 return lbl_80562D84;
}
void *fn_800CEF6C(){
 UnknownGenObject800CEF6C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049233C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CF0BC(){
 fn_80066188((int)fn_800CF0E4);
}
void fn_800CF0E4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562D84,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800CF15C,(int)lbl_80488418,24,(int)fn_800CEF6C,(int)fn_800CF17C,0,(int)lbl_80488408);
}
void *fn_800CF15C(){return fn_800CEF30();}
}
#pragma pop
