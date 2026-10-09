#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80285EDC();
extern char lbl_804E39A8[];
extern char lbl_804E39DC[];
extern char lbl_804E3A10[];
extern char lbl_804E3A44[];
extern void *lbl_80536634;
}
extern "C" {
void beNDMWDegiData_fieldInit(){
 void *value0=lbl_80536634;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E39A8,13);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80285EDC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+52)=(void *)10;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value6=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+60)=value6;
 fn_800659C0(value0,lbl_804E39DC,lbl_804E3A10,lbl_804E3A44,value1);
}
}
#pragma pop
