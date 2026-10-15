#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800B5424();
void *fn_800B58C8();
void *fn_8011148C();
void fn_801AA6DC();
void igJoint_registerNow();
void igGroup_register();
void igNode_register();
extern char igNamedObject_vtable[];
extern char igLightStateSet_className[];
extern char igLightSet_className[];
extern char igNode_vtable[];
extern char igLightStateSet_vtable[];
extern char igLightSet_vtable[];
extern char igGroup_vtable[];
extern char lbl_805604B4[8];
extern char lbl_805604BC[4];
extern char lbl_805604C0[4];
extern char lbl_805604C4[4];
extern char lbl_805604C8[4];
extern char lbl_805604CC[8];
extern char lbl_805604D4[4];
extern char lbl_805604D8[4];
extern char lbl_805604DC[4];
extern char lbl_805604E0[4];
extern void *lbl_805621F4;
extern void *igNode_meta;
extern void *igLightStateSet_meta;
extern void *igLightSet_meta;
extern void *igJoint_meta;
void *igLightStateSet_getMeta();
void *igLightStateSet_vtableRead();
void igLightStateSet_registerNow();
void igLightStateSet_register();
void *igLightStateSet_getMetaCall();
void igLightStateSet_fieldInit();
void *igLightSet_getMeta();
void *igLightSet_vtableRead();
void igLightSet_registerNow();
void igLightSet_register();
void *igLightSet_getMetaCall();
void *fn_801BBBF0();
void igLightSet_fieldInit();
}
struct UnknownGenRoot801BB648 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB648(){fn_8006665C(this);}
};
struct UnknownGenObject801BB648_0 : UnknownGenRoot801BB648 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB648_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BB648_1 : UnknownGenObject801BB648_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB648_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BB648_2 : UnknownGenObject801BB648_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BB648_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801BB648 : UnknownGenObject801BB648_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801BB648(){unknown00=igLightStateSet_vtable;}
};
struct UnknownGenRoot801BB9CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BB9CC(){fn_8006665C(this);}
};
struct UnknownGenObject801BB9CC_0 : UnknownGenRoot801BB9CC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BB9CC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BB9CC_1 : UnknownGenObject801BB9CC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BB9CC_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BB9CC : UnknownGenObject801BB9CC_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BB9CC(){unknown00=igLightSet_vtable;}
};
extern "C" {
void *fn_801BB5D0(){
 if(!igLightStateSet_meta) igLightStateSet_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightStateSet_meta;
}
void *igLightStateSet_getMeta(){
 if(!igLightStateSet_meta || !(reinterpret_cast<unsigned int *>(igLightStateSet_meta)[0x24/4]&4)) igLightStateSet_registerNow();
 return igLightStateSet_meta;
}
void *igLightStateSet_vtableRead(){
 UnknownGenObject801BB648 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igLightStateSet_vtable;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightStateSet_registerNow(){
 meta_registerNow((int)igLightStateSet_register);
}
void igLightStateSet_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igLightStateSet_meta,(int)igGroup_register,(int)fn_8011148C,(int)igLightStateSet_getMetaCall,(int)igLightStateSet_className,36,(int)igLightStateSet_vtableRead,(int)igLightStateSet_fieldInit,0,(int)lbl_805604B4);
}
void *igLightStateSet_getMetaCall(){return igLightStateSet_getMeta();}
void igLightStateSet_fieldInit(){
 void *value0=igLightStateSet_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805604BC,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B5424();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_805604C0,lbl_805604C4,lbl_805604C8,value1);
}
void *fn_801BB954(){
 if(!igLightSet_meta) igLightSet_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightSet_meta;
}
void *igLightSet_getMeta(){
 if(!igLightSet_meta || !(reinterpret_cast<unsigned int *>(igLightSet_meta)[0x24/4]&4)) igLightSet_registerNow();
 return igLightSet_meta;
}
void *igLightSet_vtableRead(){
 UnknownGenObject801BB9CC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igLightSet_vtable;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightSet_registerNow(){
 meta_registerNow((int)igLightSet_register);
}
void igLightSet_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igLightSet_meta,(int)igNode_register,(int)fn_801BBBF0,(int)igLightSet_getMetaCall,(int)igLightSet_className,32,(int)igLightSet_vtableRead,(int)igLightSet_fieldInit,0,(int)lbl_805604CC);
}
void *igLightSet_getMetaCall(){return igLightSet_getMeta();}
void *fn_801BBBF0(){return igNode_meta;}
void igLightSet_fieldInit(){
 void *value0=igLightSet_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805604D4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B58C8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_805604D8,lbl_805604DC,lbl_805604E0,value1);
}
void *fn_801BBC90(){
 if(!igJoint_meta) igJoint_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igJoint_meta;
}
void *igJoint_getMeta(){
 if(!igJoint_meta || !(reinterpret_cast<unsigned int *>(igJoint_meta)[0x24/4]&4)) igJoint_registerNow();
 return igJoint_meta;
}
}
#pragma pop
