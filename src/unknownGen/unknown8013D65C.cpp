#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D820();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForBumpMapShader_className[];
extern char igObjectPropertyForBumpMapShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F858[8];
extern void *igObjectPropertyForBumpMapShader_meta;
void *igObjectPropertyForBumpMapShader_getMeta();
void *igObjectPropertyForBumpMapShader_vtableRead();
void igObjectPropertyForBumpMapShader_registerNow();
void igObjectPropertyForBumpMapShader_register();
void *igObjectPropertyForBumpMapShader_getMetaCall();
}
struct UnknownGenRoot8013D698 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013D698(){igObject_construct(this);}
};
struct UnknownGenObject8013D698_0 : UnknownGenRoot8013D698 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013D698_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013D698_1 : UnknownGenObject8013D698_0 {
 inline ~UnknownGenObject8013D698_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013D698 : UnknownGenObject8013D698_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013D698(){unknown00=igObjectPropertyForBumpMapShader_vtable;}
};
extern "C" {
void *igObjectPropertyForBumpMapShader_getMeta(){
 if(!igObjectPropertyForBumpMapShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForBumpMapShader_meta)[0x24/4]&4)) igObjectPropertyForBumpMapShader_registerNow();
 return igObjectPropertyForBumpMapShader_meta;
}
void *igObjectPropertyForBumpMapShader_vtableRead(){
 UnknownGenObject8013D698 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForBumpMapShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForBumpMapShader_registerNow(){
 meta_registerNow((int)igObjectPropertyForBumpMapShader_register);
}
void igObjectPropertyForBumpMapShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForBumpMapShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForBumpMapShader_getMetaCall,(int)igObjectPropertyForBumpMapShader_className,44,(int)igObjectPropertyForBumpMapShader_vtableRead,(int)fn_8013D820,0,(int)lbl_8055F858);
}
void *igObjectPropertyForBumpMapShader_getMetaCall(){return igObjectPropertyForBumpMapShader_getMeta();}
}
#pragma pop
