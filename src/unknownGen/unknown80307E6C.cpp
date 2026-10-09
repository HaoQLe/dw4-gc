#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beMeterCtrlNode_getMeta();
void fn_8020B1A4(void *,void *,void *);
void fn_803079A8(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_80307E6C(){
 void *value0=beMeterCtrlNode_getMeta();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_803079A8);
}
}
#pragma pop
