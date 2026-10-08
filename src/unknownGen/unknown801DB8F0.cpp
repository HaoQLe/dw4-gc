#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128CF4(void *,void *);
void fn_8012A92C(void *,void *,void *);
}
extern "C" {
void fn_801DB8F0(int p0,int p1){
 void *local0;
 fn_80128CF4((reinterpret_cast<char *>((void *)p0)+100),(void *)p1);
 fn_8012A92C(&local0,(reinterpret_cast<char *>((void *)p0)+164),(void *)p1);
}
}
#pragma pop
