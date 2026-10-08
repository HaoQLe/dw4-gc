#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80122100();
void *fn_801225BC();
extern char lbl_804D0BE0[];
extern char lbl_804D0BFC[];
extern char lbl_804D0C18[];
extern char lbl_804D0C34[];
extern void *lbl_80534DA0;
}
extern "C" {
void fn_802C82F0(){
 void *value0=lbl_80534DA0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0BE0,7);
 void *value2=fn_800658E4(value0,value1);
 fn_8003EC68(value2,1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value4=fn_801225BC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+60)=0;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value6=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value8=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+52)=1;
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value10=fn_801225BC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 fn_800659C0(value0,lbl_804D0BFC,lbl_804D0C18,lbl_804D0C34,value1);
}
}
#pragma pop
