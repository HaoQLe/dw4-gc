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
void fn_8006665C(void *);
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
extern char lbl_8055EB7C[8];
extern char lbl_8055EB84[8];
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
void igImageLoader_registerNow();
void igImageLoader_register();
void *igImageLoader_getMetaCall();
void *fn_800D1DA4();
void *igImageConvert_getMeta();
void igImageConvert_registerNow();
void igImageConvert_register();
void *igImageConvert_getMetaCall();
void *fn_800D1ED4();
void *igGamecubeImageConvert_getMetaCall();
void *igImageUtils_getMeta();
void igImageUtils_registerNow();
void igImageUtils_register();
void *igImageUtils_getMetaCall();
void *igImageList_getMeta();
void *igImageList_vtableRead();
void igImageList_registerNow();
void igImageList_register();
void *igImageList_getMetaCall();
void *igMemoryImage_getMeta();
void igMemoryImage_registerNow();
void igMemoryImage_register();
void *igMemoryImage_getMetaCall();
void *fn_800D22EC();
void *igFileImage_getMeta();
void igFileImage_registerNow();
void igFileImage_register();
void *igFileImage_getMetaCall();
void *igImage_getMeta();
void igImage_registerNow();
void igImage_register();
void *igImage_getMetaCall();
}
struct UnknownGenObject800D20E0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeIndexArray_getMetaCall(){return igGamecubeIndexArray_getMeta();}
void *igImageLoader_getMeta(){
 if(!igImageLoader_meta || !(reinterpret_cast<unsigned int *>(igImageLoader_meta)[0x24/4]&4)) igImageLoader_registerNow();
 return igImageLoader_meta;
}
void igImageLoader_registerNow(){
 meta_registerNow((int)igImageLoader_register);
}
void igImageLoader_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igImageLoader_meta,(int)igImageUtils_register,(int)fn_800D1DA4,(int)igImageLoader_getMetaCall,(int)igImageLoader_className,8,0,0,0,0);
}
void *igImageLoader_getMetaCall(){return igImageLoader_getMeta();}
void *fn_800D1DA4(){return igImageUtils_meta;}
void *igImageConvert_create(void *object){
 igImageConvert_registerNow();
 return meta_createInstance(igImageConvert_meta,object);
}
void *igImageConvert_getMeta(){
 if(!igImageConvert_meta || !(reinterpret_cast<unsigned int *>(igImageConvert_meta)[0x24/4]&4)) igImageConvert_registerNow();
 return igImageConvert_meta;
}
void igImageConvert_registerNow(){
 meta_registerNow((int)igImageConvert_register);
}
void igImageConvert_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igImageConvert_meta,(int)igImageUtils_register,(int)fn_800D1DA4,(int)igImageConvert_getMetaCall,(int)igImageConvert_className,8,0,(int)fn_800D1ED4,0,0);
}
void *igImageConvert_getMetaCall(){return igImageConvert_getMeta();}
void *fn_800D1ED4(){
 void *value0=igImageConvert_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeImageConvert_getMetaCall;
 return value0;
}
void *igGamecubeImageConvert_getMetaCall(){return igGamecubeImageConvert_getMeta();}
void *igImageUtils_getMeta(){
 if(!igImageUtils_meta || !(reinterpret_cast<unsigned int *>(igImageUtils_meta)[0x24/4]&4)) igImageUtils_registerNow();
 return igImageUtils_meta;
}
void igImageUtils_registerNow(){
 meta_registerNow((int)igImageUtils_register);
}
void igImageUtils_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igImageUtils_meta,(int)igObject_register,(int)fn_800237D0,(int)igImageUtils_getMetaCall,(int)igImageUtils_className,8,0,0,0,0);
}
void *igImageUtils_getMetaCall(){return igImageUtils_getMeta();}
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
void *igImageList_create(void *object){
 igImageList_registerNow();
 return meta_createInstance(igImageList_meta,object);
}
void *igImageList_getMeta(){
 if(!igImageList_meta || !(reinterpret_cast<unsigned int *>(igImageList_meta)[0x24/4]&4)) igImageList_registerNow();
 return igImageList_meta;
}
void *igImageList_vtableRead(){
 UnknownGenObject800D20E0_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047E1F8;
 object.unknown00=igImageList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igImageList_registerNow(){
 meta_registerNow((int)igImageList_register);
}
void igImageList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igImageList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igImageList_getMetaCall,(int)igImageList_className,20,(int)igImageList_vtableRead,0,0,(int)lbl_8055EB7C);
}
void *igImageList_getMetaCall(){return igImageList_getMeta();}
void *igMemoryImage_getMeta(){
 if(!igMemoryImage_meta || !(reinterpret_cast<unsigned int *>(igMemoryImage_meta)[0x24/4]&4)) igMemoryImage_registerNow();
 return igMemoryImage_meta;
}
void igMemoryImage_registerNow(){
 meta_registerNow((int)igMemoryImage_register);
}
void igMemoryImage_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igMemoryImage_meta,(int)igImage_register,(int)fn_800D22EC,(int)igMemoryImage_getMetaCall,(int)igMemoryImage_className,92,0,0,0,0);
}
void *igMemoryImage_getMetaCall(){return igMemoryImage_getMeta();}
void *fn_800D22EC(){return igImage_meta;}
void *igFileImage_getMeta(){
 if(!igFileImage_meta || !(reinterpret_cast<unsigned int *>(igFileImage_meta)[0x24/4]&4)) igFileImage_registerNow();
 return igFileImage_meta;
}
void igFileImage_registerNow(){
 meta_registerNow((int)igFileImage_register);
}
void igFileImage_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igFileImage_meta,(int)igImage_register,(int)fn_800D22EC,(int)igFileImage_getMetaCall,(int)igFileImage_className,92,0,0,0,0);
}
void *igFileImage_getMetaCall(){return igFileImage_getMeta();}
void *igImage_create(void *object){
 igImage_registerNow();
 return meta_createInstance(igImage_meta,object);
}
void *fn_800D2414(){
 if(!igImage_meta) igImage_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igImage_meta;
}
void *igImage_getMeta(){
 if(!igImage_meta || !(reinterpret_cast<unsigned int *>(igImage_meta)[0x24/4]&4)) igImage_registerNow();
 return igImage_meta;
}
void igImage_registerNow(){
 meta_registerNow((int)igImage_register);
}
void igImage_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igImage_meta,(int)igObject_register,(int)fn_800237D0,(int)igImage_getMetaCall,(int)lbl_8055EB8C,92,0,(int)fn_800D2544,(int)fn_800D26C4,(int)lbl_8055EB84);
}
void *igImage_getMetaCall(){return igImage_getMeta();}
}
#pragma pop
