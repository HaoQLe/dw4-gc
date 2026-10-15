#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igBlendFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igVisualContextAttrDefaultManager_className[];
extern char igBlendFunctionAttr_className[];
extern char igBlendFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igBlendFunctionAttr_dependencies[8];
extern void *lbl_805621F4;
extern void *lbl_80562A08;
extern void *lbl_80562A0C;
extern void *igBlendFunctionAttr_meta;
void *igBlendFunctionAttr_getMeta();
void *igBlendFunctionAttr_vtableRead();
void igBlendFunctionAttr_arkRegister();
void igBlendFunctionAttr_register();
void *igBlendFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800BA740 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BA740(){igObject_construct(this);}
};
struct UnknownGenObject800BA740 : UnknownGenRoot800BA740 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 char unknown1C[36];
 inline ~UnknownGenObject800BA740(){unknown00=igBlendFunctionAttr_vtable;}
};
extern "C" {
void *fn_800BA6C8(){
 if(!igBlendFunctionAttr_meta) igBlendFunctionAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igBlendFunctionAttr_meta;
}
void *igBlendFunctionAttr_getMeta(){
 if(!igBlendFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igBlendFunctionAttr_meta)[0x24/4]&4)) igBlendFunctionAttr_arkRegister();
 return igBlendFunctionAttr_meta;
}
void *igBlendFunctionAttr_vtableRead(){
 UnknownGenObject800BA740 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igBlendFunctionAttr_vtable;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBlendFunctionAttr_arkRegister(){
 meta_registerNow((int)igBlendFunctionAttr_register);
}
void igBlendFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igBlendFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igBlendFunctionAttr_getMetaCall,(int)igBlendFunctionAttr_className,52,(int)igBlendFunctionAttr_vtableRead,(int)igBlendFunctionAttr_fieldInit,0,(int)igBlendFunctionAttr_dependencies);
}
void *igBlendFunctionAttr_getMetaCall(){return igBlendFunctionAttr_getMeta();}
}
#pragma pop
