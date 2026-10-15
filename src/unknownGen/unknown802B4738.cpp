#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beWaterMoveDataList_metaObject();
extern char lbl_804CF02C[];
extern char lbl_804CF040[];
extern char lbl_804CF054[];
extern char lbl_804CF068[];
extern void *beWaterMove_meta;
}
extern "C" {
void beWaterMove_fieldInit(){
 void *value0=beWaterMove_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF02C,5);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=beWaterMoveDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804CF040,lbl_804CF054,lbl_804CF068,value1);
}
}
#pragma pop
