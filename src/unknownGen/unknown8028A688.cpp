#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041E40(void *,void *,int);
void fn_8011C658(void *,void *);
}
extern "C" {
void fn_8028A688(int p0,int p1){
 fn_8011C658((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
 fn_80041E40(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),(void *)p1,0);
}
}
#pragma pop
