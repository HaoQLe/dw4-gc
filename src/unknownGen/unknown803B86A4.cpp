#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_805661F0;
}
class UnknownGenV803B86A4_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void * s18(void *,void *);
};
class UnknownGenV803B86A4_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void * s18(void *,void *);
};
extern "C" {
void fn_803B86A4(int p0,int p1,int p2){
 void *value0;
 void *value1;
 if((unsigned int)p2==0){
  value0=reinterpret_cast<UnknownGenV803B86A4_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805661F0)+0))->s18((void *)p1,(void *)1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=value0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=1;
  return;
 } else {
  value1=reinterpret_cast<UnknownGenV803B86A4_1 *>((void *)p2)->s18((void *)p1,(void *)1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=value1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)=1;
  return;
 }
}
}
#pragma pop
