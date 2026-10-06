#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
void fn_8011D0D4(void *,void *);
}
extern "C" {
void fn_8011C3A0(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+12)=(void *)p0;
 fn_8011D0D4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
}
#pragma pop
