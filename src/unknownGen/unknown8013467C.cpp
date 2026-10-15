#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igHierarchyChangedEvent_register();
void igItemBase_register();
void igReplaceObject_fieldInit();
extern char igReplacedObjectEvent_className[];
extern char igReplaceObject_dependencies[];
extern char igReplaceObject_className[];
extern char igReplaceObject_vtable[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igReplacedObjectEvent_vtable[];
extern char igHierarchyChangedEvent_vtable[];
extern char igMessageBase_vtable[];
extern char lbl_804AAF48[];
extern char igReplacedObjectEvent_dependencies[8];
extern char igReplacedObjectEvent_fieldTypes[8];
extern char igReplacedObjectEvent_fieldNames[8];
extern char igReplacedObjectEvent_fieldStorage[8];
extern char igReplacedObjectEvent_fieldOffsets[8];
extern void *igObject_meta;
extern void *igReplacedObjectEvent_meta;
extern void *igReplaceObject_meta;
extern void *igItemBase_meta;
extern void *igHierarchyChangedEvent_meta;
void *igReplacedObjectEvent_getMeta();
void *igReplacedObjectEvent_vtableRead();
void igReplacedObjectEvent_arkRegister();
void igReplacedObjectEvent_register();
void *igReplacedObjectEvent_getMetaCall();
void *fn_8013467C();
void igReplacedObjectEvent_fieldInit();
void *igReplaceObject_getMeta();
void *igReplaceObject_vtableRead();
void igReplaceObject_arkRegister();
void igReplaceObject_register();
void *igReplaceObject_getMetaCall();
void *fn_8013496C();
}
struct UnknownGenRoot801344C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801344C8(){igObject_construct(this);}
};
struct UnknownGenObject801344C8 : UnknownGenRoot801344C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801344C8(){unknown00=igReplacedObjectEvent_vtable;}
};
struct UnknownGenRoot80134750 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134750(){igObject_construct(this);}
};
struct UnknownGenObject80134750 : UnknownGenRoot80134750 {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80134750(){unknown00=igReplaceObject_vtable;}
};
extern "C" {
void *fn_8013467C(){return igHierarchyChangedEvent_meta;}
}
#pragma pop
