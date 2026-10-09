#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80128CF4(void *,void *);
void fn_8012A92C(void *,void *,void *);
}
extern "C" {
void igGamecubeVisualContext_virtual35C(int p0,int p1){
 void *value0;
 void *local0;
 value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+236);
 if(value0){
  fn_8012A92C(&local0,(reinterpret_cast<char *>((void *)p0)+172),(reinterpret_cast<char *>((void *)p0)+108));
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+236)=0;
 }
 fn_80128CF4((void *)p1,(reinterpret_cast<char *>((void *)p0)+172));
}
}
#pragma pop
