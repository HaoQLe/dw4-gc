#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9448(void *,void *);
void *fn_800F9490(void *,void *);
}
extern "C" {
void fn_800BE26C(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BE274(int p0,int p1){
 fn_800F9448((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
void fn_800BE2A0(int p0,int p1){
 fn_800F9490((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop
