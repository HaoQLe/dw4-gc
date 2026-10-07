#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
int fn_80360C1C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32);}
void *fn_80360C24(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44))+1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)0;
 return (void *)p0;
}
void fn_80360C3C(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+95)=value;}
int fn_80360C44(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32);}
unsigned char fn_80360C4C(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+64);}
int fn_80360C54(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+44);}
void fn_80360C5C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20)=value;}
unsigned char fn_80360C64(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+8);}
}
#pragma pop
