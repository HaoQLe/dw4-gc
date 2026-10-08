#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C2174();
void *fn_8033F20C();
extern char lbl_804E1988[];
extern char lbl_804E1998[];
extern char lbl_804E19A8[];
extern char lbl_804E19B8[];
extern void *lbl_80535D2C;
}
extern "C" {
void fn_80326B1C(){
 void *value0=lbl_80535D2C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1988,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_8033F20C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_804E1998,lbl_804E19A8,lbl_804E19B8,value1);
}
}
#pragma pop
