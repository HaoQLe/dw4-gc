#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B84C0(void *);
}
class UnknownGenV803B8358_0 {
public:
 virtual void s08(void *);
};
class UnknownGenV803B8358_1 {
public:
 virtual void s08(void *);
};
extern "C" {
void fn_803B8358(int p0){
 void *value2;
 void *value0;
 void *value1;
 value2=(void *)0;
 while((int)(int)value2<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
  if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(value0)+((int)value2<<2))){
   if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(value0)+((int)value2<<2))){
    reinterpret_cast<UnknownGenV803B8358_0 *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(value0)+((int)value2<<2)))->s08((void *)1);
   }
  }
  *reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4))+((int)value2<<2))=(int)0;
  value2=(reinterpret_cast<char *>(value2)+1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if(value1){
  if(value1){
   if(value1){
    reinterpret_cast<UnknownGenV803B8358_1 *>(value1)->s08((void *)1);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
 fn_803B84C0((void *)p0);
}
}
#pragma pop
