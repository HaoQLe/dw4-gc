#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80032D58();
void *fn_8006546C(void *,void *);
extern void *lbl_80561D00;
}
extern "C" {
void *fn_80032C4C(void *object){
 fn_80032D58();
 return fn_8006546C(lbl_80561D00,object);
}
void *fn_80032C84(){
 if(!lbl_80561D00 || !(reinterpret_cast<unsigned int *>(lbl_80561D00)[0x24/4]&4)) fn_80032D58();
 return lbl_80561D00;
}
}
#pragma pop
