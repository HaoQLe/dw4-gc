#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beMatCtrlSearchList_metaObject();
void *beMatCtrlSearch_metaObject();
extern char lbl_804D16DC[];
extern char lbl_804D16F0[];
extern char lbl_804D1704[];
extern char lbl_804D1718[];
extern void *beMatCtrlSearch_meta;
}
extern "C" {
void beMatCtrlSearch_fieldInit(){
 void *value0=beMatCtrlSearch_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D16DC,5);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value3=beMatCtrlSearch_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value5=beMatCtrlSearchList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804D16F0,lbl_804D1704,lbl_804D1718,value1);
}
}
#pragma pop
