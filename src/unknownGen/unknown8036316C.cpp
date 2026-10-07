#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
unsigned char fn_8036316C(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+34);}
int fn_80363174(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48);}
void *fn_8036317C(void *p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+32)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+33)=1;
 return p0;
}
void *fn_8036318C(int p0,int p1){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+33)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+31)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=(void *)0;
 return (void *)p0;
}
}
#pragma pop
