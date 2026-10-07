#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80298F94(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+68)=value;}
int fn_80298F9C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20);}
int fn_80298FA4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16);}
void *fn_80298FAC(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)p1;
 return (void *)1;
}
void *fn_80298FB8(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p2;
 return (void *)1;
}
}
#pragma pop
