#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053DA4(void *,void *,void *);
void *fn_80053E6C(void *,void *);
void fn_80063F14(void *);
void *fn_80065C34(void *,void *);
void *fn_80065CE0(void *);
}
extern "C" {
void fn_80065DE4(int p0,int p1){
 void *value0;
 void *value2;
 void *value3;
 void *value4;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)(int)((int)value0&0xFFFFFFFB);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+37)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)p0;
 fn_80063F14((void *)p1);
 value2=fn_80053E6C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),(void *)p1);
 value3=fn_80065CE0((void *)p0);
 value1=(void *)1;
 while((int)(int)value1<(int)(int)value3){
  value4=fn_80065C34((void *)p0,value1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+36)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+36)&0xFFFFFFFB);
  fn_80053DA4(*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+40),value2,(void *)p1);
  value1=(reinterpret_cast<char *>(value1)+1);
 }
}
}
#pragma pop
