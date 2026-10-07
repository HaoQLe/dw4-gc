#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80561070[4];
}
extern "C" {
void *fn_802776EC(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+64))+20);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+60);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=lbl_80561070;
 return (void *)p0;
}
}
#pragma pop
