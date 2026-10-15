#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D1210[];
extern char lbl_804D1214[];
extern char lbl_804D1218[];
extern char lbl_804D121C[];
extern void *beMeterCtrlInfo_meta;
}
extern "C" {
void beMeterCtrlInfo_fieldInit(){
 void *value0=beMeterCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1210,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D1214,lbl_804D1218,lbl_804D121C,value1);
}
}
#pragma pop
