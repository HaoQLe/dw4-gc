#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void MWTRACE(void *,...);
void *fn_800AAB08(void *,void *);
extern char lbl_80413FE0[];
}
extern "C" {
void *fn_800A5D7C(int p0){
 void *value0=fn_800AAB08((reinterpret_cast<char *>((void *)p0)+16),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 MWTRACE((void *)1,lbl_80413FE0,value0);
 return (void *)0;
}
}
#pragma pop
