#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CFE64[];
extern char lbl_804CFE68[];
extern char lbl_804CFE6C[];
extern char lbl_804CFE70[];
extern void *lbl_805349F0;
}
extern "C" {
void fn_802C01E8(){
 void *value0=lbl_805349F0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFE64,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 fn_800659C0(value0,lbl_804CFE68,lbl_804CFE6C,lbl_804CFE70,value1);
}
}
#pragma pop
