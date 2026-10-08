#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002E824();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80111CD4();
void *fn_80113DC0();
extern char lbl_804E41D8[];
extern char lbl_804E41E8[];
extern char lbl_804E41F8[];
extern char lbl_804E4208[];
extern void *lbl_8053684C;
}
extern "C" {
void fn_80345AA4(){
 void *value0=lbl_8053684C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E41D8,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80113DC0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80113DC0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_80111CD4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 fn_800659C0(value0,lbl_804E41E8,lbl_804E41F8,lbl_804E4208,value1);
}
}
#pragma pop
