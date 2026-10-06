#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80063C74(void *);
void fn_800667E4();
}
extern "C" {
void fn_80064C14(int p0){
 fn_800667E4();
 fn_80063C74((void *)p0);
}
int fn_80064C48(){return 0;}
}
#pragma pop
