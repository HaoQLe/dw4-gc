#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80402E28();
void fn_80408BB0();
extern char lbl_80462B1C[];
extern char lbl_80497C9C[];
extern char lbl_804F0E74[];
extern char lbl_804F1810[];
extern void *lbl_8055CAD8;
void *fn_8040893C();
void *fn_80408988();
void fn_80408AEC();
void fn_80408B14();
void *fn_80408B90();
}
struct UnknownGenRoot80408988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80408988(){fn_8006665C(this);}
};
struct UnknownGenObject80408988_0 : UnknownGenRoot80408988 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80408988_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject80408988 : UnknownGenObject80408988_0 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80408988(){unknown00=lbl_804F1810;}
};
extern "C" {
void *fn_804088FC(void *object){
 fn_80408AEC();
 return fn_8006546C(lbl_8055CAD8,object);
}
void *fn_8040893C(){
 if(!lbl_8055CAD8 || !(reinterpret_cast<unsigned int *>(lbl_8055CAD8)[0x24/4]&4)) fn_80408AEC();
 return lbl_8055CAD8;
}
void *fn_80408988(){
 UnknownGenObject80408988 object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_804F1810;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80408AEC(){
 fn_80066188((int)fn_80408B14);
}
void fn_80408B14(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055CAD8,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_80408B90,(int)lbl_80462B1C,40,(int)fn_80408988,(int)fn_80408BB0,0,(int)lbl_804F0E74);
}
void *fn_80408B90(){return fn_8040893C();}
}
#pragma pop
