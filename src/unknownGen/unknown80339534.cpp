#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80454460[];
extern char lbl_804544CC[];
extern char lbl_804545A0[];
extern char lbl_804E2838[];
extern char lbl_804E2860[];
extern char lbl_804E2888[];
extern char lbl_804E28B4[];
extern char lbl_804E28E0[];
extern char lbl_804E2920[];
extern void *lbl_805361AC;
extern void *lbl_805361B0;
extern void *lbl_805361B4;
}
extern "C" {
void *fn_80339534(){
 if(!lbl_805361AC) lbl_805361AC=fn_800635C8(lbl_80454460,lbl_804E2838,lbl_804E2860,0xA);
 return lbl_805361AC;
}
void *fn_80339594(){
 if(!lbl_805361B0) lbl_805361B0=fn_800635C8(lbl_804544CC,lbl_804E2888,lbl_804E28B4,0xB);
 return lbl_805361B0;
}
void *fn_803395F4(){
 if(!lbl_805361B4) lbl_805361B4=fn_800635C8(lbl_804545A0,lbl_804E28E0,lbl_804E2920,0x10);
 return lbl_805361B4;
}
}
#pragma pop
