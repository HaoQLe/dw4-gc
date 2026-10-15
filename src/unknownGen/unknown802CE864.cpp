#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beBaseInfoRamList_metaObject();
extern char lbl_804D13F8[];
extern char lbl_804D1410[];
extern char lbl_804D1428[];
extern char lbl_804D1440[];
extern void *beMessengerWork_meta;
}
extern "C" {
void beMessengerWork_fieldInit(){
 void *value0=beMessengerWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D13F8,6);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value5=beBaseInfoRamList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_804D1410,lbl_804D1428,lbl_804D1440,value1);
}
}
#pragma pop
