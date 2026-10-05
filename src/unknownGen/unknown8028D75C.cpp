#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8028DA5C();
extern void *lbl_805621F4;
extern void *lbl_80566118;
}
extern "C" {
void *fn_8028D75C(void *object){
 fn_8028DA5C();
 return fn_8006546C(lbl_80566118,object);
}
void *fn_8028D794(){
 if(!lbl_80566118) lbl_80566118=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80566118;
}
void *fn_8028D7D0(){
 if(!lbl_80566118 || !(reinterpret_cast<unsigned int *>(lbl_80566118)[0x24/4]&4)) fn_8028DA5C();
 return lbl_80566118;
}
}
#pragma pop
