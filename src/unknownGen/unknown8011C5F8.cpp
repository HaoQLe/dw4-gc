#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
extern void *lbl_8056362C;
}
struct UnknownGenL8011C5F8_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void fn_8011C5F8(int p0,int p1){
 UnknownGenL8011C5F8_8 local0;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+36)!=(unsigned int)(unsigned char)p1){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+36)=(unsigned char)(int)(void *)p1;
   local0.m08=(int)2;
   local0.m0C=(int)0;
   local0.m10=(int)(int)lbl_8056362C;
   fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),&local0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
