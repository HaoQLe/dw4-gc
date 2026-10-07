#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305ED0(void *,void *,void *,void *,void *);
void *fn_8036317C(void *);
extern char lbl_804580A0[];
}
extern "C" {
void fn_80363114(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+34)=0;
 fn_80305ED0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(reinterpret_cast<char *>(lbl_804580A0)+996),(reinterpret_cast<char *>(lbl_804580A0)+1008),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(reinterpret_cast<char *>(lbl_804580A0)+1120));
 fn_8036317C((void *)p0);
}
}
#pragma pop
