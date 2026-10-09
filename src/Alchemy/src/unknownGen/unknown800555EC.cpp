#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
class UnknownGenV800555EC_0 {
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
 virtual void s70();
 virtual void s74(void *,void *,void *,void *,void *);
};
class UnknownGenV800555EC_1 {
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
 virtual void * s6C(void *,void *,void *);
};
extern "C" {
void igMemoryDictionary_virtualFC(int p0,int p1,int p2,int p3,int p4){
 void *value0;
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+45)){
  reinterpret_cast<void (*)(void *,void *,void *,void *,void *)>((void *)p3)((void *)p4,(void *)-1,(void *)p2,(void *)p3,(void *)p4);
 }
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+44)==1){
  reinterpret_cast<UnknownGenV800555EC_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64))->s74(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),(void *)p1,(void *)p2,(void *)p3,(void *)p4);
 }
 value0=reinterpret_cast<UnknownGenV800555EC_1 *>((void *)p0)->s6C((void *)p1,(void *)1,(void *)p2);
 reinterpret_cast<void (*)(void *,void *)>((void *)p3)((void *)p4,value0);
}
}
#pragma pop
