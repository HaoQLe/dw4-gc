#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8028E204();
extern void *lbl_80566178;
}
extern "C" {
void *fn_8028E108(void *object){
 fn_8028E204();
 return fn_8006546C(lbl_80566178,object);
}
void *fn_8028E140(){
 if(!lbl_80566178 || !(reinterpret_cast<unsigned int *>(lbl_80566178)[0x24/4]&4)) fn_8028E204();
 return lbl_80566178;
}
}
#pragma pop
