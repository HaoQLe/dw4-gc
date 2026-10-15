#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void igDataPump_fieldInit();
void igInfo_register();
void igObjectList_register();
void igObject_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igDataPumpManager_className[];
extern char igDataPumpList_className[];
extern char igDataPumpInterface_className[];
extern char igDataPumpInfo_className[];
extern char lbl_804BA990[];
extern char igDataPump_className[];
extern char igDataPump_vtable[];
extern char igDataPumpInfo_vtable[];
extern char igDataPumpList_vtable[];
extern char lbl_804BBB00[];
extern char igDataPumpManager_vtable[];
extern char lbl_80560C58[8];
extern char lbl_80560C60[4];
extern char lbl_80560C64[4];
extern char lbl_80560C68[4];
extern char lbl_80560C6C[4];
extern char lbl_80560C70[8];
extern char lbl_80560C78[8];
extern char lbl_80560C80[4];
extern char lbl_80560C84[4];
extern char lbl_80560C88[4];
extern char lbl_80560C8C[4];
extern void *lbl_805621F4;
extern void *igDataPumpManager_meta;
extern void *igDataPumpList_meta;
extern void *igDataPumpInterface_meta;
extern void *igDataPumpInfo_meta;
extern void *igDataPump_meta;
void *igDataPumpManager_getMeta();
void *igDataPumpManager_vtableRead();
void igDataPumpManager_registerNow();
void igDataPumpManager_register();
void *igDataPumpManager_getMetaCall();
void igDataPumpManager_fieldInit();
void *fn_80218D14();
void *igDataPumpList_getMeta();
void *igDataPumpList_vtableRead();
void igDataPumpList_registerNow();
void igDataPumpList_register();
void *igDataPumpList_getMetaCall();
void *igDataPumpInterface_getMeta();
void igDataPumpInterface_registerNow();
void igDataPumpInterface_register();
void *igDataPumpInterface_getMetaCall();
void *igDataPumpInfo_getMeta();
void *igDataPumpInfo_vtableRead();
void igDataPumpInfo_registerNow();
void igDataPumpInfo_register();
void *igDataPumpInfo_getMetaCall();
void igDataPumpInfo_fieldInit();
void *igDataPump_getMeta();
void *igDataPump_vtableRead();
void igDataPump_registerNow();
void igDataPump_register();
void *igDataPump_getMetaCall();
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){fn_8006665C(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=igDataPumpManager_vtable;}
};
struct UnknownGenObject80218D8C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80219084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219084(){fn_8006665C(this);}
};
struct UnknownGenObject80219084_0 : UnknownGenRoot80219084 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80219084_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80219084_1 : UnknownGenObject80219084_0 {
 inline ~UnknownGenObject80219084_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80219084 : UnknownGenObject80219084_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80219084(){unknown00=igDataPumpInfo_vtable;}
};
struct UnknownGenRoot80219334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80219334(){fn_8006665C(this);}
};
struct UnknownGenObject80219334 : UnknownGenRoot80219334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80219334(){unknown00=igDataPump_vtable;}
};
extern "C" {
void *igDataPumpManager_create(void *object){
 igDataPumpManager_registerNow();
 return meta_createInstance(igDataPumpManager_meta,object);
}
void *fn_80218AC8(){
 if(!igDataPumpManager_meta) igDataPumpManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpManager_meta;
}
void *igDataPumpManager_getMeta(){
 if(!igDataPumpManager_meta || !(reinterpret_cast<unsigned int *>(igDataPumpManager_meta)[0x24/4]&4)) igDataPumpManager_registerNow();
 return igDataPumpManager_meta;
}
void *igDataPumpManager_vtableRead(){
 UnknownGenObject80218B40 object;
 object.unknown00=igDataPumpManager_vtable;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataPumpManager_registerNow(){
 meta_registerNow((int)igDataPumpManager_register);
}
void igDataPumpManager_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igDataPumpManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igDataPumpManager_getMetaCall,(int)igDataPumpManager_className,12,(int)igDataPumpManager_vtableRead,(int)igDataPumpManager_fieldInit,0,(int)lbl_80560C58);
}
void *igDataPumpManager_getMetaCall(){return igDataPumpManager_getMeta();}
void igDataPumpManager_fieldInit(){
 void *value0=igDataPumpManager_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C60,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80218D14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_80560C64,lbl_80560C68,lbl_80560C6C,value1);
}
void *fn_80218D14(){
 if(!igDataPumpList_meta) igDataPumpList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpList_meta;
}
void *igDataPumpList_getMeta(){
 if(!igDataPumpList_meta || !(reinterpret_cast<unsigned int *>(igDataPumpList_meta)[0x24/4]&4)) igDataPumpList_registerNow();
 return igDataPumpList_meta;
}
void *igDataPumpList_vtableRead(){
 UnknownGenObject80218D8C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804BBB00;
 object.unknown00=igDataPumpList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataPumpList_registerNow(){
 meta_registerNow((int)igDataPumpList_register);
}
void igDataPumpList_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igDataPumpList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igDataPumpList_getMetaCall,(int)igDataPumpList_className,20,(int)igDataPumpList_vtableRead,0,0,(int)lbl_80560C70);
}
void *igDataPumpList_getMetaCall(){return igDataPumpList_getMeta();}
void *fn_80218EB0(){
 if(!igDataPumpInterface_meta) igDataPumpInterface_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpInterface_meta;
}
void *igDataPumpInterface_getMeta(){
 if(!igDataPumpInterface_meta || !(reinterpret_cast<unsigned int *>(igDataPumpInterface_meta)[0x24/4]&4)) igDataPumpInterface_registerNow();
 return igDataPumpInterface_meta;
}
void igDataPumpInterface_registerNow(){
 meta_registerNow((int)igDataPumpInterface_register);
}
void igDataPumpInterface_register(){
 fn_80216620();
 meta_registerClass(1,(int)&igDataPumpInterface_meta,(int)igObject_register,(int)fn_800237D0,(int)igDataPumpInterface_getMetaCall,(int)igDataPumpInterface_className,8,0,0,0,0);
}
void *igDataPumpInterface_getMetaCall(){return igDataPumpInterface_getMeta();}
void *igDataPumpInfo_create(void *object){
 igDataPumpInfo_registerNow();
 return meta_createInstance(igDataPumpInfo_meta,object);
}
void *fn_8021900C(){
 if(!igDataPumpInfo_meta) igDataPumpInfo_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDataPumpInfo_meta;
}
void *igDataPumpInfo_getMeta(){
 if(!igDataPumpInfo_meta || !(reinterpret_cast<unsigned int *>(igDataPumpInfo_meta)[0x24/4]&4)) igDataPumpInfo_registerNow();
 return igDataPumpInfo_meta;
}
void *igDataPumpInfo_vtableRead(){
 UnknownGenObject80219084 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igDataPumpInfo_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataPumpInfo_registerNow(){
 meta_registerNow((int)igDataPumpInfo_register);
}
void igDataPumpInfo_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igDataPumpInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igDataPumpInfo_getMetaCall,(int)igDataPumpInfo_className,24,(int)igDataPumpInfo_vtableRead,(int)igDataPumpInfo_fieldInit,0,(int)lbl_80560C78);
}
void *igDataPumpInfo_getMetaCall(){return igDataPumpInfo_getMeta();}
void igDataPumpInfo_fieldInit(){
 void *value0=igDataPumpInfo_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560C80,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80218D14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560C84,lbl_80560C88,lbl_80560C8C,value1);
}
void *igDataPump_create(void *object){
 igDataPump_registerNow();
 return meta_createInstance(igDataPump_meta,object);
}
void *igDataPump_getMeta(){
 if(!igDataPump_meta || !(reinterpret_cast<unsigned int *>(igDataPump_meta)[0x24/4]&4)) igDataPump_registerNow();
 return igDataPump_meta;
}
void *igDataPump_vtableRead(){
 UnknownGenObject80219334 object;
 object.unknown00=igDataPump_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDataPump_registerNow(){
 meta_registerNow((int)igDataPump_register);
}
void igDataPump_register(){
 fn_80216620();
 meta_registerClass(0,(int)&igDataPump_meta,(int)igObject_register,(int)fn_800237D0,(int)igDataPump_getMetaCall,(int)igDataPump_className,28,(int)igDataPump_vtableRead,(int)igDataPump_fieldInit,0,(int)lbl_804BA990);
}
void *igDataPump_getMetaCall(){return igDataPump_getMeta();}
}
#pragma pop
