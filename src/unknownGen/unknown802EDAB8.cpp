#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802ECD20(void *,void *,void *,void *,void *);
void fn_80305ED0(void *,void *,void *,void *,void *);
extern char lbl_80424B3C[];
extern void *lbl_80535904;
extern char lbl_80535914[];
}
extern "C" {
void fn_802EDAB8(int p0){
 fn_80305ED0(lbl_80535904,lbl_80424B3C,*reinterpret_cast<void **>((lbl_80535914+24)),*reinterpret_cast<void **>((lbl_80535914+4)),(void *)p0);
}
void fn_802EDB00(int p0,int p1){
 fn_802ECD20(lbl_80424B3C,*reinterpret_cast<void **>((lbl_80535914+24)),*reinterpret_cast<void **>((lbl_80535914+4)),(void *)p0,(void *)p1);
}
}
#pragma pop
