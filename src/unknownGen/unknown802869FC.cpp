#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8010E280();
void fn_80284294();
void igDependencyOrderedList_register();
void igInfoManager_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char igInfoManagerOrderedList_className[];
extern char igInfoManagerList_className[];
extern char igInfoManager_className[];
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igInfoManagerOrderedList_dependencies[];
extern char igInfoManagerList_dependencies[];
extern char igInfoManager_dependencies[];
extern char igInfoManagerList_vtable[];
extern char lbl_804CB340[];
extern char igInfoManagerOrderedList_vtable[];
extern char lbl_804CB400[];
extern void *igInfoManagerOrderedList_meta;
extern void *igInfoManagerList_meta;
extern void *igInfoManager_meta;
extern void *lbl_805621F4;
void *igInfoManagerOrderedList_getMeta();
void *igInfoManagerOrderedList_vtableRead();
void igInfoManagerOrderedList_arkRegister();
void igInfoManagerOrderedList_register();
void *igInfoManagerOrderedList_getMetaCall();
void *igInfoManagerList_getMeta();
void *igInfoManagerList_vtableRead();
void igInfoManagerList_arkRegister();
void igInfoManagerList_register();
void *igInfoManagerList_getMetaCall();
void *igInfoManager_getMeta();
void igInfoManager_arkRegister();
void igInfoManager_register();
void *igInfoManager_getMetaCall();
}
struct UnknownGenRoot80286A9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80286A9C(){igObject_construct(this);}
};
struct UnknownGenObject80286A9C_0 : UnknownGenRoot80286A9C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80286A9C_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject80286A9C_1 : UnknownGenObject80286A9C_0 {
 inline ~UnknownGenObject80286A9C_1(){unknown00=lbl_804CB400;}
};
struct UnknownGenObject80286A9C : UnknownGenObject80286A9C_1 {
 char unknown18[16];
 inline ~UnknownGenObject80286A9C(){unknown00=igInfoManagerOrderedList_vtable;}
};
struct UnknownGenObject80286D68_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igInfoManagerOrderedList_metaObject(){
 if(!igInfoManagerOrderedList_meta) igInfoManagerOrderedList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInfoManagerOrderedList_meta;
}
void *igInfoManagerOrderedList_getMeta(){
 if(!igInfoManagerOrderedList_meta || !(reinterpret_cast<unsigned int *>(igInfoManagerOrderedList_meta)[0x24/4]&4)) igInfoManagerOrderedList_arkRegister();
 return igInfoManagerOrderedList_meta;
}
void *igInfoManagerOrderedList_vtableRead(){
 UnknownGenObject80286A9C object;
 object.unknown00=igDependencyOrderedList_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804CB400;
 object.unknown00=igInfoManagerOrderedList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInfoManagerOrderedList_arkRegister(){
 meta_registerNow((int)igInfoManagerOrderedList_register);
}
void igInfoManagerOrderedList_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igInfoManagerOrderedList_meta,(int)igDependencyOrderedList_register,(int)fn_8010E280,(int)igInfoManagerOrderedList_getMetaCall,(int)igInfoManagerOrderedList_className,28,(int)igInfoManagerOrderedList_vtableRead,0,0,(int)igInfoManagerOrderedList_dependencies);
}
void *igInfoManagerOrderedList_getMetaCall(){return igInfoManagerOrderedList_getMeta();}
void *igInfoManagerList_metaObject(){
 if(!igInfoManagerList_meta) igInfoManagerList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInfoManagerList_meta;
}
void *igInfoManagerList_getMeta(){
 if(!igInfoManagerList_meta || !(reinterpret_cast<unsigned int *>(igInfoManagerList_meta)[0x24/4]&4)) igInfoManagerList_arkRegister();
 return igInfoManagerList_meta;
}
void *igInfoManagerList_vtableRead(){
 UnknownGenObject80286D68_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804CB340;
 object.unknown00=igInfoManagerList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInfoManagerList_arkRegister(){
 meta_registerNow((int)igInfoManagerList_register);
}
void igInfoManagerList_register(){
 fn_80284294();
 meta_registerClass(0,(int)&igInfoManagerList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igInfoManagerList_getMetaCall,(int)igInfoManagerList_className,20,(int)igInfoManagerList_vtableRead,0,0,(int)igInfoManagerList_dependencies);
}
void *igInfoManagerList_getMetaCall(){return igInfoManagerList_getMeta();}
void *igInfoManager_getMeta(){
 if(!igInfoManager_meta || !(reinterpret_cast<unsigned int *>(igInfoManager_meta)[0x24/4]&4)) igInfoManager_arkRegister();
 return igInfoManager_meta;
}
void igInfoManager_arkRegister(){
 meta_registerNow((int)igInfoManager_register);
}
void igInfoManager_register(){
 fn_80284294();
 meta_registerClass(1,(int)&igInfoManager_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igInfoManager_getMetaCall,(int)igInfoManager_className,16,0,(int)igInfoManager_fieldInit,0,(int)igInfoManager_dependencies);
}
void *igInfoManager_getMetaCall(){return igInfoManager_getMeta();}
}
#pragma pop
