#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beModelCtrlSCHitBox_registerNow();
extern char lbl_804D05C8[];
extern char lbl_804D05D0[];
extern char lbl_804D05D8[];
extern char lbl_804D05E0[];
extern void *beModelCtrlSCSound_meta;
extern void *beModelCtrlSCHitBox_meta;
}
extern "C" {
void beModelCtrlSCSound_fieldInit(){
 void *meta=beModelCtrlSCSound_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D05C8,0x2);
 meta_setupFields(meta,lbl_804D05D0,lbl_804D05D8,lbl_804D05E0,field);
}
void *beModelCtrlSCHitBox_create(void *object){
 beModelCtrlSCHitBox_registerNow();
 return meta_createInstance(beModelCtrlSCHitBox_meta,object);
}
void *beModelCtrlSCHitBox_getMeta(){
 if(!beModelCtrlSCHitBox_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlSCHitBox_meta)[0x24/4]&4)) beModelCtrlSCHitBox_registerNow();
 return beModelCtrlSCHitBox_meta;
}
}
#pragma pop
