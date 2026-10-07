#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_80029F84();
void *fn_800343B8();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800BB61C();
void fn_8012FC48();
void *fn_8013B2B0();
void *fn_8013B680();
void fn_80142038();
void fn_80143C60();
void *fn_80143FCC();
void fn_801442EC();
void fn_80145004();
void fn_80146870();
extern char lbl_8049E5C4[];
extern char lbl_8049E5EC[];
extern char lbl_8049E600[];
extern char lbl_8049E60C[];
extern char lbl_8049E628[];
extern char lbl_8049E638[];
extern char lbl_8049E64C[];
extern char lbl_804A62BC[];
extern char lbl_804A6460[];
extern char lbl_804A9A0C[];
extern char lbl_804A9A78[];
extern char lbl_804A9AD4[];
extern char lbl_804A9B30[];
extern char lbl_804A9B8C[];
extern char lbl_804A9C44[];
extern char lbl_804AA1C0[];
extern char lbl_804AA22C[];
extern char lbl_8055F9D0[8];
extern char lbl_8055F9D8[8];
extern char lbl_8055F9E0[8];
extern char lbl_8055F9E8[8];
extern char lbl_8055F9F0[8];
extern char lbl_8055F9F8[8];
extern char lbl_8055FA00[8];
extern char lbl_8055FA08[8];
extern char lbl_8055FA10[8];
extern char lbl_8055FA18[8];
extern char lbl_8055FA20[8];
extern char lbl_8055FA28[8];
extern char lbl_8055FA30[8];
extern char lbl_8055FA38[8];
extern void *lbl_805621F4;
extern void *lbl_805640FC;
extern void *lbl_8056410C;
extern void *lbl_80564118;
extern void *lbl_80564124;
extern void *lbl_80564130;
extern void *lbl_80564134;
void *fn_8014446C();
void *fn_801444A8();
void fn_8014453C();
void fn_80144564();
void *fn_801445D8();
void fn_801445F8();
void *fn_801446B0();
void *fn_801446EC();
void fn_80144780();
void fn_801447A8();
void *fn_8014481C();
void fn_8014483C();
void *fn_801448F4();
void *fn_80144930();
void fn_80144A8C();
void fn_80144AB4();
void *fn_80144B2C();
void *fn_80144B4C();
void fn_80144B54();
void *fn_80144C38();
void *fn_80144C74();
void fn_80144CCC();
void fn_80144CF4();
void *fn_80144D5C();
void *fn_80144DB8();
void *fn_80144DF4();
void fn_80144F44();
void fn_80144F6C();
void *fn_80144FE4();
}
struct UnknownGenRoot801444A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801444A8(){fn_8006665C(this);}
};
struct UnknownGenObject801444A8 : UnknownGenRoot801444A8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801444A8(){unknown00=lbl_804A9B30;}
};
struct UnknownGenRoot801446EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801446EC(){fn_8006665C(this);}
};
struct UnknownGenObject801446EC : UnknownGenRoot801446EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801446EC(){unknown00=lbl_804A9AD4;}
};
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
struct UnknownGenObject80144C74_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80144DF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80144DF4(){fn_8006665C(this);}
};
struct UnknownGenObject80144DF4 : UnknownGenRoot80144DF4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80144DF4(){unknown00=lbl_804A62BC;}
};
extern "C" {
void *fn_80144434(void *object){
 fn_8014453C();
 return fn_8006546C(lbl_8056410C,object);
}
void *fn_8014446C(){
 if(!lbl_8056410C || !(reinterpret_cast<unsigned int *>(lbl_8056410C)[0x24/4]&4)) fn_8014453C();
 return lbl_8056410C;
}
void *fn_801444A8(){
 UnknownGenObject801444A8 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9B30;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014453C(){
 fn_80066188((int)fn_80144564);
}
void fn_80144564(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056410C,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_801445D8,(int)lbl_8049E5C4,16,(int)fn_801444A8,(int)fn_801445F8,0,(int)lbl_8055F9D0);
}
void *fn_801445D8(){return fn_8014446C();}
void fn_801445F8(){
 void *value0=lbl_8056410C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F9D8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055F9E0,lbl_8055F9E8,lbl_8055F9F0,value1);
}
void *fn_80144678(void *object){
 fn_80144780();
 return fn_8006546C(lbl_80564118,object);
}
void *fn_801446B0(){
 if(!lbl_80564118 || !(reinterpret_cast<unsigned int *>(lbl_80564118)[0x24/4]&4)) fn_80144780();
 return lbl_80564118;
}
void *fn_801446EC(){
 UnknownGenObject801446EC object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9AD4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144780(){
 fn_80066188((int)fn_801447A8);
}
void fn_801447A8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564118,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_8014481C,(int)lbl_8049E5EC,16,(int)fn_801446EC,(int)fn_8014483C,0,(int)lbl_8055F9F8);
}
void *fn_8014481C(){return fn_801446B0();}
void fn_8014483C(){
 void *value0=lbl_80564118;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FA00,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055FA08,lbl_8055FA10,lbl_8055FA18,value1);
}
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
void fn_80144B54(){
 void *value0=lbl_80564124;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FA20,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800343B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_8055FA28,lbl_8055FA30,lbl_8055FA38,value1);
}
void *fn_80144BFC(){
 if(!lbl_80564130) lbl_80564130=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564130;
}
void *fn_80144C38(){
 if(!lbl_80564130 || !(reinterpret_cast<unsigned int *>(lbl_80564130)[0x24/4]&4)) fn_80144CCC();
 return lbl_80564130;
}
void *fn_80144C74(){
 UnknownGenObject80144C74_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804A9A0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144CCC(){
 fn_80066188((int)fn_80144CF4);
}
void fn_80144CF4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564130,(int)fn_80142038,(int)fn_8013B2B0,(int)fn_80144D5C,(int)lbl_8049E628,32,(int)fn_80144C74,0,0,0);
}
void *fn_80144D5C(){return fn_80144C38();}
void *fn_80144D7C(){
 if(!lbl_80564134) lbl_80564134=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564134;
}
void *fn_80144DB8(){
 if(!lbl_80564134 || !(reinterpret_cast<unsigned int *>(lbl_80564134)[0x24/4]&4)) fn_80144F44();
 return lbl_80564134;
}
void *fn_80144DF4(){
 UnknownGenObject80144DF4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A62BC;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144F44(){
 fn_80066188((int)fn_80144F6C);
}
void fn_80144F6C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564134,(int)fn_80146870,(int)fn_8013B680,(int)fn_80144FE4,(int)lbl_8049E64C,52,(int)fn_80144DF4,(int)fn_80145004,0,(int)lbl_8049E638);
}
void *fn_80144FE4(){return fn_80144DB8();}
}
#pragma pop
