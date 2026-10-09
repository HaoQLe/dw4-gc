#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802CCF98();
void *fn_802DD5BC();
extern char lbl_8041E6AC[];
extern char lbl_804D122C[];
extern char lbl_804D1264[];
extern char lbl_804D129C[];
extern char lbl_804D12D4[];
extern void *lbl_80534F78;
}
extern "C" {
void beMeterCtrlOneData_fieldInit(){
 void *value0=lbl_80534F78;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D122C,14);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802CCF98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8004D4BC(value4,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 fn_8004D4BC(value5,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=fn_802DD5BC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+13));
 void *value9=fn_802DD5BC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 fn_800659C0(value0,lbl_804D1264,lbl_804D129C,lbl_804D12D4,value1);
}
}
#pragma pop
