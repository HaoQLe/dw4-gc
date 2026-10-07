#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8031E8BC(void *,void *);
extern char lbl_8045C830[];
extern char lbl_804EDEAC[];
extern void *lbl_805361B8;
extern void *lbl_805361BC;
}
extern "C" {
void *fn_803B0620(int p0,int p1){
 void *value0;
 void *value1;
 fn_8031E8BC((void *)p1,lbl_8045C830);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+248);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)!=0){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)>0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+0)=*reinterpret_cast<void **>((lbl_804EDEAC+0));
   return value1;
  } else {
   return value0;
  }
 }
 return value0;
}
void *fn_803B0680(){return lbl_805361BC;}
void *fn_803B0690(){return lbl_805361B8;}
}
#pragma pop
