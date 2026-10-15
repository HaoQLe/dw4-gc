#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80134C8C();
void igReplaceChild_register();
extern char lbl_8049C7E8[];
extern char igReplaceChildForNode_className[];
extern char igReplaceChildForNode_vtable[];
extern char lbl_804A374C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
extern void *igReplaceChildForNode_meta;
extern void *igReplaceChild_meta;
void *igReplaceChildForNode_getMeta();
void *igReplaceChildForNode_vtableRead();
void igReplaceChildForNode_registerNow();
void igReplaceChildForNode_register();
void *igReplaceChildForNode_getMetaCall();
void *igReplaceChildForNode_parentMeta();
}
struct UnknownGenRoot80134A84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134A84(){fn_8006665C(this);}
};
struct UnknownGenObject80134A84_0 : UnknownGenRoot80134A84 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80134A84_0(){unknown00=lbl_804A374C;}
};
struct UnknownGenObject80134A84 : UnknownGenObject80134A84_0 {
 char unknown2C[12];
 inline ~UnknownGenObject80134A84(){unknown00=igReplaceChildForNode_vtable;}
};
extern "C" {
void *igReplaceChildForNode_getMeta(){
 if(!igReplaceChildForNode_meta || !(reinterpret_cast<unsigned int *>(igReplaceChildForNode_meta)[0x24/4]&4)) igReplaceChildForNode_registerNow();
 return igReplaceChildForNode_meta;
}
void *igReplaceChildForNode_vtableRead(){
 UnknownGenObject80134A84 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA710;
 object.unknown00=lbl_804A374C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown00=igReplaceChildForNode_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igReplaceChildForNode_registerNow(){
 meta_registerNow((int)igReplaceChildForNode_register);
}
void igReplaceChildForNode_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igReplaceChildForNode_meta,(int)igReplaceChild_register,(int)igReplaceChildForNode_parentMeta,(int)igReplaceChildForNode_getMetaCall,(int)igReplaceChildForNode_className,44,(int)igReplaceChildForNode_vtableRead,(int)fn_80134C8C,0,(int)lbl_8049C7E8);
}
void *igReplaceChildForNode_getMetaCall(){return igReplaceChildForNode_getMeta();}
void *igReplaceChildForNode_parentMeta(){return igReplaceChild_meta;}
}
#pragma pop
