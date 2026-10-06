#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8033EEE8();
extern void *lbl_80536520;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033EC68(void *object){
 fn_8033EEE8();
 return fn_8006546C(lbl_80536520,object);
}
void *fn_8033ECA8(){
 if(!lbl_80536520) lbl_80536520=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536520;
}
void *fn_8033ECFC(){
 if(!lbl_80536520 || !(reinterpret_cast<unsigned int *>(lbl_80536520)[0x24/4]&4)) fn_8033EEE8();
 return lbl_80536520;
}
}
#pragma pop
