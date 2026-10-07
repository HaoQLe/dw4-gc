#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9860(void *,void *,void *);
void fn_800F9890(void *,void *,void *);
}
extern "C" {
void fn_800BE320(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BE328(int p0,int p1){
 fn_800F9860((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13));
}
void fn_800BE358(int p0,int p1){
 fn_800F9890((void *)p1,(reinterpret_cast<char *>((void *)p0)+12),(reinterpret_cast<char *>((void *)p0)+13));
}
void fn_800BE388(){}
void fn_800BE38C(){}
void fn_800BE390(){}
void fn_800BE394(){}
}
#pragma pop
