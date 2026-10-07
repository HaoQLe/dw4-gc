#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80277EC8(void *,void *,void *);
void fn_8027C000(void *,...);
extern char lbl_804167C8[];
extern char lbl_804CA2A4[];
extern char lbl_804CA2C8[];
}
extern "C" {
void fn_80277F60(int p0,int p1,int p2,int p3){
 void *value0;
 value0=(void *)p1;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)==(int)p2){
  value0=(reinterpret_cast<char *>((void *)p1)+16);
 }
 fn_80277EC8((void *)p0,value0,(void *)p3);
}
void fn_80277F94(int p0,int p1){
 if((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+-32)<<2)))+2)==(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+-16)<<2)))+2)){
  fn_8027C000((void *)p0,lbl_804CA2A4,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+-32)<<2)),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+-16)<<2)));
  return;
 } else {
  fn_8027C000((void *)p0,lbl_804CA2C8,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+-32)<<2)),(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+-16)<<2)));
  return;
 }
}
}
#pragma pop
