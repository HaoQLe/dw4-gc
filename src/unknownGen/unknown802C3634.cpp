#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C36F0();
extern char lbl_804D0400[];
extern char lbl_804D0408[];
extern char lbl_804D0410[];
extern char lbl_804D0418[];
extern void *lbl_80534B68;
}
extern "C" {
void beNumVerData_fieldInit(){
 void *value0=lbl_80534B68;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0400,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_802C36F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 fn_800659C0(value0,lbl_804D0408,lbl_804D0410,lbl_804D0418,value1);
}
}
#pragma pop
