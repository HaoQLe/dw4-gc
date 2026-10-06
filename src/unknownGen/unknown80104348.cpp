#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800681C4(void *);
void fn_800FC1FC(void *,void *);
extern void *lbl_8056356C;
}
extern "C" {
void fn_80104348(int p0){
 fn_800FC1FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
}
void fn_80104374(){
 fn_800681C4(lbl_8056356C);
}
}
#pragma pop
