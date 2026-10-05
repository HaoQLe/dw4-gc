#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8002BF70();
void *fn_800607F4(void *);
void fn_80066188(int);
extern void *lbl_805618B4;
extern void *lbl_805621F4;
void fn_8002BF48();
}
extern "C" {
void *fn_8002BED0(){
 if(!lbl_805618B4) lbl_805618B4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805618B4;
}
void *fn_8002BF0C(){
 if(!lbl_805618B4 || !(reinterpret_cast<unsigned int *>(lbl_805618B4)[0x24/4]&4)) fn_8002BF48();
 return lbl_805618B4;
}
void fn_8002BF48(){
 fn_80066188((int)fn_8002BF70);
}
}
#pragma pop
