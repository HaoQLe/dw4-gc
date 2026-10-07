#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C6060(void *,int);
void fn_803C7DB8(void *);
void fn_803C7DE4(void *);
void fn_803C7E10(void *,void *,void *);
void *fn_803F9470(void *);
}
extern "C" {
int fn_803FA668(){return 0;}
int fn_803FA670(){return 0;}
void fn_803FA678(){}
void fn_803FA67C(){}
void fn_803FA680(){}
void fn_803FA684(int p0){
 void *value0;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80)==0){
  value0=fn_803F9470((void *)p0);
  if((int)(int)value0!=-1){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+84)=value0;
  } else {
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+84)=(void *)17;
  }
 }
 fn_803C6060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+84)));
}
void fn_803FA6E0(int p0){
 fn_803C7DE4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172));
}
void fn_803FA704(int p0){
 fn_803C7DB8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172));
}
void fn_803FA728(int p0,int p1,int p2){
 fn_803C7E10(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(void *)p1,(void *)p2);
}
}
#pragma pop
