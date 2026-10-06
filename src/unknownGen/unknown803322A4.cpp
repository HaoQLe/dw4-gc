#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1F0C[];
extern char lbl_804E1F10[];
extern char lbl_804E1F14[];
extern char lbl_804E1F18[];
extern void *lbl_80535F28;
}
extern "C" {
void fn_803322A4(){
 void *meta=lbl_80535F28;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1F0C,0x1);
 fn_800659C0(meta,lbl_804E1F10,lbl_804E1F14,lbl_804E1F18,field);
}
}
#pragma pop
