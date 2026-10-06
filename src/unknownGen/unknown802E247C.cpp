#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802E278C();
extern char lbl_8041CA68[];
extern char lbl_804D2B40[];
extern char lbl_804D2B7C[];
extern void *lbl_8053565C;
extern void *lbl_80535660;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802E247C(){
 if(!lbl_8053565C) lbl_8053565C=fn_800635C8(lbl_8041CA68,lbl_804D2B40,lbl_804D2B7C,0xF);
 return lbl_8053565C;
}
void *fn_802E24DC(void *object){
 fn_802E278C();
 return fn_8006546C(lbl_80535660,object);
}
void *fn_802E251C(){
 if(!lbl_80535660) lbl_80535660=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535660;
}
void *fn_802E2570(){
 if(!lbl_80535660 || !(reinterpret_cast<unsigned int *>(lbl_80535660)[0x24/4]&4)) fn_802E278C();
 return lbl_80535660;
}
}
#pragma pop
