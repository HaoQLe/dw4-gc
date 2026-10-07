#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80360BC0(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+15)=value;}
unsigned char fn_80360BC8(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+16);}
void fn_80360BD0(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32)=value;}
int fn_80360BD8(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16);}
void *fn_80360BE0(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40))+1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)0;
 return (void *)p0;
}
int fn_80360BFC(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8);}
int fn_80360C04(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8);}
}
#pragma pop
