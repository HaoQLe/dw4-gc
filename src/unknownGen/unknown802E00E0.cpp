#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *fn_8002E824();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B740C();
void *fn_802DEB34();
void *fn_802DED44();
extern char lbl_804D2868[];
extern char lbl_804D2898[];
extern char lbl_804D28C8[];
extern char lbl_804D28F8[];
extern void *lbl_80535584;
}
extern "C" {
void beCri_fieldInit(){
 void *value0=lbl_80535584;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2868,12);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_802DED44();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=fn_802DED44();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value9=fn_802DEB34();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value11=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value13=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 fn_800659C0(value0,lbl_804D2898,lbl_804D28C8,lbl_804D28F8,value1);
}
}
#pragma pop
