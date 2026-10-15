#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_800427E8();
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDirEntry_fieldInit();
void igNamedObject_register();
extern char igVirtualCFuncMetaField_className[];
extern char lbl_804672C8[];
extern char lbl_804672D4[];
extern char igDirEntry_className[];
extern char igDirEntry_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_8055D5B0[8];
extern void *lbl_80561CF8;
extern void *lbl_80561CFC;
extern void *igDirEntry_meta;
void *igDirEntry_getMeta();
void *igDirEntry_vtableRead();
void igDirEntry_arkRegister();
void igDirEntry_register();
void *igDirEntry_getMetaCall();
}
struct UnknownGenRoot80032CC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032CC0(){igObject_construct(this);}
};
struct UnknownGenObject80032CC0_0 : UnknownGenRoot80032CC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80032CC0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80032CC0 : UnknownGenObject80032CC0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject80032CC0(){unknown00=igDirEntry_vtable;}
};
extern "C" {
void *fn_80032B94(){return fn_800427E8();}
void *fn_80032BB4(){
 void *value0;
 if(!lbl_80561CF8){
  value0=fn_800635C8(lbl_8055D5B0,lbl_804672C8,lbl_804672D4,3);
  lbl_80561CF8=value0;
 }
 return lbl_80561CF8;
}
void *fn_80032C00(){
 char *data=igVirtualCFuncMetaField_className;
 if(!lbl_80561CFC) lbl_80561CFC=fn_800635C8(data+0x4204,data+0x41EC,data+0x41F8,0x3);
 return lbl_80561CFC;
}
void *igDirEntry_create(void *object){
 igDirEntry_arkRegister();
 return meta_createInstance(igDirEntry_meta,object);
}
void *igDirEntry_getMeta(){
 if(!igDirEntry_meta || !(reinterpret_cast<unsigned int *>(igDirEntry_meta)[0x24/4]&4)) igDirEntry_arkRegister();
 return igDirEntry_meta;
}
void *igDirEntry_vtableRead(){
 UnknownGenObject80032CC0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igDirEntry_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDirEntry_arkRegister(){
 meta_registerNow((int)igDirEntry_register);
}
void igDirEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igDirEntry_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igDirEntry_getMetaCall,(int)igDirEntry_className,28,(int)igDirEntry_vtableRead,(int)igDirEntry_fieldInit,0,0);
}
void *igDirEntry_getMetaCall(){return igDirEntry_getMeta();}
}
#pragma pop
