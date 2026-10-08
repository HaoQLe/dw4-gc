#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D7DC0();
extern char lbl_804D1E98[];
extern char lbl_804D1EA8[];
extern char lbl_804D1EB8[];
extern char lbl_804D1EC8[];
extern void *lbl_805352CC;
}
extern "C" {
void fn_802D7CF8(){
 void *value0=lbl_805352CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1E98,4);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_802D7DC0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_802D7DC0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804D1EA8,lbl_804D1EB8,lbl_804D1EC8,value1);
}
}
#pragma pop
