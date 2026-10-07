#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800593F4(void *);
extern void *kSuccess__3Gap;
}
extern "C" {
void *fn_8003C218(int p0,int p1,int p2){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+176)=(short)(int)(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
unsigned short fn_8003C228(void *object){return *reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(object)+176);}
void *fn_8003C230(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+172)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
 return (void *)p0;
}
int fn_8003C240(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+172);}
void fn_8003C248(int p0){
 void *local0;
 fn_800593F4(&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=local0;
}
}
#pragma pop
