#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_newMetaObject(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void *fn_800D1B98();
void igContextExt_register();
void *igGamecubeMultiTextureExt_getMeta();
void igObject_register();
extern char igMultiTextureExt_className[];
extern char igLineWidthExt_className[];
extern char igIndexArray_className[];
extern char igLineWidthExt_fieldTypes[4];
extern char igLineWidthExt_fieldNames[4];
extern char igLineWidthExt_fieldStorage[4];
extern char igLineWidthExt_fieldOffsets[4];
extern char igIndexArray_dependencies[8];
extern void *lbl_805621F4;
extern void *igMultiTextureExt_meta;
extern void *igLineWidthExt_meta;
extern void *igIndexArray_meta;
extern char lbl_805668C8[4];
void *igMultiTextureExt_getMeta();
void igMultiTextureExt_arkRegister();
void igMultiTextureExt_register();
void *igMultiTextureExt_getMetaCall();
void *fn_800D1890();
void *igGamecubeMultiTextureExt_getMetaCall();
void *igLineWidthExt_getMeta();
void igLineWidthExt_arkRegister();
void igLineWidthExt_register();
void *igLineWidthExt_getMetaCall();
void igLineWidthExt_fieldInit();
void *igIndexArray_getMeta();
void igIndexArray_arkRegister();
void igIndexArray_register();
void *igIndexArray_getMetaCall();
}
extern "C" {
void *igMultiTextureExt_getMeta(){
 if(!igMultiTextureExt_meta || !(reinterpret_cast<unsigned int *>(igMultiTextureExt_meta)[0x24/4]&4)) igMultiTextureExt_arkRegister();
 return igMultiTextureExt_meta;
}
void igMultiTextureExt_arkRegister(){
 meta_registerNow((int)igMultiTextureExt_register);
}
void igMultiTextureExt_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igMultiTextureExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igMultiTextureExt_getMetaCall,(int)igMultiTextureExt_className,20,0,(int)fn_800D1890,0,0);
}
void *igMultiTextureExt_getMetaCall(){return igMultiTextureExt_getMeta();}
void *fn_800D1890(){
 void *value0=igMultiTextureExt_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeMultiTextureExt_getMetaCall;
 return value0;
}
void *igGamecubeMultiTextureExt_getMetaCall(){return igGamecubeMultiTextureExt_getMeta();}
void *igLineWidthExt_getMeta(){
 if(!igLineWidthExt_meta || !(reinterpret_cast<unsigned int *>(igLineWidthExt_meta)[0x24/4]&4)) igLineWidthExt_arkRegister();
 return igLineWidthExt_meta;
}
void igLineWidthExt_arkRegister(){
 meta_registerNow((int)igLineWidthExt_register);
}
void igLineWidthExt_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igLineWidthExt_meta,(int)igContextExt_register,(int)fn_800D031C,(int)igLineWidthExt_getMetaCall,(int)igLineWidthExt_className,24,0,(int)igLineWidthExt_fieldInit,0,0);
}
void *igLineWidthExt_getMetaCall(){return igLineWidthExt_getMeta();}
void igLineWidthExt_fieldInit(){
 void *value0=igLineWidthExt_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igLineWidthExt_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_805668C8+0)));
 meta_setupFields(value0,igLineWidthExt_fieldNames,igLineWidthExt_fieldStorage,igLineWidthExt_fieldOffsets,value1);
}
void *igIndexArray_create(void *object){
 igIndexArray_arkRegister();
 return meta_createInstance(igIndexArray_meta,object);
}
void *fn_800D1A68(){
 if(!igIndexArray_meta) igIndexArray_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igIndexArray_meta;
}
void *igIndexArray_getMeta(){
 if(!igIndexArray_meta || !(reinterpret_cast<unsigned int *>(igIndexArray_meta)[0x24/4]&4)) igIndexArray_arkRegister();
 return igIndexArray_meta;
}
void igIndexArray_arkRegister(){
 meta_registerNow((int)igIndexArray_register);
}
void igIndexArray_register(){
 fn_800CE2F8();
 meta_registerClass(1,(int)&igIndexArray_meta,(int)igObject_register,(int)fn_800237D0,(int)igIndexArray_getMetaCall,(int)igIndexArray_className,28,0,(int)fn_800D1B98,0,(int)igIndexArray_dependencies);
}
void *igIndexArray_getMetaCall(){return igIndexArray_getMeta();}
}
#pragma pop
