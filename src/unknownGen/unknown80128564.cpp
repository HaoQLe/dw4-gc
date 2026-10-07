#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801284E0(void *,void *);
}
extern "C" {
void *fn_80128564(int p0,int p1){
 if((unsigned int)p1!=(unsigned int)p0){
  fn_801284E0((void *)p0,(void *)p1);
 }
 return (void *)p0;
}
void fn_8012859C(){}
}
#pragma pop
