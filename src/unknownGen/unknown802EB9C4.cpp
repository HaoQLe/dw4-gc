#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305ED0(void *,void *,int,int,void *);
void fn_80306FB4(void *,int);
extern char lbl_804249D4[];
extern char lbl_804DD248[];
extern void *lbl_80535904;
}
extern "C" {
void fn_802EB9C4(int p0){
 fn_80305ED0(lbl_80535904,lbl_804249D4,0,0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804DD248)+(p0<<2)));
 fn_80306FB4(lbl_80535904,0);
}
}
#pragma pop
