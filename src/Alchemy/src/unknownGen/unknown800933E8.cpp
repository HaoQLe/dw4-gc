#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068390(void *,void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
extern void *lbl_80562070;
extern void *lbl_80562074;
extern void *lbl_8056209C;
extern void *lbl_805620A0;
}
class UnknownGenV80093458_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C();
 virtual void * s80(void *,void *,void *);
};
extern "C" {
int fn_800933E8(){return 1;}
void *fn_800933F0(){return lbl_80562070;}
void *fn_800933F8(){return lbl_80562074;}
int fn_80093400(){return 32;}
int fn_80093408(){return 32;}
void fn_80093410(int p0){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+45)){
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
   fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
   return;
  } else {
   return;
  }
 }
}
int fn_80093448(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+40);}
int fn_80093450(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+28);}
void fn_80093458(int p0,int p1,int p2,int p3){
 void *value0;
 value0=reinterpret_cast<UnknownGenV80093458_0 *>((void *)p1)->s80((void *)p1,(void *)p2,(void *)p3);
 if(!(unsigned char)(int)value0){
  if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+45)){
   if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32)){
    fn_80068390((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+32)=(void *)p2;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+45)=1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)p3;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 }
}
int fn_800934F4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32);}
int fn_800934FC(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+36);}
void *fn_80093504(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 return (void *)p0;
}
void *fn_80093510(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 return (void *)p0;
}
void *fn_8009351C(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
 return (void *)p0;
}
void *fn_80093528(){return lbl_8056209C;}
void *fn_80093530(){return lbl_805620A0;}
unsigned char fn_80093538(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+20);}
}
#pragma pop
