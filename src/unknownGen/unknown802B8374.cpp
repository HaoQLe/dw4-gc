#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beBaseInfoList_metaObject();
extern char lbl_804CF468[];
extern char lbl_804CF46C[];
extern char lbl_804CF470[];
extern char lbl_804CF474[];
extern void *beStaticInfoCtl_meta;
}
extern "C" {
void beStaticInfoCtl_fieldInit(){
 void *value0=beStaticInfoCtl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF468,1);
 void *value2=meta_field(value0,value1);
 void *value3=beBaseInfoList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804CF46C,lbl_804CF470,lbl_804CF474,value1);
}
}
#pragma pop
