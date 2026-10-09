#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B928C();
void *fn_802DFD30();
extern char lbl_804CF604[];
extern char lbl_804CF610[];
extern char lbl_804CF61C[];
extern char lbl_804CF628[];
extern void *lbl_80534774;
}
extern "C" {
void beSound_fieldInit(){
 void *value0=lbl_80534774;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF604,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802DFD30();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value5=fn_802B928C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804CF610,lbl_804CF61C,lbl_804CF628,value1);
}
}
#pragma pop
