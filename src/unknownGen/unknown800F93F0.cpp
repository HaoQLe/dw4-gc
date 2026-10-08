#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void GXSetCullMode(void *);
extern char lbl_8055EE98[8];
}
extern "C" {
void fn_800F93F0(int p0){
 void *value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)&0xFFFFFFDF);
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1200)){
  value0=(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_8055EE98)+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1204)<<2));
 } else {
  value0=(void *)0;
 }
 GXSetCullMode(value0);
}
}
#pragma pop
