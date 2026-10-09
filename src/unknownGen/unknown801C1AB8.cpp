#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80065D94(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801C20FC();
void *fn_801E57B8();
void *fn_801E57DC();
void igAnimationState_register();
void igEnbayaAnimationSource_fieldInit();
void igObject_register();
extern char lbl_804AAFB8[];
extern char lbl_804AFAC8[];
extern char lbl_804AFB7C[];
extern char lbl_804B4D40[];
extern char lbl_804B4DAC[];
extern char lbl_804B559C[];
extern char lbl_8056069C[8];
extern char lbl_805606A4[8];
extern char lbl_805606AC[8];
extern char lbl_805606B4[8];
extern void *lbl_805621F4;
extern void *lbl_80564F94;
extern void *lbl_80564FA0;
extern void *lbl_80564FA4;
extern void *lbl_805653BC;
void *igEnbayaAnimationState_getMeta();
void *igEnbayaAnimationState_vtableRead();
void fn_801C1C04();
void igEnbayaAnimationState_register();
void *igEnbayaAnimationState_getMetaCall();
void *igEnbayaAnimationState_parentMeta();
void igEnbayaAnimationState_fieldInit();
void *fn_801C1D68();
void *fn_801C1D88();
void *igEnbayaAnimationSource_getMeta();
void *igEnbayaAnimationSource_vtableRead();
void fn_801C1EE4();
void igEnbayaAnimationSource_register();
void *igEnbayaAnimationSource_getMetaCall();
}
struct UnknownGenRoot801C1AF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1AF4(){fn_8006665C(this);}
};
struct UnknownGenObject801C1AF4_0 : UnknownGenRoot801C1AF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 inline ~UnknownGenObject801C1AF4_0(){unknown00=lbl_804B559C;}
};
struct UnknownGenObject801C1AF4 : UnknownGenObject801C1AF4_0 {
 char unknown7C[44];
 inline ~UnknownGenObject801C1AF4(){unknown00=lbl_804B4D40;}
};
struct UnknownGenObject801C1EA4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igEnbayaAnimationState_getMeta(){
 if(!lbl_80564F94 || !(reinterpret_cast<unsigned int *>(lbl_80564F94)[0x24/4]&4)) fn_801C1C04();
 return lbl_80564F94;
}
void *igEnbayaAnimationState_vtableRead(){
 UnknownGenObject801C1AF4 object;
 object.unknown00=lbl_804B559C;
 object.unknown08.value=0;
 object.unknown18.value=0;
 object.unknown78.value=0;
 object.unknown00=lbl_804B4D40;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C1C04(){
 fn_80066188((int)igEnbayaAnimationState_register);
}
void igEnbayaAnimationState_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F94,(int)igAnimationState_register,(int)igEnbayaAnimationState_parentMeta,(int)igEnbayaAnimationState_getMetaCall,(int)lbl_804AFAC8,168,(int)igEnbayaAnimationState_vtableRead,(int)igEnbayaAnimationState_fieldInit,(int)fn_801C1D68,0);
}
void *igEnbayaAnimationState_getMetaCall(){return igEnbayaAnimationState_getMeta();}
void *igEnbayaAnimationState_parentMeta(){return lbl_805653BC;}
void igEnbayaAnimationState_fieldInit(){
 void *value0=lbl_80564F94;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8056069C,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value3,1);
 fn_800659C0(value0,lbl_805606A4,lbl_805606AC,lbl_805606B4,value1);
 fn_80065D94((void *)fn_801C1D88);
}
void *fn_801C1D68(){return fn_801E57B8();}
void *fn_801C1D88(){return fn_801E57DC();}
void *fn_801C1DA8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564FA0) lbl_80564FA0=fn_800635C8(data+0x7A0,data+0x4B9C,data+0x4BB0,0x5);
 return lbl_80564FA0;
}
void *fn_801C1DF4(void *object){
 fn_801C1EE4();
 return fn_8006546C(lbl_80564FA4,object);
}
void *fn_801C1E2C(){
 if(!lbl_80564FA4) lbl_80564FA4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564FA4;
}
void *igEnbayaAnimationSource_getMeta(){
 if(!lbl_80564FA4 || !(reinterpret_cast<unsigned int *>(lbl_80564FA4)[0x24/4]&4)) fn_801C1EE4();
 return lbl_80564FA4;
}
void *igEnbayaAnimationSource_vtableRead(){
 UnknownGenObject801C1EA4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B4DAC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C1EE4(){
 fn_80066188((int)igEnbayaAnimationSource_register);
}
void igEnbayaAnimationSource_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564FA4,(int)igObject_register,(int)fn_800237D0,(int)igEnbayaAnimationSource_getMetaCall,(int)lbl_804AFB7C,40,(int)igEnbayaAnimationSource_vtableRead,(int)igEnbayaAnimationSource_fieldInit,(int)fn_801C20FC,0);
}
void *igEnbayaAnimationSource_getMetaCall(){return igEnbayaAnimationSource_getMeta();}
}
#pragma pop
