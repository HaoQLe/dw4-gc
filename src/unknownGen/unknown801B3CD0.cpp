#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B3EC0();
extern void *lbl_805621F4;
extern void *lbl_80564A10;
}
extern "C" {
void *fn_801B3CD0(){
 if(!lbl_80564A10) lbl_80564A10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A10;
}
void *fn_801B3D0C(){
 if(!lbl_80564A10 || !(reinterpret_cast<unsigned int *>(lbl_80564A10)[0x24/4]&4)) fn_801B3EC0();
 return lbl_80564A10;
}
}
#pragma pop
