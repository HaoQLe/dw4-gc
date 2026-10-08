#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D243C[];
extern char lbl_804D2440[];
extern char lbl_804D2444[];
extern char lbl_804D2448[];
extern void *lbl_80535448;
}
extern "C" {
void fn_802DC71C(){
 void *value0=lbl_80535448;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D243C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D2440,lbl_804D2444,lbl_804D2448,value1);
}
}
#pragma pop
