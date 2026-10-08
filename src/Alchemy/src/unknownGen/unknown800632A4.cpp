#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006CC40(void *);
extern char lbl_80476088[];
}
extern "C" {
void *fn_800632A4(int p0){
 fn_8006CC40((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476088;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+72)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+76)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+66)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+36)=3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+65)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+64)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+68)=(void *)-1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+39)=2;
 return (void *)p0;
}
}
#pragma pop
