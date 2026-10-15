#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801CBE9C();
void igAnimationCombiner_fieldInit();
void igAnimationSystem_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationCombinerList_className[];
extern char lbl_804B235C[];
extern char igAnimationCombiner_className[];
extern char igAnimationCombiner_vtable[];
extern char lbl_804B5F8C[];
extern char igAnimationCombinerList_vtable[];
extern char lbl_804B606C[];
extern char lbl_805609C8[8];
extern void *lbl_805621F4;
extern void *igAnimationSystem_meta;
extern void *igAnimationCombinerList_meta;
extern void *igAnimationCombiner_meta;
void *igAnimationCombinerList_getMeta();
void *igAnimationCombinerList_vtableRead();
void igAnimationCombinerList_registerNow();
void igAnimationCombinerList_register();
void *igAnimationCombinerList_getMetaCall();
void *igAnimationCombiner_getMeta();
void *igAnimationCombiner_vtableRead();
void igAnimationCombiner_registerNow();
void igAnimationCombiner_register();
void *igAnimationCombiner_getMetaCall();
void *igAnimationCombiner_parentMeta();
}
struct UnknownGenObject801CB8B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CBA50 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CBA50(){fn_8006665C(this);}
};
struct UnknownGenObject801CBA50_0 : UnknownGenRoot801CBA50 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CBA50_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CBA50_1 : UnknownGenObject801CBA50_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801CBA50_1(){unknown00=lbl_804B5F8C;}
};
struct UnknownGenObject801CBA50 : UnknownGenObject801CBA50_1 {
 char unknown10[32];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[36];
 inline ~UnknownGenObject801CBA50(){unknown00=igAnimationCombiner_vtable;}
};
extern "C" {
void *igAnimationCombinerList_create(void *object){
 igAnimationCombinerList_registerNow();
 return meta_createInstance(igAnimationCombinerList_meta,object);
}
void *fn_801CB840(){
 if(!igAnimationCombinerList_meta) igAnimationCombinerList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationCombinerList_meta;
}
void *igAnimationCombinerList_getMeta(){
 if(!igAnimationCombinerList_meta || !(reinterpret_cast<unsigned int *>(igAnimationCombinerList_meta)[0x24/4]&4)) igAnimationCombinerList_registerNow();
 return igAnimationCombinerList_meta;
}
void *igAnimationCombinerList_vtableRead(){
 UnknownGenObject801CB8B8_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B606C;
 object.unknown00=igAnimationCombinerList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationCombinerList_registerNow(){
 meta_registerNow((int)igAnimationCombinerList_register);
}
void igAnimationCombinerList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationCombinerList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationCombinerList_getMetaCall,(int)igAnimationCombinerList_className,20,(int)igAnimationCombinerList_vtableRead,0,0,(int)lbl_805609C8);
}
void *igAnimationCombinerList_getMetaCall(){return igAnimationCombinerList_getMeta();}
void *igAnimationCombiner_create(void *object){
 igAnimationCombiner_registerNow();
 return meta_createInstance(igAnimationCombiner_meta,object);
}
void *igAnimationCombiner_getMeta(){
 if(!igAnimationCombiner_meta || !(reinterpret_cast<unsigned int *>(igAnimationCombiner_meta)[0x24/4]&4)) igAnimationCombiner_registerNow();
 return igAnimationCombiner_meta;
}
void *igAnimationCombiner_vtableRead(){
 UnknownGenObject801CBA50 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804B5F8C;
 object.unknown0C.value=0;
 object.unknown00=igAnimationCombiner_vtable;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationCombiner_registerNow(){
 meta_registerNow((int)igAnimationCombiner_register);
}
void igAnimationCombiner_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationCombiner_meta,(int)igAnimationSystem_register,(int)igAnimationCombiner_parentMeta,(int)igAnimationCombiner_getMetaCall,(int)igAnimationCombiner_className,96,(int)igAnimationCombiner_vtableRead,(int)igAnimationCombiner_fieldInit,(int)fn_801CBE9C,(int)lbl_804B235C);
}
void *igAnimationCombiner_getMetaCall(){return igAnimationCombiner_getMeta();}
void *igAnimationCombiner_parentMeta(){return igAnimationSystem_meta;}
}
#pragma pop
