#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNodeAnim_getMeta();
void fn_8020B1A4(void *,void *,void *);
void fn_80311174(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_803115F8(){
 void *value0=beNodeAnim_getMeta();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_80311174);
}
}
#pragma pop
