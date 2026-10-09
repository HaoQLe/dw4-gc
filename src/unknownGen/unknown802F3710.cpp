#include <unknownGen.h>
#include <meta/beCameraCtrl.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
void *fn_802F2B24(void *,void *);
void fn_802F2BC0(void *,void *);
void fn_802F3568(void *,void *);
}
extern "C" {
void beCameraCtrl_virtual84(int p0,int p1){
 void *value0;
 void *value1;
 value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+216);
 if(value0){
  fn_8028A400(reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_insight,(void *)p0);
  fn_8028A398(reinterpret_cast<Meta::beCameraCtrl *>((void *)p0)->_insight,(void *)p0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+216)=0;
 }
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)){
  value1=fn_802F2B24((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12));
  if((unsigned char)(int)value1){
   fn_802F2BC0((void *)p0,(void *)p1);
   return;
  } else {
   fn_802F3568((void *)p0,(void *)p1);
   return;
  }
 }
}
}
#pragma pop
