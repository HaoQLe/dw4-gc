#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80038478();
void *fn_8003BD20();
void *fn_800607F4(void *);
extern void *lbl_80561E34;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80038318(){return fn_8003BD20();}
void *fn_80038338(){
 if(!lbl_80561E34) lbl_80561E34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561E34;
}
void *fn_80038374(){
 if(!lbl_80561E34 || !(reinterpret_cast<unsigned int *>(lbl_80561E34)[0x24/4]&4)) fn_80038478();
 return lbl_80561E34;
}
}
#pragma pop
