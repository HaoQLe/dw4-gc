#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800BB61C();
void fn_8012FC48();
void *fn_80135970();
void *fn_801420C0();
void *fn_8014C1F8();
void fn_80152CE4();
void igAttrContainer_register();
void igAttrEditForNode_register();
void igInstanceLock_register();
void igInterfaced_register();
extern char igCachedInstanceLock_className[];
extern char igAttrTraversal_dependencies[];
extern char igAttrTraversal_className[];
extern char igAttrEditForLightStateSet_dependencies[];
extern char igAttrEditForLightStateSet_className[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igAttrTraversal_vtable[];
extern char igAttrEditForLightStateSet_vtable[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern char lbl_8055FD48[7];
extern char igAttrTraversal_fieldTypes[8];
extern char igAttrTraversal_fieldNames[8];
extern char igAttrTraversal_fieldStorage[8];
extern char igAttrTraversal_fieldOffsets[8];
extern void *igObject_meta;
extern void *igCachedInstanceLock_meta;
extern void *igBase_meta;
extern void *igAttrTraversal_meta;
extern void *igAttrEditForLightStateSet_meta;
extern void *igAttrEditForNode_meta;
void *igCachedInstanceLock_getMeta();
void igCachedInstanceLock_arkRegister();
void igCachedInstanceLock_register();
void *igCachedInstanceLock_getMetaCall();
void *igBase_getMeta();
void igBase_arkRegister();
void igBase_register();
void *igBase_getMetaCall();
void *igAttrTraversal_getMeta();
void *igAttrTraversal_vtableRead();
void igAttrTraversal_arkRegister();
void igAttrTraversal_register();
void *igAttrTraversal_getMetaCall();
void igAttrTraversal_fieldInit();
void *igAttrEditForLightStateSet_getMeta();
void *igAttrEditForLightStateSet_vtableRead();
void igAttrEditForLightStateSet_arkRegister();
void igAttrEditForLightStateSet_register();
void *igAttrEditForLightStateSet_getMetaCall();
void *fn_80152CDC();
}
struct UnknownGenRoot8015286C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015286C(){igObject_construct(this);}
};
struct UnknownGenObject8015286C : UnknownGenRoot8015286C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8015286C(){unknown00=igAttrTraversal_vtable;}
};
struct UnknownGenRoot80152B04 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80152B04(){igObject_construct(this);}
};
struct UnknownGenObject80152B04_0 : UnknownGenRoot80152B04 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80152B04_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80152B04_1 : UnknownGenObject80152B04_0 {
 inline ~UnknownGenObject80152B04_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80152B04 : UnknownGenObject80152B04_1 {
 char unknown28[8];
 inline ~UnknownGenObject80152B04(){unknown00=igAttrEditForLightStateSet_vtable;}
};
extern "C" {
void *fn_80152CDC(){return igAttrEditForNode_meta;}
}
#pragma pop
