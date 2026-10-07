#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A3F2C(void *,void *,void *,void *);
void fn_803C5FA0(void *,int,int);
void fn_803FA74C(void *);
extern char lbl_804608D8[];
extern char lbl_804608E0[];
}
struct UnknownGenL803FA8D8_10 {
 int m10;
 int m14;
};
struct UnknownGenL803FA8D8_8 {
 int m08;
 int m0C;
};
extern "C" {
void fn_803FA8D8(int p0){
 void *value0;
 void *value1;
 void *value2;
 UnknownGenL803FA8D8_10 local1;
 UnknownGenL803FA8D8_8 local0;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+400)){
  fn_803FA74C((void *)p0);
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+428);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172);
  if(!value0){
   fn_803C5FA0(value1,0,0);
  } else {
   local0.m08=(int)(int)value0;
   local0.m0C=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+432);
   value2=fn_802A3F2C(&local0,lbl_804608D8,lbl_804608E0,&local1);
   if(!value2){
    fn_803C5FA0(value1,0,0);
    return;
   } else {
    fn_803C5FA0(value1,(int)(int)((void *)(int)local1.m10),(int)(int)((void *)(int)local1.m14));
    return;
   }
  }
  return;
 } else {
  return;
 }
}
void *fn_803FA990(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+400);
 if(value0){
  value1=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0))+20))(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0));
  return value1;
 } else {
  return value0;
 }
}
void *fn_803FA9C8(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+424)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+428)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+432)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+420)=(void *)-1;
 return (void *)p0;
}
}
#pragma pop
