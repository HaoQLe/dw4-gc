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
void *beModelCtrlNode2_metaObject();
void *beAction2InfoWork_metaObject();
extern char lbl_804D3080[];
extern char lbl_804D3090[];
extern char lbl_804D30A0[];
extern char lbl_804D30B0[];
extern void *beAction2InfoRam_meta;
}
extern "C" {
void beAction2InfoRam_fieldInit(){
 void *value0=beAction2InfoRam_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D3080,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beModelCtrlNode2_metaObject();
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
 void *value9=beAction2InfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 fn_800659C0(value0,lbl_804D3090,lbl_804D30A0,lbl_804D30B0,value1);
}
}
#pragma pop
