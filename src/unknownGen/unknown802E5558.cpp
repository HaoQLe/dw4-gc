#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E5714();
extern void *lbl_80535764;
}
extern "C" {
void *fn_802E5558(){
 if(!lbl_80535764 || !(reinterpret_cast<unsigned int *>(lbl_80535764)[0x24/4]&4)) fn_802E5714();
 return lbl_80535764;
}
}
#pragma pop
