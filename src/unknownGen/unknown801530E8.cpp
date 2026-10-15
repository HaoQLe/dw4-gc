#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_80152CDC();
void fn_801532FC();
void igAttrEditForNode_register();
extern char lbl_804A0260[];
extern char igAttrEditForLightSet_className[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igAttrEditForLightSet_vtable[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern void *igAttrEditForLightSet_meta;
void *igAttrEditForLightSet_getMeta();
void *igAttrEditForLightSet_vtableRead();
void igAttrEditForLightSet_registerNow();
void igAttrEditForLightSet_register();
void *igAttrEditForLightSet_getMetaCall();
}
struct UnknownGenRoot80153124 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80153124(){igObject_construct(this);}
};
struct UnknownGenObject80153124_0 : UnknownGenRoot80153124 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80153124_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80153124_1 : UnknownGenObject80153124_0 {
 inline ~UnknownGenObject80153124_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80153124 : UnknownGenObject80153124_1 {
 char unknown28[8];
 inline ~UnknownGenObject80153124(){unknown00=igAttrEditForLightSet_vtable;}
};
extern "C" {
void *igAttrEditForLightSet_getMeta(){
 if(!igAttrEditForLightSet_meta || !(reinterpret_cast<unsigned int *>(igAttrEditForLightSet_meta)[0x24/4]&4)) igAttrEditForLightSet_registerNow();
 return igAttrEditForLightSet_meta;
}
void *igAttrEditForLightSet_vtableRead(){
 UnknownGenObject80153124 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A8808;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A88A4;
 object.unknown00=igAttrEditForLightSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrEditForLightSet_registerNow(){
 meta_registerNow((int)igAttrEditForLightSet_register);
}
void igAttrEditForLightSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igAttrEditForLightSet_meta,(int)igAttrEditForNode_register,(int)fn_80152CDC,(int)igAttrEditForLightSet_getMetaCall,(int)igAttrEditForLightSet_className,40,(int)igAttrEditForLightSet_vtableRead,(int)fn_801532FC,0,(int)lbl_804A0260);
}
void *igAttrEditForLightSet_getMetaCall(){return igAttrEditForLightSet_getMeta();}
}
#pragma pop
