#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802BAB34();
extern char lbl_8041CA68[];
extern char lbl_804CF768[];
extern char lbl_804CF784[];
extern void *lbl_805347E8;
extern void *lbl_805347EC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802BA8E4(){
 if(!lbl_805347E8) lbl_805347E8=fn_800635C8(lbl_8041CA68,lbl_804CF768,lbl_804CF784,0x7);
 return lbl_805347E8;
}
void *fn_802BA944(void *object){
 fn_802BAB34();
 return fn_8006546C(lbl_805347EC,object);
}
void *fn_802BA984(){
 if(!lbl_805347EC) lbl_805347EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805347EC;
}
void *fn_802BA9D8(){
 if(!lbl_805347EC || !(reinterpret_cast<unsigned int *>(lbl_805347EC)[0x24/4]&4)) fn_802BAB34();
 return lbl_805347EC;
}
}
#pragma pop
