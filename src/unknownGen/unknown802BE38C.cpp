#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802BF52C();
void *fn_802C0044();
extern char lbl_804CFC00[];
extern char lbl_804CFC08[];
extern char lbl_804CFC10[];
extern char lbl_804CFC18[];
extern void *lbl_80534930;
}
extern "C" {
void fn_802BE38C(){
 void *value0=lbl_80534930;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFC00,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802BF52C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802C0044();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_804CFC08,lbl_804CFC10,lbl_804CFC18,value1);
}
}
#pragma pop
