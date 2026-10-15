#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beModelCtrlNode2_metaObject();
extern char lbl_804D2948[];
extern char lbl_804D294C[];
extern char lbl_804D2950[];
extern char lbl_804D2954[];
extern void *beCopyModelCtrl2_meta;
}
extern "C" {
void beCopyModelCtrl2_fieldInit(){
 void *value0=beCopyModelCtrl2_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2948,1);
 void *value2=meta_field(value0,value1);
 void *value3=beModelCtrlNode2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D294C,lbl_804D2950,lbl_804D2954,value1);
}
}
#pragma pop
