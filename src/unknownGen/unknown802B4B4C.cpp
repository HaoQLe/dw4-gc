#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80122100();
extern char lbl_804CF08C[];
extern char lbl_804CF098[];
extern char lbl_804CF0A4[];
extern char lbl_804CF0B0[];
extern void *lbl_80534608;
}
extern "C" {
void beWaterMoveData_fieldInit(){
 void *value0=lbl_80534608;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF08C,3);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804CF098,lbl_804CF0A4,lbl_804CF0B0,value1);
}
}
#pragma pop
