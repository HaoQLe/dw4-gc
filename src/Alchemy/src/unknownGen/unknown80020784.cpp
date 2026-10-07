#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void igReleaseAlchemy__3GapFv();
}
extern "C" {
void *dtor_80020784(int p0,int p1){
 if((int)p0!=0){
  igReleaseAlchemy__3GapFv();
  if((int)(short)p1>0){
   fn_800A325C((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
