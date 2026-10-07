#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305344(void *,void *,void *,void *);
void fn_80305A28(void *,void *);
void fn_80306A1C(void *,int);
void *fn_80306FDC(void *,void *);
extern char lbl_80457DD4[];
extern char lbl_80457DEC[];
}
extern "C" {
void fn_8035C490(int p0,int p1,int p2,int p3){
 fn_80305344(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),lbl_80457DD4,(void *)p2,(void *)p1);
 fn_80306FDC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p3);
 fn_80305A28(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),lbl_80457DEC);
 fn_80306A1C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),0);
}
}
#pragma pop
