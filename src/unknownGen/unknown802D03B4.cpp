#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beMatCtrlInfoWork_metaObject();
extern char lbl_804D167C[];
extern char lbl_804D1680[];
extern char lbl_804D1684[];
extern char lbl_804D1688[];
extern void *beMatCtrlInfoRam_meta;
}
extern "C" {
void beMatCtrlInfoRam_fieldInit(){
 void *value0=beMatCtrlInfoRam_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D167C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beMatCtrlInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1680,lbl_804D1684,lbl_804D1688,value1);
}
}
#pragma pop
