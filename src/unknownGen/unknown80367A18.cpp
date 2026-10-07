#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305ED0(void *,void *,int,int,void *);
extern char lbl_80458920[];
extern char lbl_80458940[];
}
extern "C" {
void fn_80367A18(int p0){
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12)==1){
  fn_80305ED0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),lbl_80458920,0,-1,lbl_80458940);
  return;
 } else {
  return;
 }
}
}
#pragma pop
