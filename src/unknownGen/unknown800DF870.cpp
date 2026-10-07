#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void memmove(void *,void *,void *);
}
extern "C" {
void fn_800DF870(int p0,int p1,int p2,int p3,int p4,int p5){
 if((unsigned int)p0!=(unsigned int)p1){
  memmove((void *)p0,(void *)p1,(void *)p2);
  return;
 } else {
  return;
 }
}
void fn_800DF898(int p0,int p1,int p2,int p3,int p4,int p5){
 if((unsigned int)p0!=(unsigned int)p1){
  memmove((void *)p0,(void *)p1,(void *)p2);
  return;
 } else {
  return;
 }
}
}
#pragma pop
