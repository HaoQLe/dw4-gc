#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305ED0(void *,void *,void *,void *,void *);
void fn_80306A1C(void *,int);
extern char lbl_80457DD4[];
extern char lbl_80457DF8[];
}
extern "C" {
void fn_8035C6D0(int p0,int p1,int p2){
 fn_80305ED0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),lbl_80457DD4,(void *)p2,(void *)p1,lbl_80457DF8);
 fn_80306A1C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),0);
}
}
#pragma pop
