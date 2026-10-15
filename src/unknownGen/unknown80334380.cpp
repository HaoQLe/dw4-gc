#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWWindow_metaObject();
extern char lbl_804E20F4[];
extern char lbl_804E2100[];
extern char lbl_804E210C[];
extern char lbl_804E2118[];
extern void *beNDMWStatus_meta;
}
extern "C" {
void beNDMWStatus_fieldInit(){
 void *value0=beNDMWStatus_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E20F4,3);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWWindow_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804E2100,lbl_804E210C,lbl_804E2118,value1);
}
}
#pragma pop
