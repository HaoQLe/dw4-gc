#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8020B1A4(void *,void *,void *);
void *fn_802CCFEC();
void fn_803079A8(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_80307E6C(){
 void *value0=fn_802CCFEC();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_803079A8);
}
}
#pragma pop
