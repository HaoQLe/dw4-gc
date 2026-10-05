#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802194A4();
extern void *lbl_80565B08;
}
extern "C" {
void *fn_802192C0(void *object){
 fn_802194A4();
 return fn_8006546C(lbl_80565B08,object);
}
void *fn_802192F8(){
 if(!lbl_80565B08 || !(reinterpret_cast<unsigned int *>(lbl_80565B08)[0x24/4]&4)) fn_802194A4();
 return lbl_80565B08;
}
}
#pragma pop
