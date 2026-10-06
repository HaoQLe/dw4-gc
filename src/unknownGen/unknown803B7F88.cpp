#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B8260(void *);
extern char lbl_804EEB68[];
}
extern "C" {
void *fn_803B7F88(int p0){
 fn_803B8260((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804EEB68;
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+30)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+33)=0;
 return (void *)p0;
}
}
#pragma pop
