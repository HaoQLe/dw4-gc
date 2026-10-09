#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void *fn_80024180();
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
void fn_801AA6DC();
void *fn_801AF130();
void *fn_801CA478();
void igAnimationState_fieldInit();
void igNamedObject_register();
void igObjectList_register();
void igObjectPool_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AAFB8[];
extern char lbl_804B1A8C[];
extern char lbl_804B1AB0[];
extern char lbl_804B1AC8[];
extern char lbl_804B1B14[];
extern char lbl_804B1B24[];
extern char lbl_804B1BD4[];
extern char lbl_804B559C[];
extern char lbl_804B6694[];
extern char lbl_804B66F8[];
extern char lbl_804B675C[];
extern char lbl_804B67C0[];
extern char lbl_804B9898[];
extern char lbl_805608A8[8];
extern char lbl_805608B0[4];
extern char lbl_805608B4[4];
extern char lbl_805608B8[4];
extern char lbl_805608BC[4];
extern char lbl_805608C0[8];
extern char lbl_805608C8[8];
extern char lbl_805608D8[7];
extern char lbl_80560900[8];
extern void *lbl_805621F4;
extern void *lbl_805653A0;
extern void *lbl_805653A8;
extern void *lbl_805653AC;
extern void *lbl_805653B0;
extern void *lbl_805653B4;
extern void *lbl_805653B8;
extern void *lbl_805653BC;
void *igAnimationSystem_getMeta();
void fn_801C9388();
void igAnimationSystem_register();
void *igAnimationSystem_getMetaCall();
void igAnimationSystem_fieldInit();
void *igAnimationStatePool_getMeta();
void *igAnimationStatePool_vtableRead();
void fn_801C95B0();
void igAnimationStatePool_register();
void *igAnimationStatePool_getMetaCall();
void *igAnimationStateList_getMeta();
void *igAnimationStateList_vtableRead();
void fn_801C974C();
void igAnimationStateList_register();
void *igAnimationStateList_getMetaCall();
void *igAnimationState_getMeta();
void *igAnimationState_vtableRead();
void fn_801C9A94();
void igAnimationState_register();
void *igAnimationState_getMetaCall();
}
struct UnknownGenObject801C9534_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801C96DC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C9994 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C9994(){fn_8006665C(this);}
};
struct UnknownGenObject801C9994 : UnknownGenRoot801C9994 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 char unknown7C[44];
 inline ~UnknownGenObject801C9994(){unknown00=lbl_804B559C;}
};
extern "C" {
void *fn_801C9310(){
 if(!lbl_805653A0) lbl_805653A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805653A0;
}
void *igAnimationSystem_getMeta(){
 if(!lbl_805653A0 || !(reinterpret_cast<unsigned int *>(lbl_805653A0)[0x24/4]&4)) fn_801C9388();
 return lbl_805653A0;
}
void fn_801C9388(){
 fn_80066188((int)igAnimationSystem_register);
}
void igAnimationSystem_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_805653A0,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimationSystem_getMetaCall,(int)lbl_804B1A8C,16,0,(int)igAnimationSystem_fieldInit,0,(int)lbl_805608A8);
}
void *igAnimationSystem_getMetaCall(){return igAnimationSystem_getMeta();}
void igAnimationSystem_fieldInit(){
 void *value0=lbl_805653A0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805608B0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801CA478();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_805608B4,lbl_805608B8,lbl_805608BC,value1);
}
void *fn_801C94C0(void *object){
 fn_801C95B0();
 return fn_8006546C(lbl_805653A8,object);
}
void *igAnimationStatePool_getMeta(){
 if(!lbl_805653A8 || !(reinterpret_cast<unsigned int *>(lbl_805653A8)[0x24/4]&4)) fn_801C95B0();
 return lbl_805653A8;
}
void *igAnimationStatePool_vtableRead(){
 UnknownGenObject801C9534_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9898;
 object.unknown00=lbl_804B67C0;
 object.unknown00=lbl_804B675C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C95B0(){
 fn_80066188((int)igAnimationStatePool_register);
}
void igAnimationStatePool_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805653A8,(int)igObjectPool_register,(int)fn_801AF130,(int)igAnimationStatePool_getMetaCall,(int)lbl_804B1AB0,32,(int)igAnimationStatePool_vtableRead,0,0,(int)lbl_805608C0);
}
void *igAnimationStatePool_getMetaCall(){return igAnimationStatePool_getMeta();}
void *fn_801C9664(){
 if(!lbl_805653AC) lbl_805653AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805653AC;
}
void *igAnimationStateList_getMeta(){
 if(!lbl_805653AC || !(reinterpret_cast<unsigned int *>(lbl_805653AC)[0x24/4]&4)) fn_801C974C();
 return lbl_805653AC;
}
void *igAnimationStateList_vtableRead(){
 UnknownGenObject801C96DC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B66F8;
 object.unknown00=lbl_804B6694;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C974C(){
 fn_80066188((int)igAnimationStateList_register);
}
void igAnimationStateList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805653AC,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationStateList_getMetaCall,(int)lbl_804B1AC8,20,(int)igAnimationStateList_vtableRead,0,0,(int)lbl_805608C8);
}
void *igAnimationStateList_getMetaCall(){return igAnimationStateList_getMeta();}
void *fn_801C9800(){
 void *value0;
 if(!lbl_805653B0){
  value0=fn_800635C8(lbl_805608D8,lbl_804B1B14,lbl_804B1B24,4);
  lbl_805653B0=value0;
 }
 return lbl_805653B0;
}
void *fn_801C984C(){
 char *data=lbl_804AAFB8;
 if(!lbl_805653B4) lbl_805653B4=fn_800635C8(data+0x6BDC,data+0x6BAC,data+0x6BC4,0x6);
 return lbl_805653B4;
}
void *fn_801C9898(){
 char *data=lbl_804AAFB8;
 if(!lbl_805653B8) lbl_805653B8=fn_800635C8(data+0x6C10,data+0x6BF8,data+0x6C04,0x3);
 return lbl_805653B8;
}
void *fn_801C98E4(void *object){
 fn_801C9A94();
 return fn_8006546C(lbl_805653BC,object);
}
void *fn_801C991C(){
 if(!lbl_805653BC) lbl_805653BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805653BC;
}
void *igAnimationState_getMeta(){
 if(!lbl_805653BC || !(reinterpret_cast<unsigned int *>(lbl_805653BC)[0x24/4]&4)) fn_801C9A94();
 return lbl_805653BC;
}
void *igAnimationState_vtableRead(){
 UnknownGenObject801C9994 object;
 object.unknown00=lbl_804B559C;
 object.unknown08.value=0;
 object.unknown18.value=0;
 object.unknown78.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C9A94(){
 fn_80066188((int)igAnimationState_register);
}
void igAnimationState_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805653BC,(int)igObject_register,(int)fn_800237D0,(int)igAnimationState_getMetaCall,(int)lbl_804B1BD4,160,(int)igAnimationState_vtableRead,(int)igAnimationState_fieldInit,0,(int)lbl_80560900);
}
void *igAnimationState_getMetaCall(){return igAnimationState_getMeta();}
}
#pragma pop
