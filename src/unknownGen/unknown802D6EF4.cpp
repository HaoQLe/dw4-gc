#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beGeneraterInfoWork_metaObject();
extern char lbl_804D1D88[];
extern char lbl_804D1D8C[];
extern char lbl_804D1D90[];
extern char lbl_804D1D94[];
extern void *beGeneraterInfoRam_meta;
}
extern "C" {
void beGeneraterInfoRam_fieldInit(){
 void *value0=beGeneraterInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1D88,1);
 void *value2=meta_field(value0,value1);
 void *value3=beGeneraterInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D1D8C,lbl_804D1D90,lbl_804D1D94,value1);
}
}
#pragma pop
