#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8011162C();
extern void *lbl_805621F4;
extern void *lbl_80563718;
}
extern "C" {
void *fn_8011151C(){
 if(!lbl_80563718) lbl_80563718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563718;
}
void *fn_80111558(){
 if(!lbl_80563718 || !(reinterpret_cast<unsigned int *>(lbl_80563718)[0x24/4]&4)) fn_8011162C();
 return lbl_80563718;
}
}
#pragma pop
