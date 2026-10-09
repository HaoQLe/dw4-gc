#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800692E0(void *,void *,void *,int);
extern void *lbl_80515CA0;
}
class UnknownGenV8028B750_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C(void *,void *);
};
class UnknownGenV8028B780_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
 virtual void s70(void *);
};
extern "C" {
void igFilterMessageDispatcher_virtual6C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *local2;
 void *local1;
 void *local0;
 fn_800692E0(&local2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+12),(void *)p1,0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+12);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)==0){
  fn_800692E0(&local1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p2,0);
  fn_800692E0(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p2,0);
  return;
 } else {
  return;
 }
}
void *igFilterMessageDispatcher_virtual58(){return lbl_80515CA0;}
void fn_8028B750(int p0,int p1,int p2){
 reinterpret_cast<UnknownGenV8028B750_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))->s5C((void *)p1,(void *)p2);
}
void fn_8028B780(int p0,int p1){
 reinterpret_cast<UnknownGenV8028B780_1 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))->s70((void *)p1);
}
}
#pragma pop
