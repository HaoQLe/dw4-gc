#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801AC644();
extern char lbl_804D2960[];
extern char lbl_804D2964[];
extern char lbl_804D2968[];
extern char lbl_804D296C[];
extern void *beChangePosTransformInfoRam_meta;
}
extern "C" {
void beChangePosTransformInfoRam_fieldInit(){
 void *value0=beChangePosTransformInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2960,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801AC644();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D2964,lbl_804D2968,lbl_804D296C,value1);
}
}
#pragma pop
