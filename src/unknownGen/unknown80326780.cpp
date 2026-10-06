#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80326A58();
extern char lbl_80453438[];
extern char lbl_804E196C[];
extern char lbl_804E1974[];
extern void *lbl_80535D28;
extern void *lbl_80535D2C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80326780(){
 if(!lbl_80535D28) lbl_80535D28=fn_800635C8(lbl_80453438,lbl_804E196C,lbl_804E1974,0x2);
 return lbl_80535D28;
}
void *fn_803267E0(void *object){
 fn_80326A58();
 return fn_8006546C(lbl_80535D2C,object);
}
void *fn_80326820(){
 if(!lbl_80535D2C) lbl_80535D2C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535D2C;
}
void *fn_80326874(){
 if(!lbl_80535D2C || !(reinterpret_cast<unsigned int *>(lbl_80535D2C)[0x24/4]&4)) fn_80326A58();
 return lbl_80535D2C;
}
}
#pragma pop
