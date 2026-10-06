#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_801394D0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049D334[];
extern char lbl_8049D354[];
extern char lbl_8049D380[];
extern char lbl_8049D394[];
extern char lbl_8049D3A4[];
extern char lbl_804A4304[];
extern char lbl_804AA2FC[];
extern char lbl_804AA360[];
extern char lbl_804AA3C4[];
extern char lbl_804AA428[];
extern char lbl_8055F720[8];
extern char lbl_8055F728[4];
extern char lbl_8055F72C[4];
extern char lbl_8055F730[4];
extern char lbl_8055F734[4];
extern char lbl_8055F738[8];
extern void *lbl_805621F4;
extern void *lbl_80563DCC;
extern void *lbl_80563DD0;
extern void *lbl_80563DD8;
extern void *lbl_80563DDC;
void *fn_80138DD4();
void *fn_80138E10();
void fn_80138E80();
void fn_80138EA8();
void *fn_80138F14();
void *fn_80138F34();
void fn_80138F70();
void fn_80138F98();
void *fn_80139004();
void fn_80139024();
void *fn_801390C8();
void *fn_80139104();
void fn_80139174();
void fn_8013919C();
void *fn_80139208();
void *fn_8013929C();
void *fn_801392D8();
void fn_80139410();
void fn_80139438();
void *fn_801394B0();
}
struct UnknownGenObject80138E10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80139104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801392D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801392D8(){fn_8006665C(this);}
};
struct UnknownGenObject801392D8 : UnknownGenRoot801392D8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject801392D8(){unknown00=lbl_804A4304;}
};
extern "C" {
void *fn_80138D9C(void *object){
 fn_80138E80();
 return fn_8006546C(lbl_80563DCC,object);
}
void *fn_80138DD4(){
 if(!lbl_80563DCC || !(reinterpret_cast<unsigned int *>(lbl_80563DCC)[0x24/4]&4)) fn_80138E80();
 return lbl_80563DCC;
}
void *fn_80138E10(){
 UnknownGenObject80138E10_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA428;
 object.unknown00=lbl_804AA3C4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138E80(){
 fn_80066188((int)fn_80138EA8);
}
void fn_80138EA8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DCC,(int)fn_8002907C,(int)fn_80024180,(int)fn_80138F14,(int)lbl_8049D334,20,(int)fn_80138E10,0,0,(int)lbl_8055F720);
}
void *fn_80138F14(){return fn_80138DD4();}
void *fn_80138F34(){
 if(!lbl_80563DD0 || !(reinterpret_cast<unsigned int *>(lbl_80563DD0)[0x24/4]&4)) fn_80138F70();
 return lbl_80563DD0;
}
void fn_80138F70(){
 fn_80066188((int)fn_80138F98);
}
void fn_80138F98(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563DD0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80139004,(int)lbl_8049D354,12,0,(int)fn_80139024,0,0);
}
void *fn_80139004(){return fn_80138F34();}
void fn_80139024(){
 void *value0=lbl_80563DD0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F728,1);
 fn_800659C0(value0,lbl_8055F72C,lbl_8055F730,lbl_8055F734,value1);
}
void *fn_8013908C(){
 if(!lbl_80563DD8) lbl_80563DD8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563DD8;
}
void *fn_801390C8(){
 if(!lbl_80563DD8 || !(reinterpret_cast<unsigned int *>(lbl_80563DD8)[0x24/4]&4)) fn_80139174();
 return lbl_80563DD8;
}
void *fn_80139104(){
 UnknownGenObject80139104_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA360;
 object.unknown00=lbl_804AA2FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139174(){
 fn_80066188((int)fn_8013919C);
}
void fn_8013919C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DD8,(int)fn_8002907C,(int)fn_80024180,(int)fn_80139208,(int)lbl_8049D380,20,(int)fn_80139104,0,0,(int)lbl_8055F738);
}
void *fn_80139208(){return fn_801390C8();}
void *fn_80139228(void *object){
 fn_80139410();
 return fn_8006546C(lbl_80563DDC,object);
}
void *fn_80139260(){
 if(!lbl_80563DDC) lbl_80563DDC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563DDC;
}
void *fn_8013929C(){
 if(!lbl_80563DDC || !(reinterpret_cast<unsigned int *>(lbl_80563DDC)[0x24/4]&4)) fn_80139410();
 return lbl_80563DDC;
}
void *fn_801392D8(){
 UnknownGenObject801392D8 object;
 object.unknown00=lbl_804A4304;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139410(){
 fn_80066188((int)fn_80139438);
}
void fn_80139438(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DDC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801394B0,(int)lbl_8049D3A4,28,(int)fn_801392D8,(int)fn_801394D0,0,(int)lbl_8049D394);
}
void *fn_801394B0(){return fn_8013929C();}
}
#pragma pop
