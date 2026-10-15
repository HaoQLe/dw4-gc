#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AEA50();
void *fn_800BAAC4();
void igInfo_register();
void igTextureFunctionAttr_fieldInit();
void igVisualAttribute_register();
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char igTextureInfo_className[];
extern char igTextureFunctionAttr_className[];
extern char igTextureInfo_vtable[];
extern char igTextureFunctionAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureInfo_dependencies[8];
extern char igTextureInfo_fieldTypes[4];
extern char igTextureInfo_fieldNames[4];
extern char igTextureInfo_fieldStorage[4];
extern char igTextureInfo_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igTextureInfo_meta;
extern void *igTextureFunctionAttr_meta;
void *igTextureInfo_getMeta();
void *igTextureInfo_vtableRead();
void igTextureInfo_arkRegister();
void igTextureInfo_register();
void *igTextureInfo_getMetaCall();
void igTextureInfo_fieldInit();
void *igTextureFunctionAttr_getMeta();
void *igTextureFunctionAttr_vtableRead();
void igTextureFunctionAttr_arkRegister();
void igTextureFunctionAttr_register();
void *igTextureFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800AE4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AE4AC(){igObject_construct(this);}
};
struct UnknownGenObject800AE4AC_0 : UnknownGenRoot800AE4AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800AE4AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800AE4AC_1 : UnknownGenObject800AE4AC_0 {
 inline ~UnknownGenObject800AE4AC_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject800AE4AC : UnknownGenObject800AE4AC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800AE4AC(){unknown00=igTextureInfo_vtable;}
};
struct UnknownGenObject800AE80C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800AE794(){
 if(!igTextureFunctionAttr_meta) igTextureFunctionAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureFunctionAttr_meta;
}
void *igTextureFunctionAttr_getMeta(){
 if(!igTextureFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureFunctionAttr_meta)[0x24/4]&4)) igTextureFunctionAttr_arkRegister();
 return igTextureFunctionAttr_meta;
}
void *igTextureFunctionAttr_vtableRead(){
 UnknownGenObject800AE80C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureFunctionAttr_arkRegister(){
 meta_registerNow((int)igTextureFunctionAttr_register);
}
void igTextureFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureFunctionAttr_getMetaCall,(int)igTextureFunctionAttr_className,40,(int)igTextureFunctionAttr_vtableRead,(int)igTextureFunctionAttr_fieldInit,(int)fn_800AEA50,0);
}
void *igTextureFunctionAttr_getMetaCall(){return igTextureFunctionAttr_getMeta();}
}
#pragma pop
