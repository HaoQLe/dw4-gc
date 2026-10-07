#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A4E98();
void fn_802A4F28();
}
extern "C" {
void fn_80299B34(int p0,int p1,int p2,int p3,int p4){
 fn_802A4F28();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)(int)(p4<<11);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+80)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+84)=(void *)p2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+69)=1;
 fn_802A4E98();
}
}
#pragma pop
