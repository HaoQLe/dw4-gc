#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006CC88(void *,void *);
void *fn_8006CCE0();
extern char lbl_804762FC[];
}
extern "C" {
void *fn_8006ACF4(int p0,int p1){
 fn_8006CC88((void *)p0,(void *)p1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804762FC;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+60);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+56);
 return (void *)p0;
}
void *fn_8006AD54(){return fn_8006CCE0();}
}
#pragma pop
