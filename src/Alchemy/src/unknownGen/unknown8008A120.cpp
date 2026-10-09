#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056548(void *,void *,void *,void *,void *,void *,void *);
}
extern "C" {
void igProgramFile_virtual1DC(int p0,int p1,int p2,int p3,int p4){
 fn_80056548((void *)p1,(void *)p2,(void *)p3,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124),(void *)p4);
}
int igProgramFile_virtual1F0(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+152);}
void igProgramFile_virtual1F4(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+152)=value;}
}
#pragma pop
