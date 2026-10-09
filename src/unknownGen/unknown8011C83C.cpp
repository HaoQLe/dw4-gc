#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011C934(void *,int);
void fn_801EAF3C(void *,void *);
}
extern "C" {
void igTextElement_virtual270(int p0){
 fn_801EAF3C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40));
 fn_8011C934((void *)p0,0);
}
}
#pragma pop
