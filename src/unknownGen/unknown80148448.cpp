#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80148590();
extern void *lbl_80564250;
}
extern "C" {
void *fn_80148448(){
 if(!lbl_80564250 || !(reinterpret_cast<unsigned int *>(lbl_80564250)[0x24/4]&4)) fn_80148590();
 return lbl_80564250;
}
}
#pragma pop
