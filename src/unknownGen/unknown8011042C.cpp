#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801105AC();
extern void *lbl_805636AC;
}
extern "C" {
void *fn_8011042C(void *object){
 fn_801105AC();
 return fn_8006546C(lbl_805636AC,object);
}
void *fn_80110464(){
 if(!lbl_805636AC || !(reinterpret_cast<unsigned int *>(lbl_805636AC)[0x24/4]&4)) fn_801105AC();
 return lbl_805636AC;
}
}
#pragma pop
