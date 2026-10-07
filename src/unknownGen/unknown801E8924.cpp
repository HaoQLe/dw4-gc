#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128690(void *,void *,void *);
void *fn_801DBFA4();
}
extern "C" {
void *fn_801E8924(){return fn_801DBFA4();}
void fn_801E8944(int p0,int p1,int p2){
 fn_80128690((reinterpret_cast<char *>((void *)p0)+476),(void *)p1,(void *)p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+540)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+544)=(void *)p2;
}
}
#pragma pop
