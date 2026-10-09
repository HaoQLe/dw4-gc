#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_80028F84();
void *fn_80034D84();
void *fn_80035F2C();
void *fn_800365B4();
void *fn_80036C40();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_8012141C();
void *fn_80122100();
extern char lbl_804D154C[];
extern char lbl_804D1574[];
extern char lbl_804D159C[];
extern char lbl_804D15C4[];
extern void *lbl_8053503C;
}
extern "C" {
void beMessengerArgData_fieldInit(){
 void *value0=lbl_8053503C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D154C,10);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=fn_80034D84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value9=fn_80035F2C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value11=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value13=fn_8012141C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+52)=1;
 void *value14=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value15=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+56)=value15;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value14)+52)=1;
 void *value16=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 void *value17=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+56)=value17;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value16)+52)=1;
 fn_800659C0(value0,lbl_804D1574,lbl_804D159C,lbl_804D15C4,value1);
}
}
#pragma pop
