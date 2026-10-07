#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803E5418(void *,void *);
void *fn_803E5438(void *,void *);
void *fn_803F4958(void *,int);
void fn_803F4968(void *,int,int);
void *fn_803F4978(void *,int);
void fn_803F4988(void *,int,int);
}
extern "C" {
void *fn_803F5170(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=fn_803F4958((void *)p0,8);
 if((int)(int)value0!=1){
  value1=fn_803E5418((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8536));
  if((int)(int)value1==1){
   fn_803F4968((void *)p0,8,1);
  }
 }
 value2=fn_803F4978((void *)p0,8);
 if((int)(int)value2!=1){
  value3=fn_803E5438((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8536));
  if((int)(int)value3==1){
   fn_803F4988((void *)p0,8,1);
  }
 }
 return (void *)0;
}
int fn_803F5208(){return 0;}
int fn_803F5210(){return 0;}
}
#pragma pop
