#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_8041BDF4[];
extern char lbl_8041BE58[];
extern char lbl_804CDBA4[];
extern char lbl_804CDBB0[];
extern char lbl_804CDBBC[];
extern char lbl_804CDBCC[];
extern void *lbl_8053440C;
extern void *lbl_80534410;
}
extern "C" {
void *fn_802AC6D0(){
 if(!lbl_8053440C) lbl_8053440C=fn_800635C8(lbl_8041BDF4,lbl_804CDBA4,lbl_804CDBB0,0x3);
 return lbl_8053440C;
}
void *fn_802AC730(){
 if(!lbl_80534410) lbl_80534410=fn_800635C8(lbl_8041BE58,lbl_804CDBBC,lbl_804CDBCC,0x4);
 return lbl_80534410;
}
}
#pragma pop
