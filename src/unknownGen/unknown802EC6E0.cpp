#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305A28(void *,void *);
void fn_80305EA8(void *,void *);
void *fn_80306A40(void *,void *);
void fn_80306B00(void *,int);
void *fn_80306FDC(void *,void *);
extern char lbl_804249D4[];
extern char lbl_80424AE4[];
extern void *lbl_80535904;
}
extern "C" {
void fn_802EC6E0(int p0,int p1,int p2,int p3){
 fn_80305EA8(lbl_80535904,lbl_804249D4);
 fn_80306FDC(lbl_80535904,(void *)p0);
 fn_80306FDC(lbl_80535904,(void *)p1);
 fn_80306A40(lbl_80535904,(void *)p2);
 fn_80306A40(lbl_80535904,(void *)p3);
 fn_80305A28(lbl_80535904,lbl_80424AE4);
 fn_80306B00(lbl_80535904,0);
}
}
#pragma pop
