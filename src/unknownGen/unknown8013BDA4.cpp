#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void fn_8013BF70();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForCamera_className[];
extern char igObjectPropertyForCamera_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F808[8];
extern void *igObjectPropertyForCamera_meta;
extern void *igObjectPropertyForNode_meta;
void *igObjectPropertyForCamera_getMeta();
void *igObjectPropertyForCamera_vtableRead();
void igObjectPropertyForCamera_registerNow();
void igObjectPropertyForCamera_register();
void *igObjectPropertyForCamera_getMetaCall();
void *fn_8013BF68();
}
struct UnknownGenRoot8013BDE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013BDE0(){igObject_construct(this);}
};
struct UnknownGenObject8013BDE0_0 : UnknownGenRoot8013BDE0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013BDE0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013BDE0_1 : UnknownGenObject8013BDE0_0 {
 inline ~UnknownGenObject8013BDE0_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013BDE0 : UnknownGenObject8013BDE0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013BDE0(){unknown00=igObjectPropertyForCamera_vtable;}
};
extern "C" {
void *igObjectPropertyForCamera_getMeta(){
 if(!igObjectPropertyForCamera_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForCamera_meta)[0x24/4]&4)) igObjectPropertyForCamera_registerNow();
 return igObjectPropertyForCamera_meta;
}
void *igObjectPropertyForCamera_vtableRead(){
 UnknownGenObject8013BDE0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForCamera_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForCamera_registerNow(){
 meta_registerNow((int)igObjectPropertyForCamera_register);
}
void igObjectPropertyForCamera_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForCamera_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForCamera_getMetaCall,(int)igObjectPropertyForCamera_className,44,(int)igObjectPropertyForCamera_vtableRead,(int)fn_8013BF70,0,(int)lbl_8055F808);
}
void *igObjectPropertyForCamera_getMetaCall(){return igObjectPropertyForCamera_getMeta();}
void *fn_8013BF68(){return igObjectPropertyForNode_meta;}
}
#pragma pop
