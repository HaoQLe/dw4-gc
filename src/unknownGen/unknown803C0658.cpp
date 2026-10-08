#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C0428(void *,void *);
extern void *lbl_80566204;
}
extern "C" {
void fn_803C0658(int p0){
 void *value0;
 value0=(void *)0;
 while((unsigned int)(unsigned char)(int)value0<16){
  if((unsigned int)(*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80566204)+(((int)value0<<4)&0xFF0))+65536)!=65535){
   fn_803C0428((void *)p0,value0);
  }
  value0=(reinterpret_cast<char *>(value0)+1);
 }
}
}
#pragma pop
