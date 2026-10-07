#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803E5418(void *,void *);
void *fn_803E5438(void *,void *);
void *fn_803F2C5C(void *,int);
void *fn_803F4958(void *,int);
void fn_803F4968(void *,int,int);
void *fn_803F4978(void *,int);
void fn_803F4988(void *,int,int);
void *fn_803F4998(void *,int,int,void *,int);
}
extern "C" {
void *fn_803E4C84(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_803F2C5C((void *)p0,6);
 if((int)(int)value1==0){
  return (void *)0;
 } else {
  value2=fn_803F4998((void *)p0,3,8,(void *)p1,0);
  value0=(void *)0;
  if((int)(int)value2!=0){
   value0=value2;
  }
  return value0;
 }
}
void *fn_803E4CFC(int p0){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_803F2C5C((void *)p0,6);
 if((int)(int)value1==0){
  return (void *)0;
 } else {
  value2=fn_803F4998((void *)p0,3,7,(void *)0,0);
  value0=(void *)0;
  if((int)(int)value2!=0){
   value0=value2;
  }
  return value0;
 }
}
void *fn_803E4D68(int p0){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_803F2C5C((void *)p0,6);
 if((int)(int)value1==0){
  return (void *)0;
 } else {
  value2=fn_803F4998((void *)p0,3,6,(void *)0,0);
  value0=(void *)0;
  if((int)(int)value2!=0){
   value0=value2;
  }
  return value0;
 }
}
void *fn_803E4DD4(int p0){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_803F2C5C((void *)p0,6);
 if((int)(int)value1==0){
  return (void *)0;
 } else {
  value2=fn_803F4998((void *)p0,3,5,(void *)0,0);
  value0=(void *)0;
  if((int)(int)value2!=0){
   value0=value2;
  }
  return value0;
 }
}
int fn_803E4E40(){return 0;}
void *fn_803E4E48(int p0){
 void *value0;
 value0=fn_803F2C5C((void *)p0,6);
 if((int)(int)value0==0){
  return (void *)0;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8460)=(reinterpret_cast<char *>((void *)p0)+13428);
  return (void *)0;
 }
}
void *fn_803E4E94(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 value0=fn_803F2C5C((void *)p0,6);
 if((int)(int)value0==0){
  return (void *)0;
 } else {
  value1=fn_803F4978((void *)p0,7);
  if((int)(int)value1!=1){
   value2=fn_803E5438((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8468));
   if((int)(int)value2==1){
    fn_803F4988((void *)p0,7,1);
   }
  }
  value3=fn_803F4958((void *)p0,7);
  if((int)(int)value3!=1){
   value4=fn_803E5418((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8468));
   if((int)(int)value4==1){
    fn_803F4968((void *)p0,7,1);
   }
  }
  return (void *)0;
 }
}
int fn_803E4F48(){return 0;}
int fn_803E4F50(){return 0;}
void *fn_803E4F58(int p0,int p1){
 void *value1;
 void *value0;
 void *value2;
 value1=fn_803F2C5C((void *)p0,6);
 if((int)(int)value1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8460);
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20)){
   value2=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20))((void *)p0,(void *)p1);
   return value2;
  } else {
   return value0;
  }
 }
 return value1;
}
}
#pragma pop
