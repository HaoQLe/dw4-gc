#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804E1EFC[];
extern char lbl_804E1F00[];
extern char lbl_804E1F04[];
extern char lbl_804E1F08[];
extern void *beNDMWStatusCtrlFlag_meta;
}
extern "C" {
void beNDMWStatusCtrlFlag_fieldInit(){
 void *value0=beNDMWStatusCtrlFlag_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1EFC,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804E1F00,lbl_804E1F04,lbl_804E1F08,value1);
}
}
#pragma pop
