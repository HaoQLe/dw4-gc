#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_804167B8[];
}
extern "C" {
void *fn_80280DCC(int p0,int p1){
 void *value0;
 value0=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)+(((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)&((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+-1))*40));
 do {
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0)==3){
   if((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)==(unsigned int)p1){
    return (reinterpret_cast<char *>(value0)+16);
   }
  }
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32);
 } while(value0);
 return lbl_804167B8;
}
}
#pragma pop
