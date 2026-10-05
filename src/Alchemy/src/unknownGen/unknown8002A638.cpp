#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8002A6D8();
void *fn_800607F4(void *);
void fn_80066188(int);
extern void *lbl_805617BC;
extern void *lbl_805621F4;
void fn_8002A6B0();
}
extern "C" {
void *fn_8002A638(){
 if(!lbl_805617BC) lbl_805617BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805617BC;
}
void *fn_8002A674(){
 if(!lbl_805617BC || !(reinterpret_cast<unsigned int *>(lbl_805617BC)[0x24/4]&4)) fn_8002A6B0();
 return lbl_805617BC;
}
void fn_8002A6B0(){
 fn_80066188((int)fn_8002A6D8);
}
}
#pragma pop
