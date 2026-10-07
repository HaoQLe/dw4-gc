#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802720BC(void *,void *);
extern char lbl_80566068[1];
extern void *lbl_8056606C;
extern void *lbl_80566070;
}
extern "C" {
void fn_80272558(int p0){
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566068+0))){
  fn_802720BC(lbl_80566070,(void *)p0);
  return;
 } else {
  lbl_8056606C=(void *)p0;
  return;
 }
}
}
#pragma pop
