#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
void *fn_800284EC();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80071694(void *,void *);
void *fn_8011EDB4();
void fn_801AA6DC();
void *fn_801AB2B4();
void *fn_801ABB34();
void igAnimationModifier_fieldInit();
void igInfo_register();
void igNamedObject_register();
void igObjectList_register();
void igObject_register();
void igTransformSource_register();
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char lbl_804B1F84[];
extern char lbl_804B1F98[];
extern char lbl_804B1FA8[];
extern char lbl_804B1FC0[];
extern char lbl_804B1FE4[];
extern char lbl_804B2014[];
extern char lbl_804B2074[];
extern char lbl_804B5608[];
extern char lbl_804B644C[];
extern char lbl_804B64A8[];
extern char lbl_804B650C[];
extern char lbl_804B6570[];
extern char lbl_804B65CC[];
extern char lbl_804B6630[];
extern char lbl_80560924[8];
extern char lbl_8056092C[4];
extern char lbl_80560930[4];
extern char lbl_80560934[4];
extern char lbl_80560938[4];
extern char lbl_8056093C[8];
extern char lbl_80560944[8];
extern char lbl_8056094C[8];
extern char lbl_80560954[8];
extern char lbl_8056095C[8];
extern char lbl_80560964[8];
extern char lbl_8056096C[4];
extern char lbl_80560970[4];
extern char lbl_80560974[4];
extern char lbl_80560978[4];
extern char lbl_8056097C[8];
extern char lbl_80560994[8];
extern void *lbl_805621F4;
extern void *lbl_80565428;
extern void *lbl_8056542C;
extern void *lbl_80565434;
extern void *lbl_80565438;
extern void *lbl_80565444;
extern void *lbl_8056544C;
extern void *lbl_80565450;
extern void *lbl_80565454;
void *igAnimationSequence_getMeta();
void fn_801C9D2C();
void igAnimationSequence_register();
void *igAnimationSequence_getMetaCall();
void *igAnimationInfo_getMeta();
void *igAnimationInfo_vtableRead();
void fn_801C9F0C();
void igAnimationInfo_register();
void *igAnimationInfo_getMetaCall();
void igAnimationInfo_fieldInit();
void *fn_801CA050();
void *igAnimationTokenList_getMeta();
void *igAnimationTokenList_vtableRead();
void fn_801CA138();
void igAnimationTokenList_register();
void *igAnimationTokenList_getMetaCall();
void *igAnimationToken_getMeta();
void *igAnimationToken_vtableRead();
void fn_801CA328();
void igAnimationToken_register();
void *igAnimationToken_getMetaCall();
void igAnimationToken_fieldInit();
void *igAnimationHierarchy_getMeta();
void fn_801CA4F0();
void igAnimationHierarchy_register();
void *igAnimationHierarchy_getMetaCall();
void igAnimationHierarchy_fieldInit();
void *igAnimationModifierList_getMeta();
void *igAnimationModifierList_vtableRead();
void fn_801CA71C();
void igAnimationModifierList_register();
void *igAnimationModifierList_getMetaCall();
void *igAnimationModifier_getMeta();
void *igAnimationModifier_vtableRead();
void fn_801CA8E0();
void igAnimationModifier_register();
void *igAnimationModifier_getMetaCall();
}
struct UnknownGenRoot801C9E14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C9E14(){fn_8006665C(this);}
};
struct UnknownGenObject801C9E14_0 : UnknownGenRoot801C9E14 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C9E14_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C9E14_1 : UnknownGenObject801C9E14_0 {
 inline ~UnknownGenObject801C9E14_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801C9E14 : UnknownGenObject801C9E14_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801C9E14(){unknown00=lbl_804B5608;}
};
struct UnknownGenObject801CA0C8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CA260 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA260(){fn_8006665C(this);}
};
struct UnknownGenObject801CA260 : UnknownGenRoot801CA260 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801CA260(){unknown00=lbl_804B6570;}
};
struct UnknownGenObject801CA6AC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CA858 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CA858(){fn_8006665C(this);}
};
struct UnknownGenObject801CA858 : UnknownGenRoot801CA858 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject801CA858(){unknown00=lbl_804B644C;}
};
extern "C" {
void *igAnimationSequence_getMeta(){
 if(!lbl_80565428 || !(reinterpret_cast<unsigned int *>(lbl_80565428)[0x24/4]&4)) fn_801C9D2C();
 return lbl_80565428;
}
void fn_801C9D2C(){
 fn_80066188((int)igAnimationSequence_register);
}
void igAnimationSequence_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80565428,(int)igTransformSource_register,(int)fn_801ABB34,(int)igAnimationSequence_getMetaCall,(int)lbl_804B1F84,8,0,0,0,0);
}
void *igAnimationSequence_getMetaCall(){return igAnimationSequence_getMeta();}
void *igAnimationInfo_getMeta(){
 if(!lbl_8056542C || !(reinterpret_cast<unsigned int *>(lbl_8056542C)[0x24/4]&4)) fn_801C9F0C();
 return lbl_8056542C;
}
void *igAnimationInfo_vtableRead(){
 UnknownGenObject801C9E14 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B5608;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C9F0C(){
 fn_80066188((int)igAnimationInfo_register);
}
void igAnimationInfo_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056542C,(int)igInfo_register,(int)fn_800284EC,(int)igAnimationInfo_getMetaCall,(int)lbl_804B1F98,24,(int)igAnimationInfo_vtableRead,(int)igAnimationInfo_fieldInit,0,(int)lbl_80560924);
}
void *igAnimationInfo_getMetaCall(){return igAnimationInfo_getMeta();}
void igAnimationInfo_fieldInit(){
 void *value0=lbl_8056542C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8056092C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801CA050();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560930,lbl_80560934,lbl_80560938,value1);
}
void *fn_801CA050(){
 if(!lbl_80565434) lbl_80565434=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565434;
}
void *igAnimationTokenList_getMeta(){
 if(!lbl_80565434 || !(reinterpret_cast<unsigned int *>(lbl_80565434)[0x24/4]&4)) fn_801CA138();
 return lbl_80565434;
}
void *igAnimationTokenList_vtableRead(){
 UnknownGenObject801CA0C8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B6630;
 object.unknown00=lbl_804B65CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA138(){
 fn_80066188((int)igAnimationTokenList_register);
}
void igAnimationTokenList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565434,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTokenList_getMetaCall,(int)lbl_804B1FA8,20,(int)igAnimationTokenList_vtableRead,0,0,(int)lbl_8056093C);
}
void *igAnimationTokenList_getMetaCall(){return igAnimationTokenList_getMeta();}
void *fn_801CA1EC(void *object){
 fn_801CA328();
 return fn_8006546C(lbl_80565438,object);
}
void *igAnimationToken_getMeta(){
 if(!lbl_80565438 || !(reinterpret_cast<unsigned int *>(lbl_80565438)[0x24/4]&4)) fn_801CA328();
 return lbl_80565438;
}
void *igAnimationToken_vtableRead(){
 UnknownGenObject801CA260 object;
 object.unknown00=lbl_804B6570;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA328(){
 fn_80066188((int)igAnimationToken_register);
}
void igAnimationToken_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565438,(int)igObject_register,(int)fn_800237D0,(int)igAnimationToken_getMetaCall,(int)lbl_804B1FC0,16,(int)igAnimationToken_vtableRead,(int)igAnimationToken_fieldInit,0,(int)lbl_80560944);
}
void *igAnimationToken_getMetaCall(){return igAnimationToken_getMeta();}
void igAnimationToken_fieldInit(){
 void *value0=lbl_80565438;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8056094C,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,(void *)0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_801AB2B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 fn_800659C0(value0,lbl_80560954,lbl_8056095C,lbl_80560964,value1);
}
void *fn_801CA478(){
 if(!lbl_80565444) lbl_80565444=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565444;
}
void *igAnimationHierarchy_getMeta(){
 if(!lbl_80565444 || !(reinterpret_cast<unsigned int *>(lbl_80565444)[0x24/4]&4)) fn_801CA4F0();
 return lbl_80565444;
}
void fn_801CA4F0(){
 fn_80066188((int)igAnimationHierarchy_register);
}
void igAnimationHierarchy_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80565444,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimationHierarchy_getMetaCall,(int)lbl_804B1FE4,16,0,(int)igAnimationHierarchy_fieldInit,0,0);
}
void *igAnimationHierarchy_getMetaCall(){return igAnimationHierarchy_getMeta();}
void igAnimationHierarchy_fieldInit(){
 void *value0=lbl_80565444;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8056096C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8011EDB4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+53)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+64)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+65)=1;
 fn_800659C0(value0,lbl_80560970,lbl_80560974,lbl_80560978,value1);
}
void *fn_801CA634(){
 if(!lbl_8056544C) lbl_8056544C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056544C;
}
void *igAnimationModifierList_getMeta(){
 if(!lbl_8056544C || !(reinterpret_cast<unsigned int *>(lbl_8056544C)[0x24/4]&4)) fn_801CA71C();
 return lbl_8056544C;
}
void *igAnimationModifierList_vtableRead(){
 UnknownGenObject801CA6AC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B650C;
 object.unknown00=lbl_804B64A8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA71C(){
 fn_80066188((int)igAnimationModifierList_register);
}
void igAnimationModifierList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056544C,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationModifierList_getMetaCall,(int)lbl_804B2014,20,(int)igAnimationModifierList_vtableRead,0,0,(int)lbl_8056097C);
}
void *igAnimationModifierList_getMetaCall(){return igAnimationModifierList_getMeta();}
void *fn_801CA7D0(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565450) lbl_80565450=fn_800635C8(data+0x70AC,data+0x708C,data+0x709C,0x4);
 return lbl_80565450;
}
void *igAnimationModifier_getMeta(){
 if(!lbl_80565454 || !(reinterpret_cast<unsigned int *>(lbl_80565454)[0x24/4]&4)) fn_801CA8E0();
 return lbl_80565454;
}
void *igAnimationModifier_vtableRead(){
 UnknownGenObject801CA858 object;
 object.unknown00=lbl_804B644C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CA8E0(){
 fn_80066188((int)igAnimationModifier_register);
}
void igAnimationModifier_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565454,(int)igObject_register,(int)fn_800237D0,(int)igAnimationModifier_getMetaCall,(int)lbl_804B2074,20,(int)igAnimationModifier_vtableRead,(int)igAnimationModifier_fieldInit,0,(int)lbl_80560994);
}
void *igAnimationModifier_getMetaCall(){return igAnimationModifier_getMeta();}
}
#pragma pop
