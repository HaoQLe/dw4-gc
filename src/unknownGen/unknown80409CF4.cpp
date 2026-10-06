#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8021A100(void *,void *,void *,void *);
extern void *lbl_8055C998;
}
extern "C" {
void fn_80409CF4(int p0){
 fn_8021A100(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+80),*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+84));
}
void *fn_80409D24(){return lbl_8055C998;}
void fn_80409D34(){}
void fn_80409D38(){}
void fn_80409D3C(){}
void fn_80409D40(){}
}
#pragma pop
