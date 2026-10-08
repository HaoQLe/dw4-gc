#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053910(void *,void *,void *);
extern void *lbl_805617C4;
}
extern "C" {
void fn_800658F8(int p0,int p1){
 fn_80053910(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),lbl_805617C4,(void *)p1);
}
}
#pragma pop
