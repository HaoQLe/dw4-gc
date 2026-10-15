#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSeDataList_metaObject();
extern char lbl_804CF7D0[];
extern char lbl_804CF7D4[];
extern char lbl_804CF7D8[];
extern char lbl_804CF7DC[];
extern void *beSeInfoData_meta;
}
extern "C" {
void beSeInfoData_fieldInit(){
 void *value0=beSeInfoData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF7D0,1);
 void *value2=meta_field(value0,value1);
 void *value3=beSeDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804CF7D4,lbl_804CF7D8,lbl_804CF7DC,value1);
}
}
#pragma pop
