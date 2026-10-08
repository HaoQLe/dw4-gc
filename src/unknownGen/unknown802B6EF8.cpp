#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CF218[];
extern char lbl_804CF220[];
extern char lbl_804CF228[];
extern char lbl_804CF230[];
extern void *lbl_8053468C;
}
extern "C" {
void fn_802B6EF8(){
 void *value0=lbl_8053468C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF218,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804CF220,lbl_804CF228,lbl_804CF230,value1);
}
}
#pragma pop
