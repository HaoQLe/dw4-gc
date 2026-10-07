#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
void fn_80303C0C(void *);
void *fn_803040C0();
}
extern "C" {
void fn_80304BB0(int p0){
 fn_8028A398(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
void fn_80304BD8(int p0){
 fn_8028A400(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p0);
}
void fn_80304C00(){}
void fn_80304C04(){}
void *fn_80304C08(int p0){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+48)){
  fn_80303C0C((void *)p0);
 }
 return (void *)0;
}
void *fn_80304C38(){return fn_803040C0();}
}
#pragma pop
