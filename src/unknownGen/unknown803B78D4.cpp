#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void fn_803B7F88(void *);
void fn_803B7FD8(void *,int);
void fn_803B8260(void *);
void fn_803B82B8(void *,int);
}
extern "C" {
void *fn_803B78D4(int p0){
 fn_803B7F88((void *)p0);
 fn_803B7F88((reinterpret_cast<char *>((void *)p0)+36));
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+72));
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+100));
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+128));
 return (void *)p0;
}
void *fn_803B7924(int p0,int p1){
 if((int)p0!=0){
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+128),-1);
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+100),-1);
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+72),-1);
  fn_803B7FD8((reinterpret_cast<char *>((void *)p0)+36),-1);
  fn_803B7FD8((void *)p0,-1);
  if((int)(short)p1>0){
   fn_800A325C((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
