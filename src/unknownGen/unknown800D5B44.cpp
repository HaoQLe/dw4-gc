#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D1D20();
void fn_800D5D1C();
extern char lbl_8048A5D4[];
extern char lbl_80491134[];
extern char lbl_8049304C[];
extern char lbl_804930AC[];
extern char lbl_8055ED34[8];
extern void *lbl_80562F58;
extern void *lbl_805630C4;
void *fn_800D5B7C();
void *fn_800D5BB8();
void fn_800D5C58();
void fn_800D5C80();
void *fn_800D5CF4();
void *fn_800D5D14();
}
struct UnknownGenRoot800D5BB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5BB8(){fn_8006665C(this);}
};
struct UnknownGenObject800D5BB8 : UnknownGenRoot800D5BB8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[36];
 inline ~UnknownGenObject800D5BB8(){unknown00=lbl_80491134;}
};
extern "C" {
void *fn_800D5B44(void *object){
 fn_800D5C58();
 return fn_8006546C(lbl_805630C4,object);
}
void *fn_800D5B7C(){
 if(!lbl_805630C4 || !(reinterpret_cast<unsigned int *>(lbl_805630C4)[0x24/4]&4)) fn_800D5C58();
 return lbl_805630C4;
}
void *fn_800D5BB8(){
 UnknownGenObject800D5BB8 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_8049304C;
 object.unknown00=lbl_80491134;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D5C58(){
 fn_80066188((int)fn_800D5C80);
}
void fn_800D5C80(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805630C4,(int)fn_800D1D20,(int)fn_800D5D14,(int)fn_800D5CF4,(int)lbl_8048A5D4,48,(int)fn_800D5BB8,(int)fn_800D5D1C,0,(int)lbl_8055ED34);
}
void *fn_800D5CF4(){return fn_800D5B7C();}
void *fn_800D5D14(){return lbl_80562F58;}
}
#pragma pop
