#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_801C3514();
extern char lbl_804AAFB8[];
extern void *lbl_805621F4;
extern void *lbl_80565064;
extern void *lbl_80565068;
extern void *lbl_8056506C;
}
extern "C" {
void *fn_801C2F7C(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565064) lbl_80565064=fn_800635C8(data+0x520C,data+0x51DC,data+0x51F4,0x6);
 return lbl_80565064;
}
void *fn_801C2FC8(){
 char *data=lbl_804AAFB8;
 if(!lbl_80565068) lbl_80565068=fn_800635C8(data+0x5254,data+0x523C,data+0x5248,0x3);
 return lbl_80565068;
}
void *fn_801C3014(void *object){
 fn_801C3514();
 return fn_8006546C(lbl_8056506C,object);
}
void *fn_801C304C(){
 if(!lbl_8056506C) lbl_8056506C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056506C;
}
void *fn_801C3088(){
 if(!lbl_8056506C || !(reinterpret_cast<unsigned int *>(lbl_8056506C)[0x24/4]&4)) fn_801C3514();
 return lbl_8056506C;
}
}
#pragma pop
