#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80278F38(void *,void *);
}
extern "C" {
void fn_80279020(int p0,int p1){
 switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)){
 case 0:
 case 3:
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8))+16)!=0){
   break;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8))+16)=(void *)1;
  break;
 case 6:
  fn_80278F38((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8))+0));
  break;
 case 5:
  fn_80278F38((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8));
  break;
 case 4:
  if((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8))+20)!=(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8)){
   break;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8))+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
 }
}
}
#pragma pop
