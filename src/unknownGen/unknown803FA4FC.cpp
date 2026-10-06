#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80299728(void *);
void *fn_80299820();
void *fn_802998E0();
void fn_80299A30(void *);
}
extern "C" {
void *fn_803FA4FC(){return fn_802998E0();}
void fn_803FA51C(int p0){
 fn_80299728((void *)p0);
 fn_80299A30((void *)p0);
}
void *fn_803FA550(){return fn_80299820();}
}
#pragma pop
