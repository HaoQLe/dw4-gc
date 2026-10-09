#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8040C3A4(void *,void *,void *);
extern void *lbl_8055C880;
}
extern "C" {
void fn_8040C54C(int p0,int p1,int p2){
 if((unsigned char)p2){
  fn_8040C3A4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48),(void *)p1);
  return;
 } else {
  fn_8040C3A4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)p1);
  return;
 }
}
void *igViewerRenderer_virtual58(){return lbl_8055C880;}
void igViewerRenderer_virtual60(){}
}
#pragma pop
