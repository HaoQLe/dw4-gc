#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AF130();
void igAnimationCombinerBoneInfo_fieldInit();
void igObjectList_register();
void igObjectPool_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B21A4[];
extern char lbl_804B21C4[];
extern char lbl_804B21E8[];
extern char lbl_804B2208[];
extern char lbl_804B2214[];
extern char lbl_804B60D0[];
extern char lbl_804B612C[];
extern char lbl_804B6190[];
extern char lbl_804B61F4[];
extern char lbl_804B6258[];
extern char lbl_804B62BC[];
extern char lbl_804B6320[];
extern char lbl_804B9898[];
extern char lbl_805609B0[8];
extern char lbl_805609B8[8];
extern char lbl_805609C0[8];
extern void *lbl_805621F4;
extern void *lbl_80565480;
extern void *lbl_80565484;
extern void *lbl_80565488;
extern void *lbl_8056548C;
void *igAnimationCombinerBoneInfoPool_getMeta();
void *igAnimationCombinerBoneInfoPool_vtableRead();
void fn_801CB140();
void igAnimationCombinerBoneInfoPool_register();
void *igAnimationCombinerBoneInfoPool_getMetaCall();
void *igAnimationCombinerBoneInfoListList_getMeta();
void *igAnimationCombinerBoneInfoListList_vtableRead();
void fn_801CB2DC();
void igAnimationCombinerBoneInfoListList_register();
void *igAnimationCombinerBoneInfoListList_getMetaCall();
void *igAnimationCombinerBoneInfoList_getMeta();
void *igAnimationCombinerBoneInfoList_vtableRead();
void fn_801CB474();
void igAnimationCombinerBoneInfoList_register();
void *igAnimationCombinerBoneInfoList_getMetaCall();
void *igAnimationCombinerBoneInfo_getMeta();
void *igAnimationCombinerBoneInfo_vtableRead();
void fn_801CB664();
void igAnimationCombinerBoneInfo_register();
void *igAnimationCombinerBoneInfo_getMetaCall();
}
struct UnknownGenObject801CB0C4_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801CB26C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801CB404_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CB59C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CB59C(){fn_8006665C(this);}
};
struct UnknownGenObject801CB59C : UnknownGenRoot801CB59C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[44];
 inline ~UnknownGenObject801CB59C(){unknown00=lbl_804B60D0;}
};
extern "C" {
void *fn_801CB050(void *object){
 fn_801CB140();
 return fn_8006546C(lbl_80565480,object);
}
void *igAnimationCombinerBoneInfoPool_getMeta(){
 if(!lbl_80565480 || !(reinterpret_cast<unsigned int *>(lbl_80565480)[0x24/4]&4)) fn_801CB140();
 return lbl_80565480;
}
void *igAnimationCombinerBoneInfoPool_vtableRead(){
 UnknownGenObject801CB0C4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9898;
 object.unknown00=lbl_804B6320;
 object.unknown00=lbl_804B62BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB140(){
 fn_80066188((int)igAnimationCombinerBoneInfoPool_register);
}
void igAnimationCombinerBoneInfoPool_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565480,(int)igObjectPool_register,(int)fn_801AF130,(int)igAnimationCombinerBoneInfoPool_getMetaCall,(int)lbl_804B21A4,32,(int)igAnimationCombinerBoneInfoPool_vtableRead,0,0,(int)lbl_805609B0);
}
void *igAnimationCombinerBoneInfoPool_getMetaCall(){return igAnimationCombinerBoneInfoPool_getMeta();}
void *fn_801CB1F4(){
 if(!lbl_80565484) lbl_80565484=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565484;
}
void *igAnimationCombinerBoneInfoListList_getMeta(){
 if(!lbl_80565484 || !(reinterpret_cast<unsigned int *>(lbl_80565484)[0x24/4]&4)) fn_801CB2DC();
 return lbl_80565484;
}
void *igAnimationCombinerBoneInfoListList_vtableRead(){
 UnknownGenObject801CB26C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B6258;
 object.unknown00=lbl_804B61F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB2DC(){
 fn_80066188((int)igAnimationCombinerBoneInfoListList_register);
}
void igAnimationCombinerBoneInfoListList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565484,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationCombinerBoneInfoListList_getMetaCall,(int)lbl_804B21C4,20,(int)igAnimationCombinerBoneInfoListList_vtableRead,0,0,(int)lbl_805609B8);
}
void *igAnimationCombinerBoneInfoListList_getMetaCall(){return igAnimationCombinerBoneInfoListList_getMeta();}
void *fn_801CB390(void *object){
 fn_801CB474();
 return fn_8006546C(lbl_80565488,object);
}
void *igAnimationCombinerBoneInfoList_getMeta(){
 if(!lbl_80565488 || !(reinterpret_cast<unsigned int *>(lbl_80565488)[0x24/4]&4)) fn_801CB474();
 return lbl_80565488;
}
void *igAnimationCombinerBoneInfoList_vtableRead(){
 UnknownGenObject801CB404_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B6190;
 object.unknown00=lbl_804B612C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB474(){
 fn_80066188((int)igAnimationCombinerBoneInfoList_register);
}
void igAnimationCombinerBoneInfoList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565488,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationCombinerBoneInfoList_getMetaCall,(int)lbl_804B21E8,20,(int)igAnimationCombinerBoneInfoList_vtableRead,0,0,(int)lbl_805609C0);
}
void *igAnimationCombinerBoneInfoList_getMetaCall(){return igAnimationCombinerBoneInfoList_getMeta();}
void *fn_801CB528(void *object){
 fn_801CB664();
 return fn_8006546C(lbl_8056548C,object);
}
void *igAnimationCombinerBoneInfo_getMeta(){
 if(!lbl_8056548C || !(reinterpret_cast<unsigned int *>(lbl_8056548C)[0x24/4]&4)) fn_801CB664();
 return lbl_8056548C;
}
void *igAnimationCombinerBoneInfo_vtableRead(){
 UnknownGenObject801CB59C object;
 object.unknown00=lbl_804B60D0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CB664(){
 fn_80066188((int)igAnimationCombinerBoneInfo_register);
}
void igAnimationCombinerBoneInfo_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056548C,(int)igObject_register,(int)fn_800237D0,(int)igAnimationCombinerBoneInfo_getMetaCall,(int)lbl_804B2214,60,(int)igAnimationCombinerBoneInfo_vtableRead,(int)igAnimationCombinerBoneInfo_fieldInit,0,(int)lbl_804B2208);
}
void *igAnimationCombinerBoneInfo_getMetaCall(){return igAnimationCombinerBoneInfo_getMeta();}
}
#pragma pop
