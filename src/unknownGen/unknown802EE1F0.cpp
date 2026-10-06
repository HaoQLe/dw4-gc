#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305F58(void *,void *,void *,void *);
void fn_80306B00(void *,int);
extern char lbl_80424D0C[];
extern char lbl_80424D18[];
extern void *lbl_80535904;
}
extern "C" {
void fn_802EE1F0(){
 fn_80305F58(lbl_80535904,lbl_80424D0C,lbl_80424D18,&lbl_80535904);
 fn_80306B00(lbl_80535904,0);
}
}
#pragma pop
