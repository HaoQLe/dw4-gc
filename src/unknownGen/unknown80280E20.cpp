#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80280CDC(void *,void *,void *);
void fn_80280D68(void *,double);
void fn_80280DCC(void *,void *);
}
extern "C" {
void fn_80280E20(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 double value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0);
 switch((int)(int)value0){
 case 2:
  value1=*reinterpret_cast<double *>(reinterpret_cast<char *>((void *)p2)+8);
  fn_80280D68((void *)p1,value1);
  return;
 case 3:
  fn_80280DCC((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+8));
  return;
 default:
  fn_80280CDC((void *)p0,(void *)p1,(void *)p2);
  return;
 }
}
}
#pragma pop
