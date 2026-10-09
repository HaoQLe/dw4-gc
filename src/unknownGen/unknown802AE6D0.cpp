#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_8029A440(void *);
void fn_8029A480(void *,int);
void *fn_803FEEA8(void *);
extern char lbl_805343EC[];
}
extern "C" {
void *igCriMovieCodec_virtual70(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value1;
 void *value0;
 void *value2;
 void *value3;
 void *value4;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+96);
 if((value0&&(value2=fn_80068128(value0,*reinterpret_cast<void **>((lbl_805343EC+0))),(unsigned char)(int)value2))){
  value1=value0;
 } else {
  value1=(void *)0;
 }
 if(value1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+76)=(void *)p2;
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+24)==2){
   value3=fn_8029A440(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+16));
   if((int)(int)value3==0){
    fn_8029A480(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+16),1);
   }
  } else {
   value4=fn_803FEEA8(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8));
   if((int)(int)value4==0){
    reinterpret_cast<void (*)(void *,void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8))+0))+40))(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8),(void *)1,*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8))+0));
   }
  }
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
