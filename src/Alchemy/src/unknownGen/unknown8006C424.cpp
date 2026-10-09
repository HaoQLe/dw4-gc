#include <unknownGen.h>
#include <meta/igRawRefArrayMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8004388C(void *,void *,int,int);
void fn_8006C4B8(void *);
void *fn_8006CBF4(void *);
extern char lbl_80476630[];
}
extern "C" {
void *igRawRefArrayMetaField_virtualAC(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+38)==1){
  value0=fn_8004388C((void *)p2,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)(void *)reinterpret_cast<Meta::igRawRefArrayMetaField *>((void *)p0)->_offset),0,0);
  return value0;
 } else {
  return (void *)-1;
 }
}
void *fn_8006C46C(int p0){
 fn_8006CBF4((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476630;
 if((unsigned int)p0!=0){
  fn_8006C4B8((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
