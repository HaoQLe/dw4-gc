#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D0B8();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForModelViewMatrixBoneSelect_className[];
extern char igObjectPropertyForModelViewMatrixBoneSelect_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F840[8];
extern void *igObjectPropertyForModelViewMatrixBoneSelect_meta;
void *igObjectPropertyForModelViewMatrixBoneSelect_getMeta();
void *igObjectPropertyForModelViewMatrixBoneSelect_vtableRead();
void igObjectPropertyForModelViewMatrixBoneSelect_registerNow();
void igObjectPropertyForModelViewMatrixBoneSelect_register();
void *igObjectPropertyForModelViewMatrixBoneSelect_getMetaCall();
}
struct UnknownGenRoot8013CF30 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013CF30(){fn_8006665C(this);}
};
struct UnknownGenObject8013CF30_0 : UnknownGenRoot8013CF30 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013CF30_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013CF30_1 : UnknownGenObject8013CF30_0 {
 inline ~UnknownGenObject8013CF30_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013CF30 : UnknownGenObject8013CF30_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013CF30(){unknown00=igObjectPropertyForModelViewMatrixBoneSelect_vtable;}
};
extern "C" {
void *igObjectPropertyForModelViewMatrixBoneSelect_getMeta(){
 if(!igObjectPropertyForModelViewMatrixBoneSelect_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForModelViewMatrixBoneSelect_meta)[0x24/4]&4)) igObjectPropertyForModelViewMatrixBoneSelect_registerNow();
 return igObjectPropertyForModelViewMatrixBoneSelect_meta;
}
void *igObjectPropertyForModelViewMatrixBoneSelect_vtableRead(){
 UnknownGenObject8013CF30 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForModelViewMatrixBoneSelect_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForModelViewMatrixBoneSelect_registerNow(){
 meta_registerNow((int)igObjectPropertyForModelViewMatrixBoneSelect_register);
}
void igObjectPropertyForModelViewMatrixBoneSelect_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForModelViewMatrixBoneSelect_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForModelViewMatrixBoneSelect_getMetaCall,(int)igObjectPropertyForModelViewMatrixBoneSelect_className,44,(int)igObjectPropertyForModelViewMatrixBoneSelect_vtableRead,(int)fn_8013D0B8,0,(int)lbl_8055F840);
}
void *igObjectPropertyForModelViewMatrixBoneSelect_getMetaCall(){return igObjectPropertyForModelViewMatrixBoneSelect_getMeta();}
}
#pragma pop
