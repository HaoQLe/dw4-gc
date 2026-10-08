#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802CDF04();
void *fn_8033ECA8();
void *fn_803410B8();
void *fn_80341984();
extern char lbl_804E32D4[];
extern char lbl_804E3314[];
extern char lbl_804E3354[];
extern char lbl_804E3394[];
extern void *lbl_8053645C;
}
extern "C" {
void fn_8033DDB8(){
 void *value0=lbl_8053645C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E32D4,16);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_803410B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80341984();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_8033ECA8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+60)=0;
 fn_800659C0(value0,lbl_804E3314,lbl_804E3354,lbl_804E3394,value1);
}
}
#pragma pop
