#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276F5C(void *,int,int);
void fn_8027C2CC(void *,int);
void *fn_8027C338(void *,int);
void fn_8027C604(void *,void *,int);
void fn_8027C710(void *,void *,int);
void fn_8027D748(void *);
void fn_8027DD74(void *,int,int,int);
extern char lbl_80561218[8];
extern char lbl_80561220[7];
}
extern "C" {
void fn_8027DE3C(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 fn_8027C2CC((void *)p0,61);
 fn_8027D748((void *)p0);
 fn_8027C2CC((void *)p0,44);
 fn_8027D748((void *)p0);
 value1=fn_8027C338((void *)p0,44);
 if((int)(int)value1!=0){
  fn_8027D748((void *)p0);
 } else {
  fn_80276F5C(value0,6,1);
 }
 fn_8027C604((void *)p0,(void *)p1,0);
 fn_8027C710((void *)p0,lbl_80561218,1);
 fn_8027C710((void *)p0,lbl_80561220,2);
 fn_8027DD74((void *)p0,3,44,45);
}
}
#pragma pop
