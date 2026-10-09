#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065BDC(void *,void *);
void *fn_80065D60(void *);
extern char lbl_8041513C[];
}
extern "C" {
void *fn_80189C30(int p0){
 void *value0;
 void *value1;
 void *value2;
 if((int)p0==0){
  return (void *)1;
 } else {
  value0=(void *)0;
  do {
   value1=fn_80065D60((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_8041513C)+((int)value0<<2)));
   if(((int)(int)value1!=0&&(value2=fn_80065BDC((void *)p0,value1),(unsigned char)(int)value2))){
    return (void *)0;
   }
   value0=(reinterpret_cast<char *>(value0)+1);
  } while((int)(int)value0<5);
  return (void *)1;
 }
}
}
#pragma pop
