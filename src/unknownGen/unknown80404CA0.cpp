#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80404D84();
extern void *lbl_8055C83C;
}
extern "C" {
void *fn_80404CA0(){
 if(!lbl_8055C83C || !(reinterpret_cast<unsigned int *>(lbl_8055C83C)[0x24/4]&4)) fn_80404D84();
 return lbl_8055C83C;
}
}
#pragma pop
