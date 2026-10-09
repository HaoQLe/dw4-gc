#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802B9108();
extern char lbl_8041CD10[];
extern char lbl_804CF540[];
extern char lbl_804CF59C[];
extern void *lbl_80534770;
extern void *lbl_80534774;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B8E10(){
 if(!lbl_80534770) lbl_80534770=fn_800635C8(lbl_8041CD10,lbl_804CF540,lbl_804CF59C,0x17);
 return lbl_80534770;
}
void *fn_802B8E70(void *object){
 fn_802B9108();
 return fn_8006546C(lbl_80534774,object);
}
void *fn_802B8EB0(){
 if(!lbl_80534774) lbl_80534774=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534774;
}
void *beSound_getMeta(){
 if(!lbl_80534774 || !(reinterpret_cast<unsigned int *>(lbl_80534774)[0x24/4]&4)) fn_802B9108();
 return lbl_80534774;
}
}
#pragma pop
