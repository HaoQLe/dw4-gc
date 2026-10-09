#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800593F4(void *);
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
class UnknownGenV8008887C_0 {
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
};
extern "C" {
void igProgramFile_virtual2C4(int p0){
 void *local0;
 fn_800593F4(&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=local0;
}
void igProgramFile_virtual288(int p0){
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116)){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+132)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+136)=1;
}
void *igProgramFile_virtual28C(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+132)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116);
 return (void *)p0;
}
void igProgramFile_virtual290(int p0){
 reinterpret_cast<UnknownGenV8008887C_0 *>((void *)p0)->s7C();
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+136)=0;
}
unsigned char igProgramFile_virtual294(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+136);}
void igProgramFile_virtual29C(int p0,int p1,int p2,int p3){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+136)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+124)=(void *)p3;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+120)=(void *)p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
}
#pragma pop
