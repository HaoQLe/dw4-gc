#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B3DC4();
void *fn_802B3F94();
extern char lbl_804CEE2C[];
extern char lbl_804CEE34[];
extern char lbl_804CEE3C[];
extern char lbl_804CEE44[];
extern void *lbl_80534568;
}
extern "C" {
void fn_802B3CFC(){
 void *value0=lbl_80534568;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CEE2C,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B3F94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802B3DC4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804CEE34,lbl_804CEE3C,lbl_804CEE44,value1);
}
}
#pragma pop
