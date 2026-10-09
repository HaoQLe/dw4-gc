#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80072EC4(void *,void *,void *);
void fn_80077768(int,int);
void *strlen(void *,void *);
}
extern "C" {
void *fn_801DC3B4(int p0,int p1){
 void *value0;
 void *value1;
 if(((int)p1==0||(value0=strlen((void *)p1,(void *)p1),!value0))){
  return (void *)0;
 } else {
  value1=fn_80072EC4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+260),(void *)p1,(void *)fn_80077768);
  if((int)(int)value1<0){
   return (void *)0;
  } else {
   return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+264))+16))+((int)value1<<2)))+16))+(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+264))+16))+((int)value1<<2)))+8)+-1)<<2));
  }
 }
}
}
#pragma pop
