#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8029D6F0();
void *fn_8029D710();
void fn_803C385C(void *);
}
extern "C" {
void *fn_802A91BC(){return fn_8029D710();}
void fn_802A91DC(int p0){
 void *value0=fn_8029D6F0();
 fn_803C385C(value0);
}
}
#pragma pop
