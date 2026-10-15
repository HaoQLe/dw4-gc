#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void igSubTextureBindAttr_fieldInit();
void igTextureBindAttr_register();
extern char igSubTextureBindAttr_className[];
extern char igTextureBindAttr_vtable[];
extern char igSubTextureBindAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *igTextureBindAttr_meta;
extern void *igSubTextureBindAttr_meta;
void *igSubTextureBindAttr_getMeta();
void *igSubTextureBindAttr_vtableRead();
void igSubTextureBindAttr_arkRegister();
void igSubTextureBindAttr_register();
void *igSubTextureBindAttr_getMetaCall();
void *igSubTextureBindAttr_parentMeta();
}
struct UnknownGenRoot800AFFCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AFFCC(){igObject_construct(this);}
};
struct UnknownGenObject800AFFCC_0 : UnknownGenRoot800AFFCC {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800AFFCC_0(){unknown00=igTextureBindAttr_vtable;}
};
struct UnknownGenObject800AFFCC : UnknownGenObject800AFFCC_0 {
 char unknown10[32];
 inline ~UnknownGenObject800AFFCC(){unknown00=igSubTextureBindAttr_vtable;}
};
extern "C" {
void *igSubTextureBindAttr_getMeta(){
 if(!igSubTextureBindAttr_meta || !(reinterpret_cast<unsigned int *>(igSubTextureBindAttr_meta)[0x24/4]&4)) igSubTextureBindAttr_arkRegister();
 return igSubTextureBindAttr_meta;
}
void *igSubTextureBindAttr_vtableRead(){
 UnknownGenObject800AFFCC object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureBindAttr_vtable;
 object.unknown0C.value=0;
 object.unknown00=igSubTextureBindAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSubTextureBindAttr_arkRegister(){
 meta_registerNow((int)igSubTextureBindAttr_register);
}
void igSubTextureBindAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igSubTextureBindAttr_meta,(int)igTextureBindAttr_register,(int)igSubTextureBindAttr_parentMeta,(int)igSubTextureBindAttr_getMetaCall,(int)igSubTextureBindAttr_className,44,(int)igSubTextureBindAttr_vtableRead,(int)igSubTextureBindAttr_fieldInit,0,0);
}
void *igSubTextureBindAttr_getMetaCall(){return igSubTextureBindAttr_getMeta();}
void *igSubTextureBindAttr_parentMeta(){return igTextureBindAttr_meta;}
}
#pragma pop
