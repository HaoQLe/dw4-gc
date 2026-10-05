#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8011457C();
extern void *lbl_805621F4;
extern void *lbl_8056381C;
}
extern "C" {
void *fn_80114424(){
 if(!lbl_8056381C) lbl_8056381C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056381C;
}
void *fn_80114460(){
 if(!lbl_8056381C || !(reinterpret_cast<unsigned int *>(lbl_8056381C)[0x24/4]&4)) fn_8011457C();
 return lbl_8056381C;
}
}
#pragma pop
