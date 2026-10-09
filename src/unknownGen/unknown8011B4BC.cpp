#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
extern void *lbl_8056370C;
}
struct UnknownGenL8011B4BC_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void *igGuiSystem_virtual88(int p0){
 UnknownGenL8011B4BC_8 local0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+180)=1;
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_8056370C;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),&local0);
 return (void *)1;
}
}
#pragma pop
