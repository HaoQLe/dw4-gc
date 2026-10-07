#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027C000(void *,...);
extern char lbl_804CAB94[];
extern char lbl_804CABAC[];
}
extern "C" {
void fn_80281814(int p0,int p1){
 if((int)p1>=0){
  if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76)){
   return;
  }
 }
 fn_8027C000((void *)p0,lbl_804CAB94,(void *)p1);
}
void fn_8028185C(int p0,int p1){
 if((int)p1>=6){
  if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76)){
   return;
  }
 }
 fn_8027C000((void *)p0,lbl_804CABAC,(void *)p1);
}
}
#pragma pop
