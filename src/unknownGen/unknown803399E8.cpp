#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80339BEC();
extern void *lbl_805361E8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803399E8(void *object){
 fn_80339BEC();
 return fn_8006546C(lbl_805361E8,object);
}
void *fn_80339A28(){
 if(!lbl_805361E8) lbl_805361E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361E8;
}
void *beNDMWMdlPBullet_getMeta(){
 if(!lbl_805361E8 || !(reinterpret_cast<unsigned int *>(lbl_805361E8)[0x24/4]&4)) fn_80339BEC();
 return lbl_805361E8;
}
}
#pragma pop
