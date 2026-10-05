#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802DC150();
extern void *lbl_8053543C;
}
extern "C" {
void *fn_802DBFFC(void *object){
 fn_802DC150();
 return fn_8006546C(lbl_8053543C,object);
}
}
#pragma pop
