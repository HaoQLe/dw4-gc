#include <unknownGen.h>
#include <meta/beBaseInfoList.h>
#include <meta/beNDMWStatus.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305308(void *,void *,void *);
extern char lbl_80457570[];
}
extern "C" {
void beNDMWStatus_virtual7C(int p0,int p1){
 if((int)(int)(void *)reinterpret_cast<Meta::beBaseInfoList *>(reinterpret_cast<Meta::beNDMWStatus *>((void *)p0)->_infoList)->_count==1){
  fn_80305308(reinterpret_cast<Meta::beNDMWStatus *>((void *)p0)->_messenger,(void *)p1,lbl_80457570);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)=0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
