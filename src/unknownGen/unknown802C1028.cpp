#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802C1278();
extern char lbl_8041CA68[];
extern char lbl_804D0010[];
extern char lbl_804D002C[];
extern void *lbl_80534A68;
extern void *lbl_80534A6C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C1028(){
 if(!lbl_80534A68) lbl_80534A68=fn_800635C8(lbl_8041CA68,lbl_804D0010,lbl_804D002C,0x7);
 return lbl_80534A68;
}
void *fn_802C1088(void *object){
 fn_802C1278();
 return fn_8006546C(lbl_80534A6C,object);
}
void *fn_802C10C8(){
 if(!lbl_80534A6C) lbl_80534A6C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534A6C;
}
void *fn_802C111C(){
 if(!lbl_80534A6C || !(reinterpret_cast<unsigned int *>(lbl_80534A6C)[0x24/4]&4)) fn_802C1278();
 return lbl_80534A6C;
}
}
#pragma pop
