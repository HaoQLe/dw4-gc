#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800D0068();
void fn_802E7FDC();
extern char lbl_8041D5B0[];
extern char lbl_8041E6AC[];
extern char lbl_804D3210[];
extern char lbl_804D323C[];
extern char lbl_804D3268[];
extern char lbl_804D3294[];
extern void *lbl_80535838;
extern void *lbl_80535868;
extern void *lbl_805621F4;
}
extern "C" {
void fn_802E7B4C(){
 void *value0=lbl_80535838;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D3210,11);
 void *value2=fn_800658E4(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 fn_8003EC68(value4,1);
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8004D4BC(value5,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value7=fn_800D0068();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+38)=0;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value9=fn_800D0068();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+38)=0;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+38)=0;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value11)+38)=0;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+10));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+38)=0;
 fn_800659C0(value0,lbl_804D323C,lbl_804D3268,lbl_804D3294,value1);
}
void *fn_802E7CAC(){
 if(!lbl_80535868) lbl_80535868=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535868;
}
void *fn_802E7D00(){
 if(!lbl_80535868 || !(reinterpret_cast<unsigned int *>(lbl_80535868)[0x24/4]&4)) fn_802E7FDC();
 return lbl_80535868;
}
}
#pragma pop
