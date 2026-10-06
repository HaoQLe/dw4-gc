#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004C430(void *,void *);
void fn_8004C924(void *);
extern char lbl_80413774[];
}
extern "C" {
void fn_800D94B8(int p0){
 fn_8004C924((void *)p0);
 fn_8004C430((void *)p0,lbl_80413774);
}
int fn_800D94F4(){return 0;}
}
#pragma pop
