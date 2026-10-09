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
void *fn_80143FCC();
void igInterface_register();
void igItemInterface_fieldInit();
void igIterateGraph_register();
void igIterator_register();
void igManager_register();
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
void *igIterateField_getMeta();
void *igIterateField_vtableRead();
void fn_8014453C();
void igIterateField_register();
void *igIterateField_getMetaCall();
void igIterateField_fieldInit();
void *igIterateDerived_getMeta();
void *igIterateDerived_vtableRead();
void fn_80144780();
void igIterateDerived_register();
void *igIterateDerived_getMetaCall();
void igIterateDerived_fieldInit();
void *igIterateAttr_getMeta();
void *igIterateAttr_vtableRead();
void fn_80144A8C();
void igIterateAttr_register();
void *igIterateAttr_getMetaCall();
void *igIterateAttr_parentMeta();
void igIterateAttr_fieldInit();
void *igItemManager_getMeta();
void *igItemManager_vtableRead();
void fn_80144CCC();
void igItemManager_register();
void *igItemManager_getMetaCall();
void *igItemInterface_getMeta();
void *igItemInterface_vtableRead();
void fn_80144F44();
void igItemInterface_register();
void *igItemInterface_getMetaCall();
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
void *igIterateField_getMeta(){
 if(!lbl_8056410C || !(reinterpret_cast<unsigned int *>(lbl_8056410C)[0x24/4]&4)) fn_8014453C();
 return lbl_8056410C;
}
void *igIterateField_vtableRead(){
 UnknownGenObject801444A8 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9B30;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014453C(){
 fn_80066188((int)igIterateField_register);
}
void igIterateField_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056410C,(int)igIterator_register,(int)fn_80143FCC,(int)igIterateField_getMetaCall,(int)lbl_8049E5C4,16,(int)igIterateField_vtableRead,(int)igIterateField_fieldInit,0,(int)lbl_8055F9D0);
}
void *igIterateField_getMetaCall(){return igIterateField_getMeta();}
void igIterateField_fieldInit(){
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
void *igIterateDerived_getMeta(){
 if(!lbl_80564118 || !(reinterpret_cast<unsigned int *>(lbl_80564118)[0x24/4]&4)) fn_80144780();
 return lbl_80564118;
}
void *igIterateDerived_vtableRead(){
 UnknownGenObject801446EC object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9AD4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144780(){
 fn_80066188((int)igIterateDerived_register);
}
void igIterateDerived_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564118,(int)igIterator_register,(int)fn_80143FCC,(int)igIterateDerived_getMetaCall,(int)lbl_8049E5EC,16,(int)igIterateDerived_vtableRead,(int)igIterateDerived_fieldInit,0,(int)lbl_8055F9F8);
}
void *igIterateDerived_getMetaCall(){return igIterateDerived_getMeta();}
void igIterateDerived_fieldInit(){
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
void *igIterateAttr_getMeta(){
 if(!lbl_80564124 || !(reinterpret_cast<unsigned int *>(lbl_80564124)[0x24/4]&4)) fn_80144A8C();
 return lbl_80564124;
}
void *igIterateAttr_vtableRead(){
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
 fn_80066188((int)igIterateAttr_register);
}
void igIterateAttr_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564124,(int)igIterateGraph_register,(int)igIterateAttr_parentMeta,(int)igIterateAttr_getMetaCall,(int)lbl_8049E60C,28,(int)igIterateAttr_vtableRead,(int)igIterateAttr_fieldInit,0,(int)lbl_8049E600);
}
void *igIterateAttr_getMetaCall(){return igIterateAttr_getMeta();}
void *igIterateAttr_parentMeta(){return lbl_805640FC;}
void igIterateAttr_fieldInit(){
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
void *igItemManager_getMeta(){
 if(!lbl_80564130 || !(reinterpret_cast<unsigned int *>(lbl_80564130)[0x24/4]&4)) fn_80144CCC();
 return lbl_80564130;
}
void *igItemManager_vtableRead(){
 UnknownGenObject80144C74_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804A9A0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144CCC(){
 fn_80066188((int)igItemManager_register);
}
void igItemManager_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564130,(int)igManager_register,(int)fn_8013B2B0,(int)igItemManager_getMetaCall,(int)lbl_8049E628,32,(int)igItemManager_vtableRead,0,0,0);
}
void *igItemManager_getMetaCall(){return igItemManager_getMeta();}
void *fn_80144D7C(){
 if(!lbl_80564134) lbl_80564134=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564134;
}
void *igItemInterface_getMeta(){
 if(!lbl_80564134 || !(reinterpret_cast<unsigned int *>(lbl_80564134)[0x24/4]&4)) fn_80144F44();
 return lbl_80564134;
}
void *igItemInterface_vtableRead(){
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
 fn_80066188((int)igItemInterface_register);
}
void igItemInterface_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564134,(int)igInterface_register,(int)fn_8013B680,(int)igItemInterface_getMetaCall,(int)lbl_8049E64C,52,(int)igItemInterface_vtableRead,(int)igItemInterface_fieldInit,0,(int)lbl_8049E638);
}
void *igItemInterface_getMetaCall(){return igItemInterface_getMeta();}
}
#pragma pop
