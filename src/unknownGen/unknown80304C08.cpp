#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80303C0C(void *);
void *fn_803040C0();
}
extern "C" {
void *beMessenger_virtual6C(int p0){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+48)){
  fn_80303C0C((void *)p0);
 }
 return (void *)0;
}
void *beMessenger_virtual70(){return fn_803040C0();}
}
#pragma pop
