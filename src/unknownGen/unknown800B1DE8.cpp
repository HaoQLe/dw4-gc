#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800B1EF8();
extern void *lbl_805621F4;
extern void *lbl_805626A0;
}
extern "C" {
void *fn_800B1DE8(void *object){
 fn_800B1EF8();
 return fn_8006546C(lbl_805626A0,object);
}
void *fn_800B1E20(){
 if(!lbl_805626A0) lbl_805626A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805626A0;
}
void *fn_800B1E5C(){
 if(!lbl_805626A0 || !(reinterpret_cast<unsigned int *>(lbl_805626A0)[0x24/4]&4)) fn_800B1EF8();
 return lbl_805626A0;
}
}
#pragma pop
