#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80405938();
extern void *lbl_8055C880;
}
extern "C" {
void *fn_80405408(){
 if(!lbl_8055C880 || !(reinterpret_cast<unsigned int *>(lbl_8055C880)[0x24/4]&4)) fn_80405938();
 return lbl_8055C880;
}
}
#pragma pop
