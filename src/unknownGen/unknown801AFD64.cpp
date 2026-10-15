#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igNamedObject_register();
void igObjectList_register();
void igSkeletonBoneInfo_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igSkeletonBoneInfoList_className[];
extern char igSkeletonBoneInfo_className[];
extern char igSkeletonBoneInfo_vtable[];
extern char igSkeletonBoneInfoList_vtable[];
extern char lbl_804B92C0[];
extern char igSkeletonBoneInfoList_dependencies[8];
extern void *lbl_805621F4;
extern void *igSkeletonBoneInfoList_meta;
extern void *igSkeletonBoneInfo_meta;
void *igSkeletonBoneInfoList_getMeta();
void *igSkeletonBoneInfoList_vtableRead();
void igSkeletonBoneInfoList_arkRegister();
void igSkeletonBoneInfoList_register();
void *igSkeletonBoneInfoList_getMetaCall();
void *igSkeletonBoneInfo_getMeta();
void *igSkeletonBoneInfo_vtableRead();
void igSkeletonBoneInfo_arkRegister();
void igSkeletonBoneInfo_register();
void *igSkeletonBoneInfo_getMetaCall();
}
struct UnknownGenObject801AFDDC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AFF74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFF74(){igObject_construct(this);}
};
struct UnknownGenObject801AFF74_0 : UnknownGenRoot801AFF74 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFF74_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801AFF74 : UnknownGenObject801AFF74_0 {
 char unknown0C[20];
 inline ~UnknownGenObject801AFF74(){unknown00=igSkeletonBoneInfo_vtable;}
};
extern "C" {
void *fn_801AFD64(){
 if(!igSkeletonBoneInfoList_meta) igSkeletonBoneInfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSkeletonBoneInfoList_meta;
}
void *igSkeletonBoneInfoList_getMeta(){
 if(!igSkeletonBoneInfoList_meta || !(reinterpret_cast<unsigned int *>(igSkeletonBoneInfoList_meta)[0x24/4]&4)) igSkeletonBoneInfoList_arkRegister();
 return igSkeletonBoneInfoList_meta;
}
void *igSkeletonBoneInfoList_vtableRead(){
 UnknownGenObject801AFDDC_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B92C0;
 object.unknown00=igSkeletonBoneInfoList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSkeletonBoneInfoList_arkRegister(){
 meta_registerNow((int)igSkeletonBoneInfoList_register);
}
void igSkeletonBoneInfoList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSkeletonBoneInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igSkeletonBoneInfoList_getMetaCall,(int)igSkeletonBoneInfoList_className,20,(int)igSkeletonBoneInfoList_vtableRead,0,0,(int)igSkeletonBoneInfoList_dependencies);
}
void *igSkeletonBoneInfoList_getMetaCall(){return igSkeletonBoneInfoList_getMeta();}
void *igSkeletonBoneInfo_create(void *object){
 igSkeletonBoneInfo_arkRegister();
 return meta_createInstance(igSkeletonBoneInfo_meta,object);
}
void *igSkeletonBoneInfo_getMeta(){
 if(!igSkeletonBoneInfo_meta || !(reinterpret_cast<unsigned int *>(igSkeletonBoneInfo_meta)[0x24/4]&4)) igSkeletonBoneInfo_arkRegister();
 return igSkeletonBoneInfo_meta;
}
void *igSkeletonBoneInfo_vtableRead(){
 UnknownGenObject801AFF74 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igSkeletonBoneInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSkeletonBoneInfo_arkRegister(){
 meta_registerNow((int)igSkeletonBoneInfo_register);
}
void igSkeletonBoneInfo_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSkeletonBoneInfo_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSkeletonBoneInfo_getMetaCall,(int)igSkeletonBoneInfo_className,24,(int)igSkeletonBoneInfo_vtableRead,(int)igSkeletonBoneInfo_fieldInit,0,0);
}
void *igSkeletonBoneInfo_getMetaCall(){return igSkeletonBoneInfo_getMeta();}
}
#pragma pop
