#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_801442EC();
void fn_80144B54();
extern char lbl_8049E600[];
extern char lbl_8049E60C[];
extern char lbl_804A9A78[];
extern char lbl_804A9B8C[];
extern char lbl_804A9C44[];
extern void *lbl_805640FC;
extern void *lbl_80564124;
void *fn_801448F4();
void *fn_80144930();
void fn_80144A8C();
void fn_80144AB4();
void *fn_80144B2C();
void *fn_80144B4C();
}
struct UnknownGenRoot80144930 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144930(){fn_8006665C(this);}
};
struct UnknownGenObject80144930_0 : UnknownGenRoot80144930 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80144930_0(){unknown00=lbl_804A9B8C;}
};
struct UnknownGenObject80144930 : UnknownGenObject80144930_0 {
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject80144930(){unknown00=lbl_804A9A78;}
};
extern "C" {
void *fn_801448BC(void *object){
 fn_80144A8C();
 return fn_8006546C(lbl_80564124,object);
}
void *fn_801448F4(){
 if(!lbl_80564124 || !(reinterpret_cast<unsigned int *>(lbl_80564124)[0x24/4]&4)) fn_80144A8C();
 return lbl_80564124;
}
void *fn_80144930(){
 UnknownGenObject80144930 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9B8C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A9A78;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144A8C(){
 fn_80066188((int)fn_80144AB4);
}
void fn_80144AB4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564124,(int)fn_801442EC,(int)fn_80144B4C,(int)fn_80144B2C,(int)lbl_8049E60C,28,(int)fn_80144930,(int)fn_80144B54,0,(int)lbl_8049E600);
}
void *fn_80144B2C(){return fn_801448F4();}
void *fn_80144B4C(){return lbl_805640FC;}
}
#pragma pop
