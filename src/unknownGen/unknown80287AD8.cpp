#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80417864[];
void printf(void *,...);
}
extern "C" {
void fn_80287AD8(int p0,int p1,int p2){
 printf(lbl_80417864,(void *)p0,(void *)p1,(void *)p2);
}
}
#pragma pop
