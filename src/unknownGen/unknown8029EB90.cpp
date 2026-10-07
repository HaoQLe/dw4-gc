#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296810(void *);
void *fn_8029EBCC(void *,void *,void *);
extern char lbl_80419570[];
}
extern "C" {
void *fn_8029EB90(int p0,int p1,int p2){
 void *value0;
 if(((unsigned int)p2&0x1F)){
  fn_80296810(lbl_80419570);
  return (void *)-3;
 } else {
  value0=fn_8029EBCC((void *)p0,(void *)p1,(void *)p2);
  return value0;
 }
}
}
#pragma pop
