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
void fn_8006665C(void *);
void fn_801AA6DC();
void igAnimation_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationList_className[];
extern char lbl_804B269C[];
extern char igAnimation_className[];
extern char igAnimationList_vtable[];
extern char lbl_804B5E04[];
extern char igAnimation_vtable[];
extern char lbl_805609F0[8];
extern void *lbl_805621F4;
extern void *igAnimationList_meta;
extern void *igAnimation_meta;
void *igAnimationList_getMeta();
void *igAnimationList_vtableRead();
void igAnimationList_registerNow();
void igAnimationList_register();
void *igAnimationList_getMetaCall();
void *igAnimation_getMeta();
void *igAnimation_vtableRead();
void igAnimation_registerNow();
void igAnimation_register();
void *igAnimation_getMetaCall();
}
struct UnknownGenObject801CC43C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CC610 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CC610(){fn_8006665C(this);}
};
struct UnknownGenObject801CC610_0 : UnknownGenRoot801CC610 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CC610_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CC610 : UnknownGenObject801CC610_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801CC610(){unknown00=igAnimation_vtable;}
};
extern "C" {
void *igAnimationList_create(void *object){
 igAnimationList_registerNow();
 return meta_createInstance(igAnimationList_meta,object);
}
void *fn_801CC3C4(){
 if(!igAnimationList_meta) igAnimationList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationList_meta;
}
void *igAnimationList_getMeta(){
 if(!igAnimationList_meta || !(reinterpret_cast<unsigned int *>(igAnimationList_meta)[0x24/4]&4)) igAnimationList_registerNow();
 return igAnimationList_meta;
}
void *igAnimationList_vtableRead(){
 UnknownGenObject801CC43C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B5E04;
 object.unknown00=igAnimationList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationList_registerNow(){
 meta_registerNow((int)igAnimationList_register);
}
void igAnimationList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationList_getMetaCall,(int)igAnimationList_className,20,(int)igAnimationList_vtableRead,0,0,(int)lbl_805609F0);
}
void *igAnimationList_getMetaCall(){return igAnimationList_getMeta();}
void *igAnimation_create(void *object){
 igAnimation_registerNow();
 return meta_createInstance(igAnimation_meta,object);
}
void *fn_801CC598(){
 if(!igAnimation_meta) igAnimation_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimation_meta;
}
void *igAnimation_getMeta(){
 if(!igAnimation_meta || !(reinterpret_cast<unsigned int *>(igAnimation_meta)[0x24/4]&4)) igAnimation_registerNow();
 return igAnimation_meta;
}
void *igAnimation_vtableRead(){
 UnknownGenObject801CC610 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igAnimation_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimation_registerNow(){
 meta_registerNow((int)igAnimation_register);
}
void igAnimation_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimation_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimation_getMetaCall,(int)igAnimation_className,64,(int)igAnimation_vtableRead,(int)igAnimation_fieldInit,0,(int)lbl_804B269C);
}
void *igAnimation_getMetaCall(){return igAnimation_getMeta();}
}
#pragma pop
