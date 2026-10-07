#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802ECA74(void *);
void fn_80305344(void *,void *,void *,void *);
void fn_80305A28(void *,void *);
extern char lbl_80535904[];
}
extern "C" {
void fn_802ECD20(int p0,int p1,int p2,int p3,int p4){
 fn_80305344(*reinterpret_cast<void **>((lbl_80535904+0)),(void *)p0,(void *)p1,(void *)p2);
 if((unsigned int)p4!=0){
  fn_802ECA74((void *)p4);
 }
 fn_80305A28(*reinterpret_cast<void **>((lbl_80535904+0)),(void *)p3);
}
}
#pragma pop
