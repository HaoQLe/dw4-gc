#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_8033BFDC();
extern char lbl_80453438[];
extern char lbl_804E2B04[];
extern char lbl_804E2B08[];
extern void *lbl_80536254;
extern void *lbl_80536258;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033BD44(){
 if(!lbl_80536254) lbl_80536254=fn_800635C8(lbl_80453438,lbl_804E2B04,lbl_804E2B08,0x1);
 return lbl_80536254;
}
void *fn_8033BDA4(void *object){
 fn_8033BFDC();
 return fn_8006546C(lbl_80536258,object);
}
void *fn_8033BDE4(){
 if(!lbl_80536258) lbl_80536258=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536258;
}
void *beNDMWLogo_getMeta(){
 if(!lbl_80536258 || !(reinterpret_cast<unsigned int *>(lbl_80536258)[0x24/4]&4)) fn_8033BFDC();
 return lbl_80536258;
}
}
#pragma pop
