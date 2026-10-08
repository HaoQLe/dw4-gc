#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80087010(void *);
}
extern "C" {
void fn_800870D4(int p0,int p1){
 while((int)(int)((void *)p1)>0){
  fn_80087010(((void *)p0));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+4));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+8));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+12));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+16));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+20));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+24));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+28));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+32));
  fn_80087010((reinterpret_cast<char *>(((void *)p0))+36));
  p0=(int)(reinterpret_cast<char *>(((void *)p0))+40);
  p1=(int)(reinterpret_cast<char *>(((void *)p1))+-1);
 }
}
}
#pragma pop
