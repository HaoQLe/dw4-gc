#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D31F8[];
extern char lbl_804D31FC[];
extern char lbl_804D3200[];
extern char lbl_804D3204[];
extern void *lbl_80535830;
}
extern "C" {
void be_fieldInit(){
 void *value0=lbl_80535830;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D31F8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D31FC,lbl_804D3200,lbl_804D3204,value1);
}
}
#pragma pop
