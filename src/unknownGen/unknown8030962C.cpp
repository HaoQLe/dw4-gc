#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80128D90(void *,void *);
extern char lbl_804F8AE0[];
}
extern "C" {
void fn_8030962C(int p0){
 fn_80128D90((reinterpret_cast<char *>((void *)p0)+20),lbl_804F8AE0);
 fn_80128D90((reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+32),(reinterpret_cast<char *>((void *)p0)+84));
}
}
#pragma pop
