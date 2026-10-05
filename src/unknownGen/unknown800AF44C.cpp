#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800AF66C();
void *fn_800C3A9C();
extern void *lbl_805621F4;
extern void *lbl_80562554;
}
extern "C" {
void *fn_800AF44C(){return fn_800C3A9C();}
void *fn_800AF46C(void *object){
 fn_800AF66C();
 return fn_8006546C(lbl_80562554,object);
}
void *fn_800AF4A4(){
 if(!lbl_80562554) lbl_80562554=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562554;
}
void *fn_800AF4E0(){
 if(!lbl_80562554 || !(reinterpret_cast<unsigned int *>(lbl_80562554)[0x24/4]&4)) fn_800AF66C();
 return lbl_80562554;
}
}
#pragma pop
