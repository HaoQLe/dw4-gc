#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011B6F4(void *,void *,int,void *);
}
extern "C" {
int fn_8011B698(){return 0;}
void fn_8011B6A0(int p0,int p1,int p2){
 fn_8011B6F4((void *)p0,(void *)p1,32,(void *)p2);
}
void fn_8011B6C8(int p0,int p1,int p2){
 fn_8011B6F4((void *)p0,(void *)0,(int)(int)((void *)p1),(void *)p2);
}
}
#pragma pop
