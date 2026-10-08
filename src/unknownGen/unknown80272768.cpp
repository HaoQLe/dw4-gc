#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802727F4(void *,...);
void *fn_80278810(void *,void *,void *,void *);
extern char lbl_804C9A50[];
extern char lbl_804C9AC0[];
}
extern "C" {
void *fn_80272768(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 value0=fn_80278810(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1,(void *)p2,(void *)p3);
 if((int)(int)value0!=0){
  fn_802727F4(lbl_804C9AC0,(void *)p3,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804C9A50)+((int)value0<<2)));
 }
 return value0;
}
}
#pragma pop
