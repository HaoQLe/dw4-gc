#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80535124;
extern void *lbl_80535358;
}
extern "C" {
int fn_80360D7C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16);}
void *fn_80360D84(){return lbl_80535124;}
void fn_80360D94(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+60)=value;}
int fn_80360D9C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48);}
void *fn_80360DA4(){return lbl_80535358;}
void *fn_80360DB4(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)p1;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  return (void *)p0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4))+1);
 return (void *)p0;
}
int fn_80360DD4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
int fn_80360DDC(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32);}
int fn_80360DE4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20);}
void fn_80360DEC(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
}
#pragma pop
