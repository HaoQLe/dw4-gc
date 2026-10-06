#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_80217254();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804BA408[];
extern char lbl_804BA420[];
extern char lbl_804BA42C[];
extern char lbl_804BC7C8[];
extern char lbl_804BC880[];
extern char lbl_804BC8E4[];
extern char lbl_80560BA0[8];
extern void *lbl_80565A04;
extern void *lbl_80565A08;
void *fn_80216EA8();
void *fn_80216EE4();
void fn_80216F54();
void fn_80216F7C();
void *fn_80216FE8();
void *fn_80217040();
void *fn_8021707C();
void fn_80217194();
void fn_802171BC();
void *fn_80217234();
}
struct UnknownGenObject80216EE4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8021707C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021707C(){fn_8006665C(this);}
};
struct UnknownGenObject8021707C_0 : UnknownGenRoot8021707C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021707C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8021707C : UnknownGenObject8021707C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8021707C(){unknown00=lbl_804BC7C8;}
};
extern "C" {
void *fn_80216E70(void *object){
 fn_80216F54();
 return fn_8006546C(lbl_80565A04,object);
}
void *fn_80216EA8(){
 if(!lbl_80565A04 || !(reinterpret_cast<unsigned int *>(lbl_80565A04)[0x24/4]&4)) fn_80216F54();
 return lbl_80565A04;
}
void *fn_80216EE4(){
 UnknownGenObject80216EE4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804BC8E4;
 object.unknown00=lbl_804BC880;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80216F54(){
 fn_80066188((int)fn_80216F7C);
}
void fn_80216F7C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A04,(int)fn_8002907C,(int)fn_80024180,(int)fn_80216FE8,(int)lbl_804BA408,20,(int)fn_80216EE4,0,0,(int)lbl_80560BA0);
}
void *fn_80216FE8(){return fn_80216EA8();}
void *fn_80217008(void *object){
 fn_80217194();
 return fn_8006546C(lbl_80565A08,object);
}
void *fn_80217040(){
 if(!lbl_80565A08 || !(reinterpret_cast<unsigned int *>(lbl_80565A08)[0x24/4]&4)) fn_80217194();
 return lbl_80565A08;
}
void *fn_8021707C(){
 UnknownGenObject8021707C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804BC7C8;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217194(){
 fn_80066188((int)fn_802171BC);
}
void fn_802171BC(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A08,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80217234,(int)lbl_804BA42C,24,(int)fn_8021707C,(int)fn_80217254,0,(int)lbl_804BA420);
}
void *fn_80217234(){return fn_80217040();}
}
#pragma pop
