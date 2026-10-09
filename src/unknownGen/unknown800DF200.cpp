#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800D8F70(void *);
void *fn_800DE934(void *);
void *fn_800DEC6C(void *);
void fn_800DEEF4(void *,void *,void *);
}
extern "C" {
void *fn_800DF200(int p0){
 void *value1;
 void *value2;
 void *value0;
 void *value3;
 void *value4;
 value1=fn_800DEC6C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
 if((!(unsigned char)(int)value1&&(value2=fn_800DE934(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)),!(unsigned char)(int)value2))){
  return (void *)1;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
  if(value0){
   fn_800DEEF4(value0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)*(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
  }
  value3=fn_800DE934(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
  if(((unsigned char)(int)value3&&*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68))){
   value4=fn_800D8F70(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68));
   return value4;
  } else {
   return (void *)1;
  }
 }
}
}
#pragma pop
