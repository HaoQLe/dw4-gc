#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296810(void *);
extern char lbl_80418E8C[];
extern char lbl_80418EB8[];
extern char lbl_8051BAD8[];
extern char lbl_8051BADC[];
}
extern "C" {
void fn_8029A6BC(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+109)=value;}
void fn_8029A6C4(int p0,int p1,int p2,int p3,int p4,int p5){
 if((unsigned int)p0==0){
  fn_80296810(lbl_80418E8C);
  return;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)p1;
  *reinterpret_cast<void * *>((lbl_8051BADC+0))=(void *)p1;
  return;
 }
}
void *fn_8029A704(int p0){
 *reinterpret_cast<void * *>((lbl_8051BAD8+0))=(void *)p0;
 *reinterpret_cast<void * *>((lbl_8051BADC+0))=(void *)p0;
 return (void *)p0;
}
void *fn_8029A718(int p0){
 if((unsigned int)p0==0){
  fn_80296810(lbl_80418EB8);
  return (void *)0;
 } else {
  return (void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+64);
 }
}
}
#pragma pop
