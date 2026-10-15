#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void igObjectPropertyForNode_fieldInit();
void igObjectProperty_register();
extern char igObjectPropertyForNode_className[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForNode_dependencies[8];
extern void *igObjectPropertyForNode_meta;
extern void *igObjectProperty_meta;
void *igObjectPropertyForNode_getMeta();
void *igObjectPropertyForNode_vtableRead();
void igObjectPropertyForNode_arkRegister();
void igObjectPropertyForNode_register();
void *igObjectPropertyForNode_getMetaCall();
void *igObjectPropertyForNode_parentMeta();
}
struct UnknownGenRoot80140580 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140580(){igObject_construct(this);}
};
struct UnknownGenObject80140580_0 : UnknownGenRoot80140580 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject80140580_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject80140580 : UnknownGenObject80140580_0 {
 char unknown24[12];
 inline ~UnknownGenObject80140580(){unknown00=igObjectPropertyForNode_vtable;}
};
extern "C" {
void *igObjectPropertyForNode_parentMeta(){return igObjectProperty_meta;}
}
#pragma pop
