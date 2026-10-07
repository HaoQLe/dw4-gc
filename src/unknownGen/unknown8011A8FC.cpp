#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8011A8FC(int,int,int,int,int,int);
}
extern "C" {
void *fn_8011A8FC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 if((unsigned int)p1==0){
  return (void *)0;
 } else {
  if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16))+28)){
   value0=(void *)p1;
  } else {
   value1=fn_8011A8FC((int)(int)((void *)p0),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+24)),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16)),(int)(int)((void *)p3),(int)(int)((void *)p4),(int)(int)((void *)p5));
   value0=value1;
  }
  return value0;
 }
}
}
#pragma pop
