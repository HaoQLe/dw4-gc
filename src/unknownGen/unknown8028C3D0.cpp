#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028C55C();
extern void *lbl_805660A0;
}
extern "C" {
void *igSearchSceneGraph_getMeta(){
 if(!lbl_805660A0 || !(reinterpret_cast<unsigned int *>(lbl_805660A0)[0x24/4]&4)) fn_8028C55C();
 return lbl_805660A0;
}
}
#pragma pop
