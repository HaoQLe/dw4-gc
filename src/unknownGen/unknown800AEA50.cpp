#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_800AED4C();
void *fn_800C3E0C();
extern char lbl_80477D08[];
extern void *lbl_805621F4;
extern void *lbl_80562524;
extern void *lbl_80562528;
}
extern "C" {
void *fn_800AEA50(){return fn_800C3E0C();}
void *fn_800AEA70(){
 char *data=lbl_80477D08;
 if(!lbl_80562524) lbl_80562524=fn_800635C8(data+0x6D0,data+0x6B8,data+0x6C4,0x3);
 return lbl_80562524;
}
void *fn_800AEABC(){
 if(!lbl_80562528) lbl_80562528=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562528;
}
void *fn_800AEAF8(){
 if(!lbl_80562528 || !(reinterpret_cast<unsigned int *>(lbl_80562528)[0x24/4]&4)) fn_800AED4C();
 return lbl_80562528;
}
}
#pragma pop
