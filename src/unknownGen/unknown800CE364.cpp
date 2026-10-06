#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_80037594();
void fn_80037798();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800CE8BC();
void fn_800D5908();
extern char lbl_80472FA0[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_80487F50[];
extern char lbl_80487F84[];
extern char lbl_80487FD8[];
extern char lbl_80487FF0[];
extern char lbl_80491D28[];
extern char lbl_80492AD0[];
extern char lbl_80494398[];
extern char lbl_804943FC[];
extern char lbl_8055EA40[8];
extern char lbl_8055EA48[4];
extern char lbl_8055EA4C[4];
extern char lbl_8055EA50[4];
extern char lbl_8055EA54[4];
extern char lbl_8055EA58[8];
extern void *lbl_805621F4;
extern void *lbl_80562CF4;
extern void *lbl_80562CFC;
extern void *lbl_80562D00;
extern void *lbl_805630B8;
void *fn_800CE39C();
void *fn_800CE3D8();
void fn_800CE46C();
void fn_800CE494();
void *fn_800CE508();
void *fn_800CE528();
void fn_800CE530();
void *fn_800CE5F0();
void *fn_800CE62C();
void fn_800CE69C();
void fn_800CE6C4();
void *fn_800CE730();
void *fn_800CE788();
void *fn_800CE7C4();
void fn_800CE800();
void fn_800CE828();
void *fn_800CE89C();
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
struct UnknownGenObject800CE62C_0 {
 void *unknown00;
 char unknown04[20];
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
void fn_800CE530(){
 void *value0=lbl_80562CF4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EA48,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_8055EA4C,lbl_8055EA50,lbl_8055EA54,value1);
}
void *fn_800CE5B8(void *object){
 fn_800CE69C();
 return fn_8006546C(lbl_80562CFC,object);
}
void *fn_800CE5F0(){
 if(!lbl_80562CFC || !(reinterpret_cast<unsigned int *>(lbl_80562CFC)[0x24/4]&4)) fn_800CE69C();
 return lbl_80562CFC;
}
void *fn_800CE62C(){
 UnknownGenObject800CE62C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804943FC;
 object.unknown00=lbl_80494398;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CE69C(){
 fn_80066188((int)fn_800CE6C4);
}
void fn_800CE6C4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562CFC,(int)fn_80029694,(int)fn_80023FDC,(int)fn_800CE730,(int)lbl_80487F84,20,(int)fn_800CE62C,0,0,(int)lbl_8055EA58);
}
void *fn_800CE730(){return fn_800CE5F0();}
void *fn_800CE750(void *object){
 fn_800CE800();
 return fn_8006546C(lbl_80562D00,object);
}
void *fn_800CE788(){
 if(!lbl_80562D00) lbl_80562D00=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D00;
}
void *fn_800CE7C4(){
 if(!lbl_80562D00 || !(reinterpret_cast<unsigned int *>(lbl_80562D00)[0x24/4]&4)) fn_800CE800();
 return lbl_80562D00;
}
void fn_800CE800(){
 fn_80066188((int)fn_800CE828);
}
void fn_800CE828(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562D00,(int)fn_80037798,(int)fn_80037594,(int)fn_800CE89C,(int)lbl_80487FF0,320,0,(int)fn_800CE8BC,0,(int)lbl_80487FD8);
}
void *fn_800CE89C(){return fn_800CE7C4();}
}
#pragma pop
