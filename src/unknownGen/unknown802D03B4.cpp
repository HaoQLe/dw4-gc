#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMatCtrlInfoWork_metaObject();
extern char lbl_804D167C[];
extern char lbl_804D1680[];
extern char lbl_804D1684[];
extern char lbl_804D1688[];
extern void *beMatCtrlInfoRam_meta;
}
extern "C" {
void beMatCtrlInfoRam_fieldInit(){
 void *value0=beMatCtrlInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D167C,1);
 void *value2=meta_field(value0,value1);
 void *value3=beMatCtrlInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D1680,lbl_804D1684,lbl_804D1688,value1);
}
}
#pragma pop
