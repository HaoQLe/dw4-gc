#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B6CC4();
extern char lbl_804CF1F0[];
extern char lbl_804CF1F8[];
extern char lbl_804CF200[];
extern char lbl_804CF208[];
extern void *lbl_80534680;
}
extern "C" {
void beTextureCtrl_fieldInit(){
 void *value0=lbl_80534680;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF1F0,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_802B6CC4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CF1F8,lbl_804CF200,lbl_804CF208,value1);
}
}
#pragma pop
