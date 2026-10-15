#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beUnicodeObjList_metaObject();
extern char lbl_804D1FA0[];
extern char lbl_804D1FA4[];
extern char lbl_804D1FA8[];
extern char lbl_804D1FAC[];
extern void *beFontInfo_meta;
}
extern "C" {
void beFontInfo_fieldInit(){
 void *value0=beFontInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1FA0,1);
 void *value2=meta_field(value0,value1);
 void *value3=beUnicodeObjList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D1FA4,lbl_804D1FA8,lbl_804D1FAC,value1);
}
}
#pragma pop
