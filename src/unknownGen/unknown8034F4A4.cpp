#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305308(void *,void *,void *);
extern char lbl_80457570[];
extern void *lbl_80535DBC;
}
extern "C" {
void *fn_8034F4A4(){return lbl_80535DBC;}
void fn_8034F4B4(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+8)==1){
  fn_80305308(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80457570);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
