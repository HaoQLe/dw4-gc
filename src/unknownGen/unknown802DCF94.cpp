#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D247C[];
extern char lbl_804D2480[];
extern char lbl_804D2484[];
extern char lbl_804D2488[];
extern void *beDataObjBoolList_meta;
}
extern "C" {
void beDataObjBoolList_fieldInit(){
 void *value0=beDataObjBoolList_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D247C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D2480,lbl_804D2484,lbl_804D2488,value1);
}
}
#pragma pop
