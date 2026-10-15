#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beModelCtrlSCHitBox_arkRegister();
extern char beModelCtrlSCSound_fieldTypes[];
extern char beModelCtrlSCSound_fieldNames[];
extern char beModelCtrlSCSound_fieldStorage[];
extern char beModelCtrlSCSound_fieldOffsets[];
extern void *beModelCtrlSCSound_meta;
extern void *beModelCtrlSCHitBox_meta;
}
extern "C" {
void beModelCtrlSCSound_fieldInit(){
 void *meta=beModelCtrlSCSound_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beModelCtrlSCSound_fieldTypes,0x2);
 meta_setupFields(meta,beModelCtrlSCSound_fieldNames,beModelCtrlSCSound_fieldStorage,beModelCtrlSCSound_fieldOffsets,field);
}
void *beModelCtrlSCHitBox_create(void *object){
 beModelCtrlSCHitBox_arkRegister();
 return meta_createInstance(beModelCtrlSCHitBox_meta,object);
}
void *beModelCtrlSCHitBox_getMeta(){
 if(!beModelCtrlSCHitBox_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlSCHitBox_meta)[0x24/4]&4)) beModelCtrlSCHitBox_arkRegister();
 return beModelCtrlSCHitBox_meta;
}
}
#pragma pop
