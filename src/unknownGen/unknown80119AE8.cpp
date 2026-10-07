#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
extern void *lbl_80563720;
extern void *lbl_80563724;
extern void *lbl_80563728;
extern void *lbl_8056372C;
}
struct UnknownGenL80119B10_8 {
 int m08;
 int m0C;
 int m10;
};
struct UnknownGenL80119B60_8 {
 int m08;
 int m0C;
 int m10;
};
struct UnknownGenL80119BB0_8 {
 int m08;
 int m0C;
 int m10;
};
struct UnknownGenL80119C00_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void fn_80119AE8(){}
void fn_80119AEC(){}
void fn_80119AF0(){}
void fn_80119AF4(){}
void fn_80119AF8(){}
void fn_80119AFC(){}
void fn_80119B00(){}
void fn_80119B04(){}
int fn_80119B08(){return 0;}
void fn_80119B10(int p0,int p1){
 UnknownGenL80119B10_8 local0;
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)!=(unsigned int)(unsigned char)p1){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=(unsigned char)(int)(void *)p1;
  local0.m08=(int)2;
  local0.m0C=(int)0;
  local0.m10=(int)(int)lbl_80563720;
  fn_8011BFA4((void *)p0,&local0);
  return;
 } else {
  return;
 }
}
void fn_80119B60(int p0,int p1){
 UnknownGenL80119B60_8 local0;
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13)!=(unsigned int)(unsigned char)p1){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13)=(unsigned char)(int)(void *)p1;
  local0.m08=(int)2;
  local0.m0C=(int)0;
  local0.m10=(int)(int)lbl_80563724;
  fn_8011BFA4((void *)p0,&local0);
  return;
 } else {
  return;
 }
}
void fn_80119BB0(int p0,int p1){
 UnknownGenL80119BB0_8 local0;
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+14)!=(unsigned int)(unsigned char)p1){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+14)=(unsigned char)(int)(void *)p1;
  local0.m08=(int)2;
  local0.m0C=(int)0;
  local0.m10=(int)(int)lbl_80563728;
  fn_8011BFA4((void *)p0,&local0);
  return;
 } else {
  return;
 }
}
void fn_80119C00(int p0,int p1){
 UnknownGenL80119C00_8 local0;
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+15)!=(unsigned int)(unsigned char)p1){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+15)=(unsigned char)(int)(void *)p1;
  local0.m08=(int)2;
  local0.m0C=(int)0;
  local0.m10=(int)(int)lbl_8056372C;
  fn_8011BFA4((void *)p0,&local0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
