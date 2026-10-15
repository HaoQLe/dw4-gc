#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013FAB0();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForAttrSet_className[];
extern char igObjectPropertyForAttrSet_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForAttrSet_dependencies[8];
extern void *igObjectPropertyForAttrSet_meta;
void *igObjectPropertyForAttrSet_getMeta();
void *igObjectPropertyForAttrSet_vtableRead();
void igObjectPropertyForAttrSet_arkRegister();
void igObjectPropertyForAttrSet_register();
void *igObjectPropertyForAttrSet_getMetaCall();
}
struct UnknownGenRoot8013F928 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013F928(){igObject_construct(this);}
};
struct UnknownGenObject8013F928_0 : UnknownGenRoot8013F928 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013F928_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013F928_1 : UnknownGenObject8013F928_0 {
 inline ~UnknownGenObject8013F928_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013F928 : UnknownGenObject8013F928_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013F928(){unknown00=igObjectPropertyForAttrSet_vtable;}
};
extern "C" {
void *igObjectPropertyForAttrSet_getMeta(){
 if(!igObjectPropertyForAttrSet_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForAttrSet_meta)[0x24/4]&4)) igObjectPropertyForAttrSet_arkRegister();
 return igObjectPropertyForAttrSet_meta;
}
void *igObjectPropertyForAttrSet_vtableRead(){
 UnknownGenObject8013F928 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForAttrSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForAttrSet_arkRegister(){
 meta_registerNow((int)igObjectPropertyForAttrSet_register);
}
void igObjectPropertyForAttrSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForAttrSet_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForAttrSet_getMetaCall,(int)igObjectPropertyForAttrSet_className,44,(int)igObjectPropertyForAttrSet_vtableRead,(int)fn_8013FAB0,0,(int)igObjectPropertyForAttrSet_dependencies);
}
void *igObjectPropertyForAttrSet_getMetaCall(){return igObjectPropertyForAttrSet_getMeta();}
}
#pragma pop
