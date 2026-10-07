#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void *fn_803B7F88(void *);
void *fn_803B7FD8(void *,int);
void *fn_803B8260(void *);
void *fn_803B82B8(void *,int);
void *fn_803B85CC(void *,int);
extern char lbl_804EEB5C[];
extern void *lbl_805661F0;
}
class UnknownGenV803B75BC_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10(void *);
};
extern "C" {
void *fn_803B75BC(int p0,int p1){
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804EEB5C;
  fn_803B85CC((void *)p0,0);
  if((int)(short)p1>0){
   reinterpret_cast<UnknownGenV803B75BC_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805661F0)+0))->s10((void *)p0);
  }
 }
 return (void *)p0;
}
void *fn_803B7630(int p0){
 fn_803B7F88((void *)p0);
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+36));
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+64));
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+92));
 return (void *)p0;
}
void *fn_803B7678(int p0,int p1){
 if((int)p0!=0){
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+92),-1);
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+64),-1);
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+36),-1);
  fn_803B7FD8((void *)p0,-1);
  if((int)(short)p1>0){
   fn_800A325C((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
