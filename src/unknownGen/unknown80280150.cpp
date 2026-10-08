#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802733E8(void *,void *,void *);
void fn_8027401C(void *,void *,void *);
void fn_8027894C(void *,void *);
extern char lbl_804CA900[];
extern char lbl_804CA914[];
}
extern "C" {
void *fn_80280150(int p0,int p1){
 void *value1;
 void *value0;
 fn_8027401C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4),lbl_804CA900);
 value1=(void *)0;
 while((int)(int)value1<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p1+((int)value1<<3)))+12);
  if((int)(int)value0==-1){
   fn_8027894C((void *)p0,lbl_804CA914);
  }
  fn_802733E8((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p1+((int)value1<<3)))+8),value0);
  value1=(reinterpret_cast<char *>(value1)+1);
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
}
}
#pragma pop
