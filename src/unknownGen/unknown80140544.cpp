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
extern char lbl_8055F8F0[8];
extern void *igObjectPropertyForNode_meta;
extern void *igObjectProperty_meta;
void *igObjectPropertyForNode_getMeta();
void *igObjectPropertyForNode_vtableRead();
void igObjectPropertyForNode_registerNow();
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
void *igObjectPropertyForNode_getMeta(){
 if(!igObjectPropertyForNode_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForNode_meta)[0x24/4]&4)) igObjectPropertyForNode_registerNow();
 return igObjectPropertyForNode_meta;
}
void *igObjectPropertyForNode_vtableRead(){
 UnknownGenObject80140580 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForNode_registerNow(){
 meta_registerNow((int)igObjectPropertyForNode_register);
}
void igObjectPropertyForNode_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForNode_meta,(int)igObjectProperty_register,(int)igObjectPropertyForNode_parentMeta,(int)igObjectPropertyForNode_getMetaCall,(int)igObjectPropertyForNode_className,44,(int)igObjectPropertyForNode_vtableRead,(int)igObjectPropertyForNode_fieldInit,0,(int)lbl_8055F8F0);
}
void *igObjectPropertyForNode_getMetaCall(){return igObjectPropertyForNode_getMeta();}
void *igObjectPropertyForNode_parentMeta(){return igObjectProperty_meta;}
}
#pragma pop
