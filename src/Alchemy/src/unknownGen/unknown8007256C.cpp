#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80071F9C(void *,void *);
extern void *lbl_8055DC4C;
}
extern "C" {
void fn_8007256C(int p0){
 void *value0;
 void *value1;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  value1=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  while((unsigned int)(value1=(reinterpret_cast<char *>(value1)+-1))>(unsigned int)(int)value0){
   if(((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>(value1)+0)==92||(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>(value1)+0)==47)){
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+0)=0;
    fn_80071F9C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
    break;
   }
  }
  if((unsigned int)(int)value1==(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
   fn_80071F9C((void *)p0,lbl_8055DC4C);
  }
 }
}
}
#pragma pop
