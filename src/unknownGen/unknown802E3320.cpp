#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802E3840();
void *fn_802E3C58();
void *fn_802E3EB8();
extern char lbl_804D2CD0[];
extern char lbl_804D2CF4[];
extern char lbl_804D2D18[];
extern char lbl_804D2D3C[];
extern void *lbl_805356AC;
}
extern "C" {
void fn_802E3320(){
 void *value0=lbl_805356AC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2CD0,9);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_802E3C58();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value5=fn_802E3840();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8003EC68(value6,1);
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value8=fn_802E3EB8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 fn_800659C0(value0,lbl_804D2CF4,lbl_804D2D18,lbl_804D2D3C,value1);
}
}
#pragma pop
