#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B740C();
void *fn_802C2174();
extern char lbl_804E2304[];
extern char lbl_804E2310[];
extern char lbl_804E231C[];
extern char lbl_804E2328[];
extern void *lbl_80536054;
}
extern "C" {
void fn_80335C54(){
 void *value0=lbl_80536054;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2304,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 fn_800659C0(value0,lbl_804E2310,lbl_804E231C,lbl_804E2328,value1);
}
}
#pragma pop
