#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLOA_getMeta();
void fn_8020B1A4(void *,void *,void *);
void fn_80301BE0(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_80301F68(){
 void *value0=beLOA_getMeta();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_80301BE0);
}
}
#pragma pop
