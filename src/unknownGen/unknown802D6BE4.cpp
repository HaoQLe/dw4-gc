#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beBaseInfoRamList_metaObject();
extern char lbl_804D1CF0[];
extern char lbl_804D1D14[];
extern char lbl_804D1D38[];
extern char lbl_804D1D5C[];
extern void *beGeneraterInfoWork_meta;
}
extern "C" {
void beGeneraterInfoWork_fieldInit(){
 void *value0=beGeneraterInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1CF0,9);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=beBaseInfoRamList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D1D14,lbl_804D1D38,lbl_804D1D5C,value1);
}
}
#pragma pop
