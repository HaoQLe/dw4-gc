#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_800711A8(void *,int);
extern char lbl_804CF4E0[];
extern char lbl_804CF4F8[];
extern char lbl_804CF510[];
extern char lbl_804CF528[];
extern void *beSoundData_meta;
}
extern "C" {
void beSoundData_fieldInit(){
 void *value0=beSoundData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF4E0,6);
 void *value2=meta_field(value0,value1);
 fn_800711A8(value2,-1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_800711A8(value3,-1);
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value4,-1);
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_800711A8(value5,1);
 meta_setupFields(value0,lbl_804CF4F8,lbl_804CF510,lbl_804CF528,value1);
}
}
#pragma pop
