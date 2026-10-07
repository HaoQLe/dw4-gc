#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
int fn_803C5F60(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+56);}
void fn_803C5F68(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+56)=value;}
void fn_803C5F70(int p0,int p1,int p2){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)!=1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)0;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
}
}
#pragma pop
