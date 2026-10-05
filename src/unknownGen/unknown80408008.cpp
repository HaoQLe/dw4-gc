#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80408110();
extern void *lbl_8055CA78;
}
extern "C" {
void *fn_80408008(){
 if(!lbl_8055CA78 || !(reinterpret_cast<unsigned int *>(lbl_8055CA78)[0x24/4]&4)) fn_80408110();
 return lbl_8055CA78;
}
}
#pragma pop
