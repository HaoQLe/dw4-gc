#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801FDCCC(void *,void *);
void fn_801FE2C0(void *,void *,void *);
void fn_80203D74(void *,void *,void *);
void fn_802062E0(void *,int,int);
void fn_802063E8(void *);
void fn_801FE3BC(void *,void *);
}
extern "C" {
void fn_801FE348(int p0,int p1){
 void *value0=fn_801FDCCC((void *)p0,(void *)p1);
 fn_802062E0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+68),0,0);
 fn_801FE2C0((void *)p0,(void *)p1,value0);
 fn_801FE3BC((void *)p0,(void *)p1);
 fn_802063E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+68));
}
void fn_801FE3BC(void *p0,void *p1){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+236)){
  fn_80203D74(*reinterpret_cast<void **>(reinterpret_cast<char *>(p1)+68),*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+228),*reinterpret_cast<void **>(reinterpret_cast<char *>(p1)+52));
  fn_80203D74(*reinterpret_cast<void **>(reinterpret_cast<char *>(p1)+68),*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+232),*reinterpret_cast<void **>(reinterpret_cast<char *>(p1)+52));
  return;
 } else {
  return;
 }
}
}
#pragma pop
