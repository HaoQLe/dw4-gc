#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLoadingNode_getMeta();
void fn_8020B1A4(void *,void *,void *);
void fn_80311634(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_803116A4(){
 void *value0=beLoadingNode_getMeta();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_80311634);
}
}
#pragma pop
