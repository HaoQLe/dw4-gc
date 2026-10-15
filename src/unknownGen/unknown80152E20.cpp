#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_80152CDC();
void fn_80153030();
void igAttrEditForNode_register();
extern char igAttrEditForAttrSet_className[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igAttrEditForAttrSet_vtable[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern char lbl_8055FD78[8];
extern void *igAttrEditForAttrSet_meta;
void *igAttrEditForAttrSet_getMeta();
void *igAttrEditForAttrSet_vtableRead();
void igAttrEditForAttrSet_registerNow();
void igAttrEditForAttrSet_register();
void *igAttrEditForAttrSet_getMetaCall();
}
struct UnknownGenRoot80152E5C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80152E5C(){fn_8006665C(this);}
};
struct UnknownGenObject80152E5C_0 : UnknownGenRoot80152E5C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80152E5C_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80152E5C_1 : UnknownGenObject80152E5C_0 {
 inline ~UnknownGenObject80152E5C_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80152E5C : UnknownGenObject80152E5C_1 {
 char unknown28[8];
 inline ~UnknownGenObject80152E5C(){unknown00=igAttrEditForAttrSet_vtable;}
};
extern "C" {
void *igAttrEditForAttrSet_getMeta(){
 if(!igAttrEditForAttrSet_meta || !(reinterpret_cast<unsigned int *>(igAttrEditForAttrSet_meta)[0x24/4]&4)) igAttrEditForAttrSet_registerNow();
 return igAttrEditForAttrSet_meta;
}
void *igAttrEditForAttrSet_vtableRead(){
 UnknownGenObject80152E5C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A8808;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A88A4;
 object.unknown00=igAttrEditForAttrSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrEditForAttrSet_registerNow(){
 meta_registerNow((int)igAttrEditForAttrSet_register);
}
void igAttrEditForAttrSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igAttrEditForAttrSet_meta,(int)igAttrEditForNode_register,(int)fn_80152CDC,(int)igAttrEditForAttrSet_getMetaCall,(int)igAttrEditForAttrSet_className,40,(int)igAttrEditForAttrSet_vtableRead,(int)fn_80153030,0,(int)lbl_8055FD78);
}
void *igAttrEditForAttrSet_getMetaCall(){return igAttrEditForAttrSet_getMeta();}
}
#pragma pop
