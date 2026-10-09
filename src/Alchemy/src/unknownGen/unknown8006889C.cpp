#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80561710;
}
extern "C" {
void *igObjectDirEntry_virtual58(){return lbl_80561710;}
void *igObjectDirEntry_virtual6C(int p0,int p1){
 void *value0;
 if((unsigned int)p1==0){
  return (void *)p0;
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 return value0;
}
}
#pragma pop
