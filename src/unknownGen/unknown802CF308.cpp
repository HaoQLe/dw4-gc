#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802CF5C0();
extern char lbl_804D14B0[];
extern char lbl_804D14CC[];
extern char lbl_804D14E8[];
extern char lbl_804D1504[];
extern void *lbl_80535018;
}
extern "C" {
void fn_802CF308(){
 void *value0=lbl_80535018;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D14B0,7);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value3=fn_802CF5C0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D14CC,lbl_804D14E8,lbl_804D1504,value1);
}
}
#pragma pop
