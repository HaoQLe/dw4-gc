#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80084C10(){}
int fn_80084C14(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+180);}
void fn_80084C1C(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+180)=(void *)p1;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+180)>=64){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+200)=(void *)24;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+200)=(void *)16;
}
}
#pragma pop
