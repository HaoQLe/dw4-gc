#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igAnimationTransitionParams_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationTransitionPointList_className[];
extern char igAnimationTransitionPoint_className[];
extern char igAnimationTransitionParams_className[];
extern char igAnimationTransitionParams_vtable[];
extern char igAnimationTransitionPoint_vtable[];
extern char igAnimationTransitionPointList_vtable[];
extern char lbl_804B5C18[];
extern char igAnimationTransitionPointList_dependencies[8];
extern char igAnimationTransitionPoint_dependencies[8];
extern char igAnimationTransitionPoint_fieldTypes[8];
extern char igAnimationTransitionPoint_fieldNames[8];
extern char igAnimationTransitionPoint_fieldStorage[8];
extern char igAnimationTransitionPoint_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igAnimationTransitionPointList_meta;
extern void *igAnimationTransitionPoint_meta;
extern void *igAnimationTransitionParams_meta;
void *igAnimationTransitionPointList_getMeta();
void *igAnimationTransitionPointList_vtableRead();
void igAnimationTransitionPointList_arkRegister();
void igAnimationTransitionPointList_register();
void *igAnimationTransitionPointList_getMetaCall();
void *igAnimationTransitionPoint_getMeta();
void *igAnimationTransitionPoint_vtableRead();
void igAnimationTransitionPoint_arkRegister();
void igAnimationTransitionPoint_register();
void *igAnimationTransitionPoint_getMetaCall();
void igAnimationTransitionPoint_fieldInit();
void *fn_801CD104();
void *igAnimationTransitionParams_getMeta();
void *igAnimationTransitionParams_vtableRead();
void igAnimationTransitionParams_arkRegister();
void igAnimationTransitionParams_register();
void *igAnimationTransitionParams_getMetaCall();
}
struct UnknownGenObject801CCDE0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CCF40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCF40(){igObject_construct(this);}
};
struct UnknownGenObject801CCF40 : UnknownGenRoot801CCF40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCF40(){unknown00=igAnimationTransitionPoint_vtable;}
};
struct UnknownGenObject801CD17C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801CD104(){
 if(!igAnimationTransitionParams_meta) igAnimationTransitionParams_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTransitionParams_meta;
}
void *igAnimationTransitionParams_getMeta(){
 if(!igAnimationTransitionParams_meta || !(reinterpret_cast<unsigned int *>(igAnimationTransitionParams_meta)[0x24/4]&4)) igAnimationTransitionParams_arkRegister();
 return igAnimationTransitionParams_meta;
}
void *igAnimationTransitionParams_vtableRead(){
 UnknownGenObject801CD17C_0 object;
 igObject_construct(&object);
 object.unknown00=igAnimationTransitionParams_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTransitionParams_arkRegister(){
 meta_registerNow((int)igAnimationTransitionParams_register);
}
void igAnimationTransitionParams_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTransitionParams_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationTransitionParams_getMetaCall,(int)igAnimationTransitionParams_className,32,(int)igAnimationTransitionParams_vtableRead,(int)igAnimationTransitionParams_fieldInit,0,0);
}
void *igAnimationTransitionParams_getMetaCall(){return igAnimationTransitionParams_getMeta();}
}
#pragma pop
