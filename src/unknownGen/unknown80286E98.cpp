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
