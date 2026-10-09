#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlNode2_getMeta();
void fn_8020B1A4(void *,void *,void *);
void fn_8030FA00(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_8030FEB0(){
 void *value0=beModelCtrlNode2_getMeta();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_8030FA00);
}
}
#pragma pop
