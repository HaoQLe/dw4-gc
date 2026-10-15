#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
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
extern char lbl_8055DFD8[8];
extern char lbl_8055DFE0[4];
extern char lbl_8055DFE4[4];
extern char lbl_8055DFE8[4];
extern char lbl_8055DFEC[4];
extern void *lbl_805621F4;
extern void *igTextureInfo_meta;
extern void *igTextureFunctionAttr_meta;
void *igTextureInfo_getMeta();
void *igTextureInfo_vtableRead();
void igTextureInfo_registerNow();
void igTextureInfo_register();
void *igTextureInfo_getMetaCall();
void igTextureInfo_fieldInit();
void *igTextureFunctionAttr_getMeta();
void *igTextureFunctionAttr_vtableRead();
void igTextureFunctionAttr_registerNow();
void igTextureFunctionAttr_register();
void *igTextureFunctionAttr_getMetaCall();
}
struct UnknownGenRoot800AE4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AE4AC(){fn_8006665C(this);}
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
void *igTextureInfo_getMeta(){
 if(!igTextureInfo_meta || !(reinterpret_cast<unsigned int *>(igTextureInfo_meta)[0x24/4]&4)) igTextureInfo_registerNow();
 return igTextureInfo_meta;
}
void *igTextureInfo_vtableRead(){
 UnknownGenObject800AE4AC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igTextureInfo_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800AE5A4(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void igTextureInfo_registerNow(){
 meta_registerNow((int)igTextureInfo_register);
}
void igTextureInfo_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igTextureInfo_getMetaCall,(int)igTextureInfo_className,24,(int)igTextureInfo_vtableRead,(int)igTextureInfo_fieldInit,0,(int)lbl_8055DFD8);
}
void *igTextureInfo_getMetaCall(){return igTextureInfo_getMeta();}
void igTextureInfo_fieldInit(){
 void *value0=igTextureInfo_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DFE0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800BAAC4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055DFE4,lbl_8055DFE8,lbl_8055DFEC,value1);
}
void *igTextureFunctionAttr_create(void *object){
 igTextureFunctionAttr_registerNow();
 return meta_createInstance(igTextureFunctionAttr_meta,object);
}
void *fn_800AE794(){
 if(!igTextureFunctionAttr_meta) igTextureFunctionAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureFunctionAttr_meta;
}
void *igTextureFunctionAttr_getMeta(){
 if(!igTextureFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureFunctionAttr_meta)[0x24/4]&4)) igTextureFunctionAttr_registerNow();
 return igTextureFunctionAttr_meta;
}
void *igTextureFunctionAttr_vtableRead(){
 UnknownGenObject800AE80C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureFunctionAttr_registerNow(){
 meta_registerNow((int)igTextureFunctionAttr_register);
}
void igTextureFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureFunctionAttr_getMetaCall,(int)igTextureFunctionAttr_className,40,(int)igTextureFunctionAttr_vtableRead,(int)igTextureFunctionAttr_fieldInit,(int)fn_800AEA50,0);
}
void *igTextureFunctionAttr_getMetaCall(){return igTextureFunctionAttr_getMeta();}
}
#pragma pop
