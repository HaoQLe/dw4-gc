#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800AF4A4();
extern char lbl_804CF1D8[];
extern char lbl_804CF1DC[];
extern char lbl_804CF1E0[];
extern char lbl_804CF1E4[];
extern void *lbl_80534678;
}
extern "C" {
void beTextureCtrlData_fieldInit(){
 void *value0=lbl_80534678;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF1D8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800AF4A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CF1DC,lbl_804CF1E0,lbl_804CF1E4,value1);
}
}
#pragma pop
