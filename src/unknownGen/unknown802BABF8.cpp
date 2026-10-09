#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C2174();
extern char lbl_804CF7A8[];
extern char lbl_804CF7B0[];
extern char lbl_804CF7B8[];
extern char lbl_804CF7C0[];
extern void *lbl_805347EC;
}
extern "C" {
void beSelectCtrl_fieldInit(){
 void *value0=lbl_805347EC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF7A8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value4,1);
 fn_800659C0(value0,lbl_804CF7B0,lbl_804CF7B8,lbl_804CF7C0,value1);
}
}
#pragma pop
