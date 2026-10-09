#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8005647C(void *);
void fn_80056508(void *);
void fn_80062638(void *,void *,void *);
void fn_800626DC(void *,void *);
}
extern "C" {
void igMemoryRefArrayMetaField_virtual98(int p0,int p1,int p2){
 void *value2;
 void *value0;
 void *value1;
 void *value3;
 fn_800626DC((void *)p0,(void *)p1);
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+64)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0)){
   fn_80056508((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)value0));
  }
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+(int)value1)){
  value3=fn_8005647C((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p2)+(int)value1));
  value2=value3;
 } else {
  value2=(void *)0;
 }
 *reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))=(int)(int)value2;
 fn_80062638((void *)p0,(void *)p1,value2);
}
}
#pragma pop
