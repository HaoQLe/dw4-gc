#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80143C60();
void *fn_80143FCC();
void fn_801442EC();
void fn_80144B54();
extern char lbl_8049E5C4[];
extern char lbl_8049E5EC[];
extern char lbl_8049E600[];
extern char lbl_8049E60C[];
extern char lbl_804A9A78[];
extern char lbl_804A9AD4[];
extern char lbl_804A9B30[];
extern char lbl_804A9B8C[];
extern char lbl_804A9C44[];
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
extern void *lbl_805640FC;
extern void *lbl_8056410C;
extern void *lbl_80564118;
extern void *lbl_80564124;
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
}
#pragma pop
