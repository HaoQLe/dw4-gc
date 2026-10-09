#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B966C();
extern char lbl_804CF6A8[];
extern char lbl_804CF6B0[];
extern char lbl_804CF6B8[];
extern char lbl_804CF6C0[];
extern void *lbl_805347A8;
}
extern "C" {
void beShadow01_fieldInit(){
 void *value0=lbl_805347A8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF6A8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B966C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804CF6B0,lbl_804CF6B8,lbl_804CF6C0,value1);
}
}
#pragma pop
