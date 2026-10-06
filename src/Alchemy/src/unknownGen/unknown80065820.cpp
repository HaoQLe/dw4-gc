#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053E6C(void *,void *);
void fn_80063F14(void *,void *);
void fn_80065820(int,int);
}
extern "C" {
void fn_80065820(int p0,int p1){
 fn_80053E6C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),(void *)p1);
}
void fn_80065844(int p0,int p1){
 fn_80063F14((void *)p1,(void *)p1);
 fn_80065820((int)((void *)p0),(int)((void *)p1));
}
}
#pragma pop
