#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802DD6F8();
extern void *lbl_80535478;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DD57C(void *object){
 fn_802DD6F8();
 return fn_8006546C(lbl_80535478,object);
}
void *fn_802DD5BC(){
 if(!lbl_80535478) lbl_80535478=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535478;
}
void *fn_802DD610(){
 if(!lbl_80535478 || !(reinterpret_cast<unsigned int *>(lbl_80535478)[0x24/4]&4)) fn_802DD6F8();
 return lbl_80535478;
}
}
#pragma pop
