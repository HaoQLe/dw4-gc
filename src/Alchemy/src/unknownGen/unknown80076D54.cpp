#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80076D54(int p0,int p1,int p2){
 switch((int)p2){
 case 0:
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=(void *)p1;
  if((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108)<=(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112)){
   break;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112);
  break;
 case 1:
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108)+p1);
  if((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108)<=(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112)){
   break;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112);
  break;
 case 2:
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112)-p1);
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108)>=0){
   break;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=(void *)0;
  break;
 default:
  return (void *)-1;
 }
 return (void *)0;
}
}
#pragma pop
