#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803B8260(void *);
void *fn_803B82B8(void *,int);
extern char lbl_804EEB68[];
extern void *lbl_805661F0;
}
class UnknownGenV803B7FD8_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10(void *);
};
extern "C" {
void *fn_803B7F88(void *p0){
 fn_803B8260(p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_804EEB68;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+28)=0;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+30)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+32)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+33)=0;
 return p0;
}
void *fn_803B7FD8(void *p0,int p1){
 if((int)(int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_804EEB68;
  fn_803B82B8(p0,0);
  if((int)(short)p1>0){
   reinterpret_cast<UnknownGenV803B7FD8_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805661F0)+0))->s10(p0);
  }
 }
 return p0;
}
}
#pragma pop
