#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beBaseInfoRamList_metaObject();
extern char lbl_804D1CF0[];
extern char lbl_804D1D14[];
extern char lbl_804D1D38[];
extern char lbl_804D1D5C[];
extern void *beGeneraterInfoWork_meta;
}
extern "C" {
void beGeneraterInfoWork_fieldInit(){
 void *value0=beGeneraterInfoWork_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1CF0,9);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=beBaseInfoRamList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D1D14,lbl_804D1D38,lbl_804D1D5C,value1);
}
}
#pragma pop
