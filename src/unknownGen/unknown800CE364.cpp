#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800CE530();
void fn_800D5908();
extern char lbl_80487F50[];
extern char lbl_80491D28[];
extern char lbl_80492AD0[];
extern char lbl_8055EA40[8];
extern void *lbl_80562CF4;
extern void *lbl_805630B8;
void *fn_800CE39C();
void *fn_800CE3D8();
void fn_800CE46C();
void fn_800CE494();
void *fn_800CE508();
void *fn_800CE528();
}
struct UnknownGenRoot800CE3D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CE3D8(){fn_8006665C(this);}
};
struct UnknownGenObject800CE3D8 : UnknownGenRoot800CE3D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800CE3D8(){unknown00=lbl_80491D28;}
};
extern "C" {
void *fn_800CE364(void *object){
 fn_800CE46C();
 return fn_8006546C(lbl_80562CF4,object);
}
void *fn_800CE39C(){
 if(!lbl_80562CF4 || !(reinterpret_cast<unsigned int *>(lbl_80562CF4)[0x24/4]&4)) fn_800CE46C();
 return lbl_80562CF4;
}
void *fn_800CE3D8(){
 UnknownGenObject800CE3D8 object;
 object.unknown00=lbl_80492AD0;
 object.unknown00=lbl_80491D28;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CE46C(){
 fn_80066188((int)fn_800CE494);
}
void fn_800CE494(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562CF4,(int)fn_800D5908,(int)fn_800CE528,(int)fn_800CE508,(int)lbl_80487F50,12,(int)fn_800CE3D8,(int)fn_800CE530,0,(int)lbl_8055EA40);
}
void *fn_800CE508(){return fn_800CE39C();}
void *fn_800CE528(){return lbl_805630B8;}
}
#pragma pop
