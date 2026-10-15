#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igActorInfo_fieldInit();
void igInfo_register();
void igObjectList_register();
extern char igInfo_vtable[];
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igActorInfoList_className[];
extern char lbl_804B2990[];
extern char igActorInfo_className[];
extern char igActorInfo_vtable[];
extern char igActorInfoList_vtable[];
extern char lbl_804B5974[];
extern char lbl_80560A48[8];
extern void *lbl_805621F4;
extern void *igActorInfoList_meta;
extern void *igActorInfo_meta;
void *igActorInfoList_getMeta();
void *igActorInfoList_vtableRead();
void igActorInfoList_registerNow();
void igActorInfoList_register();
void *igActorInfoList_getMetaCall();
void *igActorInfo_getMeta();
void *igActorInfo_vtableRead();
void igActorInfo_registerNow();
void igActorInfo_register();
void *igActorInfo_getMetaCall();
}
struct UnknownGenObject801CD790_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CD928 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD928(){igObject_construct(this);}
};
struct UnknownGenObject801CD928_0 : UnknownGenRoot801CD928 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD928_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CD928_1 : UnknownGenObject801CD928_0 {
 inline ~UnknownGenObject801CD928_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject801CD928 : UnknownGenObject801CD928_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CD928(){unknown00=igActorInfo_vtable;}
};
extern "C" {
void *fn_801CD718(){
 if(!igActorInfoList_meta) igActorInfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igActorInfoList_meta;
}
void *igActorInfoList_getMeta(){
 if(!igActorInfoList_meta || !(reinterpret_cast<unsigned int *>(igActorInfoList_meta)[0x24/4]&4)) igActorInfoList_registerNow();
 return igActorInfoList_meta;
}
void *igActorInfoList_vtableRead(){
 UnknownGenObject801CD790_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B5974;
 object.unknown00=igActorInfoList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActorInfoList_registerNow(){
 meta_registerNow((int)igActorInfoList_register);
}
void igActorInfoList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igActorInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igActorInfoList_getMetaCall,(int)igActorInfoList_className,20,(int)igActorInfoList_vtableRead,0,0,(int)lbl_80560A48);
}
void *igActorInfoList_getMetaCall(){return igActorInfoList_getMeta();}
void *igActorInfo_create(void *object){
 igActorInfo_registerNow();
 return meta_createInstance(igActorInfo_meta,object);
}
void *igActorInfo_getMeta(){
 if(!igActorInfo_meta || !(reinterpret_cast<unsigned int *>(igActorInfo_meta)[0x24/4]&4)) igActorInfo_registerNow();
 return igActorInfo_meta;
}
void *igActorInfo_vtableRead(){
 UnknownGenObject801CD928 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igActorInfo_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igActorInfo_registerNow(){
 meta_registerNow((int)igActorInfo_register);
}
void igActorInfo_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igActorInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igActorInfo_getMetaCall,(int)igActorInfo_className,40,(int)igActorInfo_vtableRead,(int)igActorInfo_fieldInit,0,(int)lbl_804B2990);
}
void *igActorInfo_getMetaCall(){return igActorInfo_getMeta();}
}
#pragma pop
