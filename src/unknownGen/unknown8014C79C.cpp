#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_8014CB04();
extern char lbl_8049BC80[];
extern void *lbl_805621F4;
extern void *lbl_805643A0;
extern void *lbl_805643A4;
}
extern "C" {
void *fn_8014C79C(){
 char *data=lbl_8049BC80;
 if(!lbl_805643A0) lbl_805643A0=fn_800635C8(data+0x39F8,data+0x39E0,data+0x39EC,0x3);
 return lbl_805643A0;
}
void *fn_8014C7E8(){
 if(!lbl_805643A4) lbl_805643A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805643A4;
}
void *igDataTable_getMeta(){
 if(!lbl_805643A4 || !(reinterpret_cast<unsigned int *>(lbl_805643A4)[0x24/4]&4)) fn_8014CB04();
 return lbl_805643A4;
}
}
#pragma pop
