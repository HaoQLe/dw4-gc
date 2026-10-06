#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
void fn_802F24B0(void *);
extern void *lbl_8055C788;
}
extern "C" {
void fn_803AAAF0(int p0){
 fn_802F24B0((void *)p0);
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_8055C788);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)=value0;
}
}
#pragma pop
