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
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013496C();
void igItemBase_register();
void igListenerBase_register();
void igMessageBase_register();
void igNormalizeTextureCoord_fieldInit();
void igOptBase_register();
extern char igObjectProperty_className[];
extern char igObjectChangedListener_className[];
extern char igObjectChangedEvent_className[];
extern char igNormalizeTextureCoord_className[];
extern char lbl_804A4A04[];
extern char igNormalizeTextureCoord_vtable[];
extern char lbl_804A6460[];
extern char igObjectChangedListener_vtable[];
extern char igListenerBase_vtable[];
extern char lbl_804AAF48[];
extern char igObjectProperty_dependencies[8];
extern char igObjectProperty_fieldTypes[4];
extern char igObjectProperty_fieldNames[4];
extern char igObjectProperty_fieldStorage[4];
extern char igObjectProperty_fieldOffsets[4];
extern char igObjectChangedEvent_dependencies[8];
extern char igObjectChangedEvent_fieldTypes[4];
extern char igObjectChangedEvent_fieldNames[4];
extern char igObjectChangedEvent_fieldStorage[4];
extern char igObjectChangedEvent_fieldOffsets[4];
extern void *igObject_meta;
extern void *igObjectProperty_meta;
extern void *igObjectChangedListener_meta;
extern void *igObjectChangedEvent_meta;
extern void *igNormalizeTextureCoord_meta;
extern void *igMessageBase_meta;
extern void *igListenerBase_meta;
void *igObjectProperty_getMeta();
void igObjectProperty_arkRegister();
void igObjectProperty_register();
void *igObjectProperty_getMetaCall();
void igObjectProperty_fieldInit();
void *igObjectChangedListener_getMeta();
void *igObjectChangedListener_vtableRead();
void igObjectChangedListener_arkRegister();
void igObjectChangedListener_register();
void *igObjectChangedListener_getMetaCall();
void *igObjectChangedListener_parentMeta();
void *igObjectChangedEvent_getMeta();
void igObjectChangedEvent_arkRegister();
void igObjectChangedEvent_register();
void *igObjectChangedEvent_getMetaCall();
void *fn_80140C3C();
void igObjectChangedEvent_fieldInit();
void *igNormalizeTextureCoord_getMeta();
void *igNormalizeTextureCoord_vtableRead();
void igNormalizeTextureCoord_arkRegister();
void igNormalizeTextureCoord_register();
void *igNormalizeTextureCoord_getMetaCall();
}
struct UnknownGenObject80140A2C_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80140CFC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140CFC(){igObject_construct(this);}
};
struct UnknownGenObject80140CFC_0 : UnknownGenRoot80140CFC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80140CFC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80140CFC : UnknownGenObject80140CFC_0 {
 char unknown28[24];
 inline ~UnknownGenObject80140CFC(){unknown00=igNormalizeTextureCoord_vtable;}
};
extern "C" {
void *igObjectChangedListener_parentMeta(){return igListenerBase_meta;}
}
#pragma pop
