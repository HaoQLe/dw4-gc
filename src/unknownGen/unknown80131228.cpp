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
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_80131BE4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049BE94[];
extern char lbl_8049BEBC[];
extern char lbl_8049BEE4[];
extern char lbl_8049BF00[];
extern char lbl_8049BF1C[];
extern char lbl_8049BF28[];
extern char lbl_804A2EAC[];
extern char lbl_804A2F08[];
extern char lbl_804AA9B0[];
extern char lbl_804AAA0C[];
extern char lbl_804AAA70[];
extern char lbl_804AAAD4[];
extern char lbl_804AAB38[];
extern char lbl_8055F4EC[8];
extern char lbl_8055F4F4[4];
extern char lbl_8055F4F8[4];
extern char lbl_8055F4FC[4];
extern char lbl_8055F500[4];
extern char lbl_8055F504[8];
extern char lbl_8055F50C[4];
extern char lbl_8055F510[4];
extern char lbl_8055F514[4];
extern char lbl_8055F518[4];
extern char lbl_8055F51C[8];
extern char lbl_8055F524[8];
extern void *lbl_805621F4;
extern void *lbl_80563B00;
extern void *lbl_80563B08;
extern void *lbl_80563B10;
extern void *lbl_80563B14;
extern void *lbl_80563B18;
void *fn_80131264();
void *fn_801312A0();
void fn_80131328();
void fn_80131350();
void *fn_801313C4();
void fn_801313E4();
void *fn_801314A8();
void *fn_801314E4();
void fn_8013156C();
void fn_80131594();
void *fn_80131608();
void fn_80131628();
void *fn_801316B0();
void *fn_801316EC();
void *fn_80131728();
void fn_80131798();
void fn_801317C0();
void *fn_8013182C();
void *fn_8013184C();
void *fn_80131888();
void *fn_801318C4();
void fn_80131934();
void fn_8013195C();
void *fn_801319C8();
void *fn_80131A20();
void *fn_80131A5C();
void fn_80131B24();
void fn_80131B4C();
void *fn_80131BC4();
}
struct UnknownGenRoot801312A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801312A0(){fn_8006665C(this);}
};
struct UnknownGenObject801312A0 : UnknownGenRoot801312A0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801312A0(){unknown00=lbl_804A2EAC;}
};
struct UnknownGenRoot801314E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801314E4(){fn_8006665C(this);}
};
struct UnknownGenObject801314E4 : UnknownGenRoot801314E4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801314E4(){unknown00=lbl_804A2F08;}
};
struct UnknownGenObject80131728_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801318C4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80131A5C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131A5C(){fn_8006665C(this);}
};
struct UnknownGenObject80131A5C : UnknownGenRoot80131A5C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131A5C(){unknown00=lbl_804AA9B0;}
};
extern "C" {
void *fn_80131228(){
 if(!lbl_80563B00) lbl_80563B00=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B00;
}
void *fn_80131264(){
 if(!lbl_80563B00 || !(reinterpret_cast<unsigned int *>(lbl_80563B00)[0x24/4]&4)) fn_80131328();
 return lbl_80563B00;
}
void *fn_801312A0(){
 UnknownGenObject801312A0 object;
 object.unknown00=lbl_804A2EAC;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131328(){
 fn_80066188((int)fn_80131350);
}
void fn_80131350(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B00,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801313C4,(int)lbl_8049BE94,12,(int)fn_801312A0,(int)fn_801313E4,0,(int)lbl_8055F4EC);
}
void *fn_801313C4(){return fn_80131264();}
void fn_801313E4(){
 void *value0=lbl_80563B00;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F4F4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8013184C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055F4F8,lbl_8055F4FC,lbl_8055F500,value1);
}
void *fn_8013146C(){
 if(!lbl_80563B08) lbl_80563B08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B08;
}
void *fn_801314A8(){
 if(!lbl_80563B08 || !(reinterpret_cast<unsigned int *>(lbl_80563B08)[0x24/4]&4)) fn_8013156C();
 return lbl_80563B08;
}
void *fn_801314E4(){
 UnknownGenObject801314E4 object;
 object.unknown00=lbl_804A2F08;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013156C(){
 fn_80066188((int)fn_80131594);
}
void fn_80131594(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B08,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131608,(int)lbl_8049BEBC,12,(int)fn_801314E4,(int)fn_80131628,0,(int)lbl_8055F504);
}
void *fn_80131608(){return fn_801314A8();}
void fn_80131628(){
 void *value0=lbl_80563B08;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F50C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801316B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055F510,lbl_8055F514,lbl_8055F518,value1);
}
void *fn_801316B0(){
 if(!lbl_80563B10) lbl_80563B10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B10;
}
void *fn_801316EC(){
 if(!lbl_80563B10 || !(reinterpret_cast<unsigned int *>(lbl_80563B10)[0x24/4]&4)) fn_80131798();
 return lbl_80563B10;
}
void *fn_80131728(){
 UnknownGenObject80131728_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAB38;
 object.unknown00=lbl_804AAAD4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131798(){
 fn_80066188((int)fn_801317C0);
}
void fn_801317C0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B10,(int)fn_8002907C,(int)fn_80024180,(int)fn_8013182C,(int)lbl_8049BEE4,20,(int)fn_80131728,0,0,(int)lbl_8055F51C);
}
void *fn_8013182C(){return fn_801316EC();}
void *fn_8013184C(){
 if(!lbl_80563B14) lbl_80563B14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B14;
}
void *fn_80131888(){
 if(!lbl_80563B14 || !(reinterpret_cast<unsigned int *>(lbl_80563B14)[0x24/4]&4)) fn_80131934();
 return lbl_80563B14;
}
void *fn_801318C4(){
 UnknownGenObject801318C4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAA70;
 object.unknown00=lbl_804AAA0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131934(){
 fn_80066188((int)fn_8013195C);
}
void fn_8013195C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B14,(int)fn_8002907C,(int)fn_80024180,(int)fn_801319C8,(int)lbl_8049BF00,20,(int)fn_801318C4,0,0,(int)lbl_8055F524);
}
void *fn_801319C8(){return fn_80131888();}
void *fn_801319E8(void *object){
 fn_80131B24();
 return fn_8006546C(lbl_80563B18,object);
}
void *fn_80131A20(){
 if(!lbl_80563B18 || !(reinterpret_cast<unsigned int *>(lbl_80563B18)[0x24/4]&4)) fn_80131B24();
 return lbl_80563B18;
}
void *fn_80131A5C(){
 UnknownGenObject80131A5C object;
 object.unknown00=lbl_804AA9B0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131B24(){
 fn_80066188((int)fn_80131B4C);
}
void fn_80131B4C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B18,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131BC4,(int)lbl_8049BF28,24,(int)fn_80131A5C,(int)fn_80131BE4,0,(int)lbl_8049BF1C);
}
void *fn_80131BC4(){return fn_80131A20();}
}
#pragma pop
