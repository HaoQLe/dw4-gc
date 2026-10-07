#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_804167C8[];
extern char lbl_804C9B58[];
}
extern "C" {
void *fn_80272F38(int p0,int p1){
 if((int)p1==-1){
  return lbl_804C9B58;
 }
 return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+(p1<<2));
}
}
#pragma pop
