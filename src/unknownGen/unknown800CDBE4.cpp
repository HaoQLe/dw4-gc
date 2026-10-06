#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
extern char lbl_80480EC0[];
extern void *lbl_80562C8C;
extern void *lbl_80562C90;
extern void *lbl_80562C94;
}
extern "C" {
void *fn_800CDBE4(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C8C) lbl_80562C8C=fn_800635C8(data+0xCD4,data+0xC94,data+0xCB4,0x8);
 return lbl_80562C8C;
}
void *fn_800CDC30(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C90) lbl_80562C90=fn_800635C8(data+0xE34,data+0xDF4,data+0xE14,0x8);
 return lbl_80562C90;
}
void *fn_800CDC7C(){
 char *data=lbl_80480EC0;
 if(!lbl_80562C94) lbl_80562C94=fn_800635C8(data+0xEA8,data+0xE90,data+0xE9C,0x3);
 return lbl_80562C94;
}
}
#pragma pop
