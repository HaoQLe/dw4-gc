#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80277434(void *,void *);
void *fn_802777D4(void *,void *);
void *fn_80277848(void *,void *);
extern char lbl_804CA184[];
extern char lbl_80561084[7];
extern char lbl_8056108C[4];
}
extern "C" {
void fn_802778DC(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *local0;
 fn_80277434(&local0,(void *)p1);
 value0=fn_80277848((void *)p0,&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+8)=value0;
 if(value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+12)=lbl_80561084;
 } else {
  value1=fn_802777D4((void *)p0,&local0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+8)=value1;
  if(value1){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+12)=lbl_804CA184;
  } else {
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+12)=lbl_8056108C;
  }
 }
}
}
#pragma pop
