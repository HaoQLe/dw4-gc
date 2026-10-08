#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801C8D74();
void *fn_801CDCF8();
void *fn_802C5E48();
void *fn_802E5504();
extern char lbl_804D3080[];
extern char lbl_804D3090[];
extern char lbl_804D30A0[];
extern char lbl_804D30B0[];
extern void *lbl_805357BC;
}
extern "C" {
void fn_802E5BE0(){
 void *value0=lbl_805357BC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D3080,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C5E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801C8D74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801CDCF8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_802E5504();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 fn_800659C0(value0,lbl_804D3090,lbl_804D30A0,lbl_804D30B0,value1);
}
}
#pragma pop
