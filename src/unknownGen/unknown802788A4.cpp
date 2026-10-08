#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80273450(void *,void *,void *);
void fn_80278088(void *,int);
void fn_80278448(void *,void *,int);
void *fn_80281554(void *,void *);
extern char lbl_804CA300[];
}
extern "C" {
void fn_802788A4(int p0,int p1){
 void *value4;
 void *value0;
 double value1;
 void *value2;
 void *value3;
 value4=fn_80281554((void *)p0,lbl_804CA300);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+0)==5){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+0);
  value1=*reinterpret_cast<double *>(reinterpret_cast<char *>(value4)+8);
  *reinterpret_cast<double *>(reinterpret_cast<char *>(value0)+8)=value1;
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  if((unsigned int)(int)value2==(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
   fn_80278088((void *)p0,1);
  }
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(reinterpret_cast<char *>(value3)+16);
  fn_80273450((void *)p0,(void *)p1,value3);
  fn_80278448((void *)p0,(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+-32),0);
  return;
 } else {
  return;
 }
}
}
#pragma pop
