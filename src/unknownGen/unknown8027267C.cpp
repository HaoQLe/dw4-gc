#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80272358(void *);
void fn_8027EAD8(void *);
extern void *lbl_80566070;
}
extern "C" {
void igLuaState_virtual28(int p0){
 fn_8027EAD8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 fn_80272358(lbl_80566070);
}
}
#pragma pop
