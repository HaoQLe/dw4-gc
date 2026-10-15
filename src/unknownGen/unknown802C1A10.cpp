#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *beModelCtrlNode2_metaObject();
extern char lbl_804D00A0[];
extern char lbl_804D00A8[];
extern char lbl_804D00B0[];
extern char lbl_804D00B8[];
extern void *beParticleCtrl2InfoWork_meta;
}
extern "C" {
void beParticleCtrl2InfoWork_fieldInit(){
 void *value0=beParticleCtrl2InfoWork_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D00A0,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beModelCtrlNode2_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D00A8,lbl_804D00B0,lbl_804D00B8,value1);
}
}
#pragma pop
