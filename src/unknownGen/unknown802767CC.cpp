#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802766F8(void *,void *,void *,int,int);
void fn_80276884(void *,void *,void *);
}
extern "C" {
void fn_802767CC(int p0,int p1,int p2){
 if((int)p2==(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
  fn_80276884((void *)p0,(reinterpret_cast<char *>((void *)p0)+24),(void *)p1);
  return;
 } else {
  fn_802766F8((void *)p0,(void *)p1,(void *)p2,0,0);
  return;
 }
}
}
#pragma pop
