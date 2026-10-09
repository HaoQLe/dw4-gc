#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800CE528();
void *fn_800D031C();
void igCapabilityManager_register();
void igContextExt_register();
void igCustomState_register();
void igCustomVectorState_fieldInit();
void igExternalDirEntry_register();
void igObjectList_register();
extern char lbl_804729A4[];
extern char lbl_80472EF4[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A18C[];
extern char lbl_8048A1DC[];
extern char lbl_8048A3F4[];
extern char lbl_8048A404[];
extern char lbl_8048A420[];
extern char lbl_8048A438[];
extern char lbl_8049288C[];
extern char lbl_804929B4[];
extern char lbl_80492AD0[];
extern char lbl_80493230[];
extern char lbl_80493290[];
extern char lbl_804932F0[];
extern char lbl_80493354[];
extern char lbl_8055ECB8[4];
extern char lbl_8055ECBC[4];
extern char lbl_8055ECC0[4];
extern char lbl_8055ECC4[4];
extern char lbl_8055ECC8[8];
extern void *lbl_80561B8C;
extern void *lbl_805621F4;
extern void *lbl_80563004;
extern void *lbl_80563060;
extern void *lbl_8056306C;
extern void *lbl_80563074;
extern void *lbl_80563078;
extern void *lbl_80563080;
extern void *lbl_80563084;
void *igGenericCapabilityManager_getMeta();
void *igGenericCapabilityManager_vtableRead();
void fn_800D4824();
void igGenericCapabilityManager_register();
void *igGenericCapabilityManager_getMetaCall();
void *igExternalImageEntry_getMeta();
void *igExternalImageEntry_vtableRead();
void fn_800D4A88();
void igExternalImageEntry_register();
void *igExternalImageEntry_getMetaCall();
void *igExternalImageEntry_parentMeta();
void *igDisableExt_getMeta();
void fn_800D4BB8();
void igDisableExt_register();
void *igDisableExt_getMetaCall();
void *igDecalExt_getMeta();
void fn_800D4CA0();
void igDecalExt_register();
void *igDecalExt_getMetaCall();
void igDecalExt_fieldInit();
void *igCustomVectorStateList_getMeta();
void *igCustomVectorStateList_vtableRead();
void fn_800D4EA0();
void igCustomVectorStateList_register();
void *igCustomVectorStateList_getMetaCall();
void *igCustomVectorState_getMeta();
void *igCustomVectorState_vtableRead();
void fn_800D5070();
void igCustomVectorState_register();
void *igCustomVectorState_getMetaCall();
void *fn_800D5128();
}
struct UnknownGenObject800D47D8_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot800D4910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4910(){fn_8006665C(this);}
};
struct UnknownGenObject800D4910_0 : UnknownGenRoot800D4910 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4910_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D4910_1 : UnknownGenObject800D4910_0 {
 inline ~UnknownGenObject800D4910_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800D4910_2 : UnknownGenObject800D4910_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 UnknownGenString unknown28;
 inline ~UnknownGenObject800D4910_2(){unknown00=lbl_804729A4;}
};
struct UnknownGenObject800D4910 : UnknownGenObject800D4910_2 {
 char unknown2C[12];
 inline ~UnknownGenObject800D4910(){unknown00=lbl_804929B4;}
};
struct UnknownGenObject800D4E30_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D4FC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D4FC8(){fn_8006665C(this);}
};
struct UnknownGenObject800D4FC8_0 : UnknownGenRoot800D4FC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D4FC8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D4FC8_1 : UnknownGenObject800D4FC8_0 {
 inline ~UnknownGenObject800D4FC8_1(){unknown00=lbl_80493290;}
};
struct UnknownGenObject800D4FC8 : UnknownGenObject800D4FC8_1 {
 char unknown0C[20];
 inline ~UnknownGenObject800D4FC8(){unknown00=lbl_80493230;}
};
extern "C" {
void *fn_800D4764(void *object){
 fn_800D4824();
 return fn_8006546C(lbl_80563060,object);
}
void *igGenericCapabilityManager_getMeta(){
 if(!lbl_80563060 || !(reinterpret_cast<unsigned int *>(lbl_80563060)[0x24/4]&4)) fn_800D4824();
 return lbl_80563060;
}
void *igGenericCapabilityManager_vtableRead(){
 UnknownGenObject800D47D8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80492AD0;
 object.unknown00=lbl_8049288C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4824(){
 fn_80066188((int)igGenericCapabilityManager_register);
}
void igGenericCapabilityManager_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563060,(int)igCapabilityManager_register,(int)fn_800CE528,(int)igGenericCapabilityManager_getMetaCall,(int)lbl_8048A18C,8,(int)igGenericCapabilityManager_vtableRead,0,0,0);
}
void *igGenericCapabilityManager_getMetaCall(){return igGenericCapabilityManager_getMeta();}
void *igExternalImageEntry_getMeta(){
 if(!lbl_8056306C || !(reinterpret_cast<unsigned int *>(lbl_8056306C)[0x24/4]&4)) fn_800D4A88();
 return lbl_8056306C;
}
void *igExternalImageEntry_vtableRead(){
 UnknownGenObject800D4910 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_804729A4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_804929B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4A88(){
 fn_80066188((int)igExternalImageEntry_register);
}
void igExternalImageEntry_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056306C,(int)igExternalDirEntry_register,(int)igExternalImageEntry_parentMeta,(int)igExternalImageEntry_getMetaCall,(int)lbl_8048A1DC,44,(int)igExternalImageEntry_vtableRead,0,0,0);
}
void *igExternalImageEntry_getMetaCall(){return igExternalImageEntry_getMeta();}
void *igExternalImageEntry_parentMeta(){return lbl_80561B8C;}
void *fn_800D4B40(){
 if(!lbl_80563074) lbl_80563074=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563074;
}
void *igDisableExt_getMeta(){
 if(!lbl_80563074 || !(reinterpret_cast<unsigned int *>(lbl_80563074)[0x24/4]&4)) fn_800D4BB8();
 return lbl_80563074;
}
void fn_800D4BB8(){
 fn_80066188((int)igDisableExt_register);
}
void igDisableExt_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563074,(int)igContextExt_register,(int)fn_800D031C,(int)igDisableExt_getMetaCall,(int)lbl_8048A3F4,20,0,0,0,0);
}
void *igDisableExt_getMetaCall(){return igDisableExt_getMeta();}
void *igDecalExt_getMeta(){
 if(!lbl_80563078 || !(reinterpret_cast<unsigned int *>(lbl_80563078)[0x24/4]&4)) fn_800D4CA0();
 return lbl_80563078;
}
void fn_800D4CA0(){
 fn_80066188((int)igDecalExt_register);
}
void igDecalExt_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80563078,(int)igContextExt_register,(int)fn_800D031C,(int)igDecalExt_getMetaCall,(int)lbl_8048A404,24,0,(int)igDecalExt_fieldInit,0,0);
}
void *igDecalExt_getMetaCall(){return igDecalExt_getMeta();}
void igDecalExt_fieldInit(){
 void *value0=lbl_80563078;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055ECB8,1);
 fn_800659C0(value0,lbl_8055ECBC,lbl_8055ECC0,lbl_8055ECC4,value1);
}
void *fn_800D4DBC(void *object){
 fn_800D4EA0();
 return fn_8006546C(lbl_80563080,object);
}
void *igCustomVectorStateList_getMeta(){
 if(!lbl_80563080 || !(reinterpret_cast<unsigned int *>(lbl_80563080)[0x24/4]&4)) fn_800D4EA0();
 return lbl_80563080;
}
void *igCustomVectorStateList_vtableRead(){
 UnknownGenObject800D4E30_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80493354;
 object.unknown00=lbl_804932F0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4EA0(){
 fn_80066188((int)igCustomVectorStateList_register);
}
void igCustomVectorStateList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563080,(int)igObjectList_register,(int)fn_80024180,(int)igCustomVectorStateList_getMetaCall,(int)lbl_8048A420,20,(int)igCustomVectorStateList_vtableRead,0,0,(int)lbl_8055ECC8);
}
void *igCustomVectorStateList_getMetaCall(){return igCustomVectorStateList_getMeta();}
void *fn_800D4F54(void *object){
 fn_800D5070();
 return fn_8006546C(lbl_80563084,object);
}
void *igCustomVectorState_getMeta(){
 if(!lbl_80563084 || !(reinterpret_cast<unsigned int *>(lbl_80563084)[0x24/4]&4)) fn_800D5070();
 return lbl_80563084;
}
void *igCustomVectorState_vtableRead(){
 UnknownGenObject800D4FC8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493290;
 object.unknown00=lbl_80493230;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D5070(){
 fn_80066188((int)igCustomVectorState_register);
}
void igCustomVectorState_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563084,(int)igCustomState_register,(int)fn_800D5128,(int)igCustomVectorState_getMetaCall,(int)lbl_8048A438,28,(int)igCustomVectorState_vtableRead,(int)igCustomVectorState_fieldInit,0,0);
}
void *igCustomVectorState_getMetaCall(){return igCustomVectorState_getMeta();}
void *fn_800D5128(){return lbl_80563004;}
}
#pragma pop
