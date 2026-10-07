#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8003F620();
void fn_80041660(void *,void *,int);
extern void *lbl_8055DC74;
}
extern "C" {
int fn_80076118(){return 4;}
void *fn_80076120(int p0){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((int)(int)value0<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(reinterpret_cast<char *>(value0)+1);
 } else {
  fn_80041660((void *)p0,(reinterpret_cast<char *>(value0)+1),4);
 }
 *reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+((int)value0<<2))=(int)(int)lbl_8055DC74;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
}
void *fn_8007618C(){return fn_8003F620();}
}
#pragma pop
