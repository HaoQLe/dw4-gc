#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
extern char lbl_804E23CC[];
extern char lbl_804E23D0[];
extern char lbl_804E23D4[];
extern char lbl_804E23D8[];
extern void *beNDMWSaveCtrl_meta;
}
extern "C" {
void beNDMWSaveCtrl_fieldInit(){
 void *value0=beNDMWSaveCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E23CC,1);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804E23D0,lbl_804E23D4,lbl_804E23D8,value1);
}
}
#pragma pop
