#include <unknownGen.h>
#include <meta/beMessenger.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
}
extern "C" {
void beMessenger_virtual5C(int p0){
 fn_8028A398(reinterpret_cast<Meta::beMessenger *>((void *)p0)->_insight,(void *)p0);
}
void beMessenger_virtual60(int p0){
 fn_8028A400(reinterpret_cast<Meta::beMessenger *>((void *)p0)->_insight,(void *)p0);
}
}
#pragma pop
