#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010F440();
extern void *lbl_805621F4;
extern void *lbl_80563650;
}
extern "C" {
void *fn_8010F334(){
 if(!lbl_80563650) lbl_80563650=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563650;
}
void *fn_8010F370(){
 if(!lbl_80563650 || !(reinterpret_cast<unsigned int *>(lbl_80563650)[0x24/4]&4)) fn_8010F440();
 return lbl_80563650;
}
}
#pragma pop
