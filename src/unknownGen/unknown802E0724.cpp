#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801AC644();
extern char lbl_804D2930[];
extern char lbl_804D2934[];
extern char lbl_804D2938[];
extern char lbl_804D293C[];
extern void *beCopyTransform_meta;
}
extern "C" {
void beCopyTransform_fieldInit(){
 void *value0=beCopyTransform_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2930,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801AC644();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D2934,lbl_804D2938,lbl_804D293C,value1);
}
}
#pragma pop
