#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
extern void *lbl_80563734;
}
struct UnknownGenL80119CE0_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void fn_80119CE0(int p0,int p1){
 UnknownGenL80119CE0_8 local0;
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)!=(unsigned int)(unsigned char)p1){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=(unsigned char)(int)(void *)p1;
  local0.m08=(int)2;
  local0.m0C=(int)0;
  local0.m10=(int)(int)lbl_80563734;
  fn_8011BFA4((void *)p0,&local0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
