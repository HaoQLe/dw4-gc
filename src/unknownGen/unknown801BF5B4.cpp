#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801B0404();
void *fn_801B47CC();
void *fn_801B7354();
void *fn_801BBBF0();
void igGraphPath_fieldInit();
void *igHashedUserInfo_getMeta();
void igHashedUserInfo_vtableRead();
void igNode_register();
void igObjectList_register();
void igObject_register();
void igUserInfo_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igHashedUserInfo_className[];
extern char igGraphPathList_className[];
extern char igGraphPath_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igGraphPath_vtable[];
extern char igGraphPathList_vtable[];
extern char lbl_804B7494[];
extern char lbl_805605F0[8];
extern char lbl_805605F8[4];
extern char lbl_805605FC[4];
extern char lbl_80560600[4];
extern char lbl_80560604[4];
extern char lbl_80560608[8];
extern char lbl_80560610[8];
extern char lbl_80560618[4];
extern char lbl_8056061C[4];
extern char lbl_80560620[4];
extern char lbl_80560624[4];
extern char lbl_80560628[8];
extern char lbl_80560630[8];
extern void *lbl_805621F4;
extern void *igHashedUserInfo_meta;
extern void *igGroup_meta;
extern void *igGraphPathList_meta;
extern void *igGraphPath_meta;
void igHashedUserInfo_register();
void *igHashedUserInfo_getMetaCall();
void igHashedUserInfo_fieldInit();
void *igGroup_getMeta();
void *igGroup_vtableRead();
void igGroup_registerNow();
void igGroup_register();
void *igGroup_getMetaCall();
void igGroup_fieldInit();
void *igGraphPathList_getMeta();
void *igGraphPathList_vtableRead();
void igGraphPathList_registerNow();
void igGraphPathList_register();
void *igGraphPathList_getMetaCall();
void *igGraphPath_getMeta();
void *igGraphPath_vtableRead();
void igGraphPath_registerNow();
void igGraphPath_register();
void *igGraphPath_getMetaCall();
}
struct UnknownGenRoot801BF7A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BF7A8(){igObject_construct(this);}
};
struct UnknownGenObject801BF7A8_0 : UnknownGenRoot801BF7A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BF7A8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BF7A8_1 : UnknownGenObject801BF7A8_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BF7A8_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BF7A8 : UnknownGenObject801BF7A8_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BF7A8(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801BFB18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801BFCEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BFCEC(){igObject_construct(this);}
};
struct UnknownGenObject801BFCEC : UnknownGenRoot801BFCEC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject801BFCEC(){unknown00=igGraphPath_vtable;}
};
extern "C" {
void igHashedUserInfo_registerNow(){
 meta_registerNow((int)igHashedUserInfo_register);
}
void igHashedUserInfo_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igHashedUserInfo_meta,(int)igUserInfo_register,(int)fn_801B0404,(int)igHashedUserInfo_getMetaCall,(int)igHashedUserInfo_className,40,(int)igHashedUserInfo_vtableRead,(int)igHashedUserInfo_fieldInit,0,(int)lbl_805605F0);
}
void *igHashedUserInfo_getMetaCall(){return igHashedUserInfo_getMeta();}
void igHashedUserInfo_fieldInit(){
 void *value0=igHashedUserInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_805605F8,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B47CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 meta_setupFields(value0,lbl_805605FC,lbl_80560600,lbl_80560604,value1);
}
void *igGroup_create(void *object){
 igGroup_registerNow();
 return meta_createInstance(igGroup_meta,object);
}
void *fn_801BF730(){
 if(!igGroup_meta) igGroup_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGroup_meta;
}
void *igGroup_getMeta(){
 if(!igGroup_meta || !(reinterpret_cast<unsigned int *>(igGroup_meta)[0x24/4]&4)) igGroup_registerNow();
 return igGroup_meta;
}
void *igGroup_vtableRead(){
 UnknownGenObject801BF7A8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGroup_registerNow(){
 meta_registerNow((int)igGroup_register);
}
void igGroup_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igGroup_meta,(int)igNode_register,(int)fn_801BBBF0,(int)igGroup_getMetaCall,(int)lbl_80560610,32,(int)igGroup_vtableRead,(int)igGroup_fieldInit,0,(int)lbl_80560608);
}
void *igGroup_getMetaCall(){return igGroup_getMeta();}
void igGroup_fieldInit(){
 void *value0=igGroup_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_80560618,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B7354();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+36)=3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 meta_setupFields(value0,lbl_8056061C,lbl_80560620,lbl_80560624,value1);
}
void *igGraphPathList_create(void *object){
 igGraphPathList_registerNow();
 return meta_createInstance(igGraphPathList_meta,object);
}
void *fn_801BFAA0(){
 if(!igGraphPathList_meta) igGraphPathList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGraphPathList_meta;
}
void *igGraphPathList_getMeta(){
 if(!igGraphPathList_meta || !(reinterpret_cast<unsigned int *>(igGraphPathList_meta)[0x24/4]&4)) igGraphPathList_registerNow();
 return igGraphPathList_meta;
}
void *igGraphPathList_vtableRead(){
 UnknownGenObject801BFB18_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7494;
 object.unknown00=igGraphPathList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGraphPathList_registerNow(){
 meta_registerNow((int)igGraphPathList_register);
}
void igGraphPathList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igGraphPathList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGraphPathList_getMetaCall,(int)igGraphPathList_className,20,(int)igGraphPathList_vtableRead,0,0,(int)lbl_80560628);
}
void *igGraphPathList_getMetaCall(){return igGraphPathList_getMeta();}
void *igGraphPath_create(void *object){
 igGraphPath_registerNow();
 return meta_createInstance(igGraphPath_meta,object);
}
void *fn_801BFC74(){
 if(!igGraphPath_meta) igGraphPath_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGraphPath_meta;
}
void *igGraphPath_getMeta(){
 if(!igGraphPath_meta || !(reinterpret_cast<unsigned int *>(igGraphPath_meta)[0x24/4]&4)) igGraphPath_registerNow();
 return igGraphPath_meta;
}
void *igGraphPath_vtableRead(){
 UnknownGenObject801BFCEC object;
 object.unknown00=igGraphPath_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGraphPath_registerNow(){
 meta_registerNow((int)igGraphPath_register);
}
void igGraphPath_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igGraphPath_meta,(int)igObject_register,(int)fn_800237D0,(int)igGraphPath_getMetaCall,(int)igGraphPath_className,28,(int)igGraphPath_vtableRead,(int)igGraphPath_fieldInit,0,(int)lbl_80560630);
}
void *igGraphPath_getMetaCall(){return igGraphPath_getMeta();}
}
#pragma pop
