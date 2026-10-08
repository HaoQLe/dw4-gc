#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8020B1A4(void *,void *,void *);
void *fn_802C0960();
void fn_80312BFC(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_80313004(){
 void *value0=fn_802C0960();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_80312BFC);
}
}
#pragma pop
