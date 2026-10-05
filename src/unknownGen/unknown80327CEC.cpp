#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80327F78();
extern void *lbl_80535D54;
}
extern "C" {
void *fn_80327CEC(void *object){
 fn_80327F78();
 return fn_8006546C(lbl_80535D54,object);
}
void *fn_80327D2C(){
 if(!lbl_80535D54 || !(reinterpret_cast<unsigned int *>(lbl_80535D54)[0x24/4]&4)) fn_80327F78();
 return lbl_80535D54;
}
}
#pragma pop
