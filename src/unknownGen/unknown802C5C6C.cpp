#include <unknownGen.h>
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
void fn_802B1AC8();
void beModelCtrlNode2_arkRegister();
void igObject_register();
extern char lbl_8041E6AC[];
extern char beModelCtrlSubComBase_className[];
extern char beModelCtrlSubComBase_fieldTypes[];
extern char beModelCtrlSubComBase_fieldNames[];
extern char beModelCtrlSubComBase_fieldStorage[];
extern char beModelCtrlSubComBase_fieldOffsets[];
extern void *beModelCtrlSubComBase_meta;
extern void *beModelCtrlNode2_meta;
extern void *lbl_805621F4;
void *beModelCtrlSubComBase_getMeta();
void beModelCtrlSubComBase_arkRegister();
void beModelCtrlSubComBase_register();
void *beModelCtrlSubComBase_getMetaCall();
void beModelCtrlSubComBase_fieldInit();
}
extern "C" {
void *beModelCtrlSubComBase_getMeta(){
 if(!beModelCtrlSubComBase_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlSubComBase_meta)[0x24/4]&4)) beModelCtrlSubComBase_arkRegister();
 return beModelCtrlSubComBase_meta;
}
void beModelCtrlSubComBase_arkRegister(){
 meta_registerNow((int)beModelCtrlSubComBase_register);
}
void beModelCtrlSubComBase_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beModelCtrlSubComBase_meta,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlSubComBase_getMetaCall,(int)beModelCtrlSubComBase_className,20,0,(int)beModelCtrlSubComBase_fieldInit,0,0);
}
void *beModelCtrlSubComBase_getMetaCall(){return beModelCtrlSubComBase_getMeta();}
void beModelCtrlSubComBase_fieldInit(){
 void *value0=beModelCtrlSubComBase_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beModelCtrlSubComBase_fieldTypes,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 meta_setupFields(value0,beModelCtrlSubComBase_fieldNames,beModelCtrlSubComBase_fieldStorage,beModelCtrlSubComBase_fieldOffsets,value1);
}
void *beModelCtrlNode2_create(void *object){
 beModelCtrlNode2_arkRegister();
 return meta_createInstance(beModelCtrlNode2_meta,object);
}
void *beModelCtrlNode2_metaObject(){
 if(!beModelCtrlNode2_meta) beModelCtrlNode2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlNode2_meta;
}
void *beModelCtrlNode2_getMeta(){
 if(!beModelCtrlNode2_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlNode2_meta)[0x24/4]&4)) beModelCtrlNode2_arkRegister();
 return beModelCtrlNode2_meta;
}
}
#pragma pop
