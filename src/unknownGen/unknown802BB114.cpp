#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802BB1B4();
extern char lbl_804CF7D0[];
extern char lbl_804CF7D4[];
extern char lbl_804CF7D8[];
extern char lbl_804CF7DC[];
extern void *lbl_805347FC;
}
extern "C" {
void beSeInfoData_fieldInit(){
 void *value0=lbl_805347FC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF7D0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802BB1B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CF7D4,lbl_804CF7D8,lbl_804CF7DC,value1);
}
}
#pragma pop
