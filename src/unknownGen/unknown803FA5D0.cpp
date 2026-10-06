#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80299B94();
void fn_80299D90(int,int);
}
extern "C" {
void *fn_803FA5D0(){return fn_80299B94();}
void fn_803FA5F0(int p0){
 fn_80299D90(p0,0);
}
}
#pragma pop
