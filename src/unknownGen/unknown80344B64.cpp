#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80344D40();
extern void *lbl_80536824;
}
extern "C" {
void *fn_80344B64(void *object){
 fn_80344D40();
 return fn_8006546C(lbl_80536824,object);
}
void *fn_80344BA4(){
 if(!lbl_80536824 || !(reinterpret_cast<unsigned int *>(lbl_80536824)[0x24/4]&4)) fn_80344D40();
 return lbl_80536824;
}
}
#pragma pop
