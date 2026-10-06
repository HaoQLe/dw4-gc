#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305344(void *,void *,int,int);
void fn_80305A28(void *,void *,void *);
void fn_80306A40(void *,void *);
extern char lbl_80424F00[];
extern char lbl_80424F0C[];
extern void *lbl_805357D4;
extern void *lbl_80535830;
extern void *lbl_80535904;
}
extern "C" {
void fn_802EFD34(int p0){
 fn_80305344(lbl_80535904,lbl_80424F00,0,0);
 fn_80306A40(lbl_80535904,(void *)p0);
 fn_80305A28(lbl_80535904,lbl_80424F0C,&lbl_80535904);
}
void *fn_802EFDA4(){return lbl_80535830;}
void fn_802EFDB4(){}
void *fn_802EFDB8(){return lbl_805357D4;}
}
#pragma pop
