#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80137620();
extern void *lbl_80563D30;
}
extern "C" {
void *fn_80137408(void *object){
 fn_80137620();
 return fn_8006546C(lbl_80563D30,object);
}
void *fn_80137440(){
 if(!lbl_80563D30 || !(reinterpret_cast<unsigned int *>(lbl_80563D30)[0x24/4]&4)) fn_80137620();
 return lbl_80563D30;
}
}
#pragma pop
