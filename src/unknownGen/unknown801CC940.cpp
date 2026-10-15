#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igAnimationTransitionDefinition_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationTransitionDefinitionList_className[];
extern char lbl_804B27B4[];
extern char igAnimationTransitionDefinition_className[];
extern char igAnimationTransitionDefinition_vtable[];
extern char igAnimationTransitionDefinitionList_vtable[];
extern char lbl_804B5D3C[];
extern char lbl_805609F8[8];
extern void *lbl_805621F4;
extern void *igAnimationTransitionDefinitionList_meta;
extern void *igAnimationTransitionDefinition_meta;
void *igAnimationTransitionDefinitionList_getMeta();
void *igAnimationTransitionDefinitionList_vtableRead();
void igAnimationTransitionDefinitionList_registerNow();
void igAnimationTransitionDefinitionList_register();
void *igAnimationTransitionDefinitionList_getMetaCall();
void *igAnimationTransitionDefinition_getMeta();
void *igAnimationTransitionDefinition_vtableRead();
void igAnimationTransitionDefinition_registerNow();
void igAnimationTransitionDefinition_register();
void *igAnimationTransitionDefinition_getMetaCall();
}
struct UnknownGenObject801CC9B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CCB18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCB18(){fn_8006665C(this);}
};
struct UnknownGenObject801CCB18 : UnknownGenRoot801CCB18 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCB18(){unknown00=igAnimationTransitionDefinition_vtable;}
};
extern "C" {
void *fn_801CC940(){
 if(!igAnimationTransitionDefinitionList_meta) igAnimationTransitionDefinitionList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTransitionDefinitionList_meta;
}
void *igAnimationTransitionDefinitionList_getMeta(){
 if(!igAnimationTransitionDefinitionList_meta || !(reinterpret_cast<unsigned int *>(igAnimationTransitionDefinitionList_meta)[0x24/4]&4)) igAnimationTransitionDefinitionList_registerNow();
 return igAnimationTransitionDefinitionList_meta;
}
void *igAnimationTransitionDefinitionList_vtableRead(){
 UnknownGenObject801CC9B8_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B5D3C;
 object.unknown00=igAnimationTransitionDefinitionList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTransitionDefinitionList_registerNow(){
 meta_registerNow((int)igAnimationTransitionDefinitionList_register);
}
void igAnimationTransitionDefinitionList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTransitionDefinitionList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTransitionDefinitionList_getMetaCall,(int)igAnimationTransitionDefinitionList_className,20,(int)igAnimationTransitionDefinitionList_vtableRead,0,0,(int)lbl_805609F8);
}
void *igAnimationTransitionDefinitionList_getMetaCall(){return igAnimationTransitionDefinitionList_getMeta();}
void *igAnimationTransitionDefinition_getMeta(){
 if(!igAnimationTransitionDefinition_meta || !(reinterpret_cast<unsigned int *>(igAnimationTransitionDefinition_meta)[0x24/4]&4)) igAnimationTransitionDefinition_registerNow();
 return igAnimationTransitionDefinition_meta;
}
void *igAnimationTransitionDefinition_vtableRead(){
 UnknownGenObject801CCB18 object;
 object.unknown00=igAnimationTransitionDefinition_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTransitionDefinition_registerNow(){
 meta_registerNow((int)igAnimationTransitionDefinition_register);
}
void igAnimationTransitionDefinition_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTransitionDefinition_meta,(int)igObject_register,(int)fn_800237D0,(int)igAnimationTransitionDefinition_getMetaCall,(int)igAnimationTransitionDefinition_className,20,(int)igAnimationTransitionDefinition_vtableRead,(int)igAnimationTransitionDefinition_fieldInit,0,(int)lbl_804B27B4);
}
void *igAnimationTransitionDefinition_getMetaCall(){return igAnimationTransitionDefinition_getMeta();}
}
#pragma pop
