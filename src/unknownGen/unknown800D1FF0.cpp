#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *fn_800D2544();
void *fn_800D26C4();
void *igGamecubeImageConvert_getMeta();
void *igGamecubeIndexArray_getMeta();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_8047E1F8[];
extern char igImageLoader_className[];
extern char igImageConvert_className[];
extern char igImageUtils_className[];
extern char igImageList_className[];
extern char igMemoryImage_className[];
extern char igFileImage_className[];
extern char igImageList_vtable[];
extern char igImageList_dependencies[8];
extern char igImage_dependencies[8];
extern char lbl_8055EB8C[8];
extern void *lbl_805621F4;
extern void *igImageLoader_meta;
extern void *igImageConvert_meta;
extern void *igImageUtils_meta;
extern void *igImageList_meta;
extern void *igMemoryImage_meta;
extern void *igFileImage_meta;
extern void *igImage_meta;
extern void *igObjectRefResolver_meta;
void *igImageLoader_getMeta();
void igImageLoader_arkRegister();
void igImageLoader_register();
void *igImageLoader_getMetaCall();
void *fn_800D1DA4();
void *igImageConvert_getMeta();
void igImageConvert_arkRegister();
void igImageConvert_register();
void *igImageConvert_getMetaCall();
void *fn_800D1ED4();
void *igGamecubeImageConvert_getMetaCall();
void *igImageUtils_getMeta();
void igImageUtils_arkRegister();
void igImageUtils_register();
void *igImageUtils_getMetaCall();
void *igImageList_getMeta();
void *igImageList_vtableRead();
void igImageList_arkRegister();
void igImageList_register();
void *igImageList_getMetaCall();
void *igMemoryImage_getMeta();
void igMemoryImage_arkRegister();
void igMemoryImage_register();
void *igMemoryImage_getMetaCall();
void *fn_800D22EC();
void *igFileImage_getMeta();
void igFileImage_arkRegister();
void igFileImage_register();
void *igFileImage_getMetaCall();
void *igImage_getMeta();
void igImage_arkRegister();
void igImage_register();
void *igImage_getMetaCall();
}
struct UnknownGenObject800D20E0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igNodeRefResolver_parentMeta(){return igObjectRefResolver_meta;}
UnknownGenHolder *fn_800D1FF8(UnknownGenHolder *object,short flags){
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
}
#pragma pop
