#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801BBFC0();
extern void *lbl_805621F4;
extern void *lbl_80564DBC;
}
extern "C" {
void *fn_801BBC90(){
 if(!lbl_80564DBC) lbl_80564DBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DBC;
}
void *fn_801BBCCC(){
 if(!lbl_80564DBC || !(reinterpret_cast<unsigned int *>(lbl_80564DBC)[0x24/4]&4)) fn_801BBFC0();
 return lbl_80564DBC;
}
}
#pragma pop
