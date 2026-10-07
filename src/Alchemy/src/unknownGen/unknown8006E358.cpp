#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006E820(void *,void *,void *,int);
void fn_80071F9C(void *,void *);
void fn_80072334(void *,void *,int);
}
extern "C" {
void *fn_8006E358(int p0,int p1,int p2,int p3){
 void *value0;
 value0=fn_8006E820((void *)p0,(void *)p1,(void *)p2,1);
 if(!value0){
  return (void *)0;
 } else {
  fn_80071F9C(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12),(void *)p3);
  return (void *)1;
 }
}
void *fn_8006E3A8(int p0,int p1,int p2,int p3){
 void *value0;
 value0=fn_8006E820((void *)p0,(void *)p1,(void *)p2,1);
 if(!value0){
  return (void *)0;
 } else {
  fn_80072334(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12),(void *)p3,0);
  return (void *)1;
 }
}
}
#pragma pop
