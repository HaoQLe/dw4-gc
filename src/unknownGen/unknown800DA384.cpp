#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80062C90(void *,void *);
void fn_8006F428(void *,void *,int);
extern char lbl_8048FE00[];
extern void *lbl_80562104;
extern void *lbl_80562FA8;
}
extern "C" {
void fn_800DA384(){
 fn_8006F428(lbl_80562104,lbl_8048FE00,128);
 fn_80062C90(lbl_80562FA8,lbl_8048FE00);
}
}
#pragma pop
