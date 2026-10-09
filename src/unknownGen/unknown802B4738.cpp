#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B47E0();
extern char lbl_804CF02C[];
extern char lbl_804CF040[];
extern char lbl_804CF054[];
extern char lbl_804CF068[];
extern void *lbl_805345EC;
}
extern "C" {
void beWaterMove_fieldInit(){
 void *value0=lbl_805345EC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF02C,5);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=fn_802B47E0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804CF040,lbl_804CF054,lbl_804CF068,value1);
}
}
#pragma pop
