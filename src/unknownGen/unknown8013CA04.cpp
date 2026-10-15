#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013CBC8();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForPlanarShadowShader_className[];
extern char igObjectPropertyForPlanarShadowShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F830[8];
extern void *igObjectPropertyForPlanarShadowShader_meta;
void *igObjectPropertyForPlanarShadowShader_getMeta();
void *igObjectPropertyForPlanarShadowShader_vtableRead();
void igObjectPropertyForPlanarShadowShader_registerNow();
void igObjectPropertyForPlanarShadowShader_register();
void *igObjectPropertyForPlanarShadowShader_getMetaCall();
}
struct UnknownGenRoot8013CA40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013CA40(){igObject_construct(this);}
};
struct UnknownGenObject8013CA40_0 : UnknownGenRoot8013CA40 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013CA40_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013CA40_1 : UnknownGenObject8013CA40_0 {
 inline ~UnknownGenObject8013CA40_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013CA40 : UnknownGenObject8013CA40_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013CA40(){unknown00=igObjectPropertyForPlanarShadowShader_vtable;}
};
extern "C" {
void *igObjectPropertyForPlanarShadowShader_getMeta(){
 if(!igObjectPropertyForPlanarShadowShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForPlanarShadowShader_meta)[0x24/4]&4)) igObjectPropertyForPlanarShadowShader_registerNow();
 return igObjectPropertyForPlanarShadowShader_meta;
}
void *igObjectPropertyForPlanarShadowShader_vtableRead(){
 UnknownGenObject8013CA40 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForPlanarShadowShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForPlanarShadowShader_registerNow(){
 meta_registerNow((int)igObjectPropertyForPlanarShadowShader_register);
}
void igObjectPropertyForPlanarShadowShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForPlanarShadowShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForPlanarShadowShader_getMetaCall,(int)igObjectPropertyForPlanarShadowShader_className,44,(int)igObjectPropertyForPlanarShadowShader_vtableRead,(int)fn_8013CBC8,0,(int)lbl_8055F830);
}
void *igObjectPropertyForPlanarShadowShader_getMetaCall(){return igObjectPropertyForPlanarShadowShader_getMeta();}
}
#pragma pop
