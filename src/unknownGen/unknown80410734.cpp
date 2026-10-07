#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80068128(void *,void *);
void *fn_8011D0D4(void *,int);
extern void *lbl_8055CA64;
extern void *lbl_8055CA78;
}
extern "C" {
void fn_80410734(int p0){
 fn_8011D0D4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)));
}
void *fn_80410760(){return lbl_8055CA64;}
void fn_80410770(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_80068128((void *)p1,lbl_8055CA78);
}
}
#pragma pop
