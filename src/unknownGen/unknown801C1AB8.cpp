#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80065D94(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801C20FC();
void *fn_801E57B8();
void *fn_801E57DC();
void igAnimationState_register();
void igEnbayaAnimationSource_fieldInit();
void igObject_register();
extern char lbl_804AAFB8[];
extern char igEnbayaAnimationState_className[];
extern char igEnbayaAnimationSource_className[];
extern char igEnbayaAnimationState_vtable[];
extern char igEnbayaAnimationSource_vtable[];
extern char igAnimationState_vtable[];
extern char lbl_8056069C[8];
extern char lbl_805606A4[8];
extern char lbl_805606AC[8];
extern char lbl_805606B4[8];
extern void *lbl_805621F4;
extern void *igEnbayaAnimationState_meta;
extern void *lbl_80564FA0;
extern void *igEnbayaAnimationSource_meta;
extern void *igAnimationState_meta;
void *igEnbayaAnimationState_getMeta();
void *igEnbayaAnimationState_vtableRead();
void igEnbayaAnimationState_registerNow();
void igEnbayaAnimationState_register();
void *igEnbayaAnimationState_getMetaCall();
void *igEnbayaAnimationState_parentMeta();
void igEnbayaAnimationState_fieldInit();
void *fn_801C1D68();
void *fn_801C1D88();
void *igEnbayaAnimationSource_getMeta();
void *igEnbayaAnimationSource_vtableRead();
void igEnbayaAnimationSource_registerNow();
void igEnbayaAnimationSource_register();
void *igEnbayaAnimationSource_getMetaCall();
}
struct UnknownGenRoot801C1AF4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1AF4(){igObject_construct(this);}
};
struct UnknownGenObject801C1AF4_0 : UnknownGenRoot801C1AF4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 char unknown1C[92];
 UnknownGenRefMember unknown78;
 inline ~UnknownGenObject801C1AF4_0(){unknown00=igAnimationState_vtable;}
};
struct UnknownGenObject801C1AF4 : UnknownGenObject801C1AF4_0 {
 char unknown7C[44];
 inline ~UnknownGenObject801C1AF4(){unknown00=igEnbayaAnimationState_vtable;}
};
struct UnknownGenObject801C1EA4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igEnbayaAnimationState_getMeta(){
 if(!igEnbayaAnimationState_meta || !(reinterpret_cast<unsigned int *>(igEnbayaAnimationState_meta)[0x24/4]&4)) igEnbayaAnimationState_registerNow();
 return igEnbayaAnimationState_meta;
}
void *igEnbayaAnimationState_vtableRead(){
 UnknownGenObject801C1AF4 object;
 object.unknown00=igAnimationState_vtable;
 object.unknown08.value=0;
 object.unknown18.value=0;
 object.unknown78.value=0;
 object.unknown00=igEnbayaAnimationState_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igEnbayaAnimationState_registerNow(){
 meta_registerNow((int)igEnbayaAnimationState_register);
}
void igEnbayaAnimationState_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igEnbayaAnimationState_meta,(int)igAnimationState_register,(int)igEnbayaAnimationState_parentMeta,(int)igEnbayaAnimationState_getMetaCall,(int)igEnbayaAnimationState_className,168,(int)igEnbayaAnimationState_vtableRead,(int)igEnbayaAnimationState_fieldInit,(int)fn_801C1D68,0);
}
void *igEnbayaAnimationState_getMetaCall(){return igEnbayaAnimationState_getMeta();}
void *igEnbayaAnimationState_parentMeta(){return igAnimationState_meta;}
void igEnbayaAnimationState_fieldInit(){
 void *value0=igEnbayaAnimationState_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8056069C,2);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value3,1);
 meta_setupFields(value0,lbl_805606A4,lbl_805606AC,lbl_805606B4,value1);
 fn_80065D94((void *)fn_801C1D88);
}
void *fn_801C1D68(){return fn_801E57B8();}
void *fn_801C1D88(){return fn_801E57DC();}
void *fn_801C1DA8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80564FA0) lbl_80564FA0=fn_800635C8(data+0x7A0,data+0x4B9C,data+0x4BB0,0x5);
 return lbl_80564FA0;
}
void *igEnbayaAnimationSource_create(void *object){
 igEnbayaAnimationSource_registerNow();
 return meta_createInstance(igEnbayaAnimationSource_meta,object);
}
void *fn_801C1E2C(){
 if(!igEnbayaAnimationSource_meta) igEnbayaAnimationSource_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igEnbayaAnimationSource_meta;
}
void *igEnbayaAnimationSource_getMeta(){
 if(!igEnbayaAnimationSource_meta || !(reinterpret_cast<unsigned int *>(igEnbayaAnimationSource_meta)[0x24/4]&4)) igEnbayaAnimationSource_registerNow();
 return igEnbayaAnimationSource_meta;
}
void *igEnbayaAnimationSource_vtableRead(){
 UnknownGenObject801C1EA4_0 object;
 igObject_construct(&object);
 object.unknown00=igEnbayaAnimationSource_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igEnbayaAnimationSource_registerNow(){
 meta_registerNow((int)igEnbayaAnimationSource_register);
}
void igEnbayaAnimationSource_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igEnbayaAnimationSource_meta,(int)igObject_register,(int)fn_800237D0,(int)igEnbayaAnimationSource_getMetaCall,(int)igEnbayaAnimationSource_className,40,(int)igEnbayaAnimationSource_vtableRead,(int)igEnbayaAnimationSource_fieldInit,(int)fn_801C20FC,0);
}
void *igEnbayaAnimationSource_getMetaCall(){return igEnbayaAnimationSource_getMeta();}
}
#pragma pop
