#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSvConnectCheck_metaObject();
void *beSaveApi_metaObject();
extern char lbl_804CF8E4[];
extern char lbl_804CF8EC[];
extern char lbl_804CF8F4[];
extern char lbl_804CF8FC[];
extern void *beSaveUtil_meta;
}
extern "C" {
void beSaveUtil_fieldInit(){
 void *value0=beSaveUtil_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF8E4,2);
 void *value2=meta_field(value0,value1);
 void *value3=beSaveApi_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSvConnectCheck_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,lbl_804CF8EC,lbl_804CF8F4,lbl_804CF8FC,value1);
}
}
#pragma pop
