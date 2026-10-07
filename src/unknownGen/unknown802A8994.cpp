#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029A440(void *);
void *fn_8029A480(void *,void *);
void *fn_8029AF34(void *);
void fn_8029BD40(void *,void *);
void fn_8029BDDC(void *,void *,void *);
void *fn_802A8878(void *,void *,void *,void *,void *,int);
void *fn_802A9828(void *);
extern char lbl_80534348[];
void *fn_802A8994(int,int,int,int,int,int);
}
extern "C" {
void *fn_802A8994(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 value0=fn_802A8878((void *)p0,(void *)p2,(void *)p3,(void *)p4,(void *)p5,1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value0;
 value1=fn_802A9828((void *)p1);
 if((int)(int)value1!=-1){
  fn_8029BDDC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>((lbl_80534348+0)))+16))+((int)value1<<2)))+16),(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>((lbl_80534348+0)))+16))+((int)value1<<2)))+18));
 } else {
  fn_8029BD40(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)p1);
 }
 return (void *)1;
}
void *fn_802A8A30(int p0,int p1){
 void *value0;
 void *value1;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)){
  value0=fn_802A9828((void *)p1);
  if((int)(int)value0!=-1){
   fn_8029BDDC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>((lbl_80534348+0)))+16))+((int)value0<<2)))+16),(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>((lbl_80534348+0)))+16))+((int)value0<<2)))+18));
  } else {
   fn_8029BD40(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)p1);
  }
  return (void *)1;
 } else {
  value1=fn_802A8994((int)(int)((void *)p0),(int)(int)((void *)p1),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)));
  return value1;
 }
}
void *fn_802A8AD4(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
 if(value0){
  value1=fn_8029AF34(value0);
  return value1;
 } else {
  return value0;
 }
}
void *fn_802A8B00(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
 if(value0){
  value1=fn_8029A480(value0,(void *)p1);
  return value1;
 } else {
  return value0;
 }
}
void *fn_802A8B2C(int p0){
 void *value0;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)){
  return (void *)-1;
 } else {
  value0=fn_8029A440(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
  return value0;
 }
}
}
#pragma pop
