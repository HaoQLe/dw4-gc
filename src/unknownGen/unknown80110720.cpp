#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8011098C();
extern void *lbl_805636BC;
}
extern "C" {
void *fn_80110720(void *object){
 fn_8011098C();
 return fn_8006546C(lbl_805636BC,object);
}
void *igMousePosObserver_getMeta(){
 if(!lbl_805636BC || !(reinterpret_cast<unsigned int *>(lbl_805636BC)[0x24/4]&4)) fn_8011098C();
 return lbl_805636BC;
}
}
#pragma pop
