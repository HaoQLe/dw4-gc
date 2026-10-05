#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003A8D0();
void *fn_8006546C(void *,void *);
extern void *lbl_80562020;
}
extern "C" {
void *fn_8003A784(void *object){
 fn_8003A8D0();
 return fn_8006546C(lbl_80562020,object);
}
void *fn_8003A7BC(){
 if(!lbl_80562020 || !(reinterpret_cast<unsigned int *>(lbl_80562020)[0x24/4]&4)) fn_8003A8D0();
 return lbl_80562020;
}
}
#pragma pop
