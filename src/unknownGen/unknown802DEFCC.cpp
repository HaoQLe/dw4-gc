#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802DE694();
void *fn_802DF5E4();
extern char lbl_804D267C[];
extern char lbl_804D2690[];
extern char lbl_804D26A4[];
extern char lbl_804D26B8[];
extern void *lbl_805354FC;
}
extern "C" {
void fn_802DEFCC(){
 void *value0=lbl_805354FC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D267C,5);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802DF5E4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802DE694();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804D2690,lbl_804D26A4,lbl_804D26B8,value1);
}
}
#pragma pop
