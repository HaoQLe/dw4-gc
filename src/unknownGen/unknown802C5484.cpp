#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D05B8[];
extern char lbl_804D05BC[];
extern char lbl_804D05C0[];
extern char lbl_804D05C4[];
extern void *beModelCtrlSubCom_meta;
}
extern "C" {
void beModelCtrlSubCom_fieldInit(){
 void *value0=beModelCtrlSubCom_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D05B8,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D05BC,lbl_804D05C0,lbl_804D05C4,value1);
}
}
#pragma pop
