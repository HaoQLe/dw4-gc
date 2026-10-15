#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C460();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForMultiTextureShader_className[];
extern char igObjectPropertyForMultiTextureShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F818[8];
extern void *igObjectPropertyForMultiTextureShader_meta;
void *igObjectPropertyForMultiTextureShader_getMeta();
void *igObjectPropertyForMultiTextureShader_vtableRead();
void igObjectPropertyForMultiTextureShader_registerNow();
void igObjectPropertyForMultiTextureShader_register();
void *igObjectPropertyForMultiTextureShader_getMetaCall();
}
struct UnknownGenRoot8013C2D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C2D8(){igObject_construct(this);}
};
struct UnknownGenObject8013C2D8_0 : UnknownGenRoot8013C2D8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C2D8_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C2D8_1 : UnknownGenObject8013C2D8_0 {
 inline ~UnknownGenObject8013C2D8_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013C2D8 : UnknownGenObject8013C2D8_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C2D8(){unknown00=igObjectPropertyForMultiTextureShader_vtable;}
};
extern "C" {
void *igObjectPropertyForMultiTextureShader_getMeta(){
 if(!igObjectPropertyForMultiTextureShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForMultiTextureShader_meta)[0x24/4]&4)) igObjectPropertyForMultiTextureShader_registerNow();
 return igObjectPropertyForMultiTextureShader_meta;
}
void *igObjectPropertyForMultiTextureShader_vtableRead(){
 UnknownGenObject8013C2D8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForMultiTextureShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForMultiTextureShader_registerNow(){
 meta_registerNow((int)igObjectPropertyForMultiTextureShader_register);
}
void igObjectPropertyForMultiTextureShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForMultiTextureShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForMultiTextureShader_getMetaCall,(int)igObjectPropertyForMultiTextureShader_className,44,(int)igObjectPropertyForMultiTextureShader_vtableRead,(int)fn_8013C460,0,(int)lbl_8055F818);
}
void *igObjectPropertyForMultiTextureShader_getMetaCall(){return igObjectPropertyForMultiTextureShader_getMeta();}
}
#pragma pop
