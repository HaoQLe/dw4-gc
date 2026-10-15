#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beLuaDataList_metaObject();
extern char lbl_804D1830[];
extern char lbl_804D1834[];
extern char lbl_804D1838[];
extern char lbl_804D183C[];
extern void *beLuaInfo_meta;
}
extern "C" {
void beLuaInfo_fieldInit(){
 void *value0=beLuaInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1830,1);
 void *value2=meta_field(value0,value1);
 void *value3=beLuaDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D1834,lbl_804D1838,lbl_804D183C,value1);
}
}
#pragma pop
