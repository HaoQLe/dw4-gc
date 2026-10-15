#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D330();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForDOFShader_className[];
extern char igObjectPropertyForDOFShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F848[8];
extern void *igObjectPropertyForDOFShader_meta;
void *igObjectPropertyForDOFShader_getMeta();
void *igObjectPropertyForDOFShader_vtableRead();
void igObjectPropertyForDOFShader_registerNow();
void igObjectPropertyForDOFShader_register();
void *igObjectPropertyForDOFShader_getMetaCall();
}
struct UnknownGenRoot8013D1A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013D1A8(){igObject_construct(this);}
};
struct UnknownGenObject8013D1A8_0 : UnknownGenRoot8013D1A8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013D1A8_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013D1A8_1 : UnknownGenObject8013D1A8_0 {
 inline ~UnknownGenObject8013D1A8_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013D1A8 : UnknownGenObject8013D1A8_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013D1A8(){unknown00=igObjectPropertyForDOFShader_vtable;}
};
extern "C" {
void *igObjectPropertyForDOFShader_getMeta(){
 if(!igObjectPropertyForDOFShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForDOFShader_meta)[0x24/4]&4)) igObjectPropertyForDOFShader_registerNow();
 return igObjectPropertyForDOFShader_meta;
}
void *igObjectPropertyForDOFShader_vtableRead(){
 UnknownGenObject8013D1A8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForDOFShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForDOFShader_registerNow(){
 meta_registerNow((int)igObjectPropertyForDOFShader_register);
}
void igObjectPropertyForDOFShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForDOFShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForDOFShader_getMetaCall,(int)igObjectPropertyForDOFShader_className,44,(int)igObjectPropertyForDOFShader_vtableRead,(int)fn_8013D330,0,(int)lbl_8055F848);
}
void *igObjectPropertyForDOFShader_getMetaCall(){return igObjectPropertyForDOFShader_getMeta();}
}
#pragma pop
