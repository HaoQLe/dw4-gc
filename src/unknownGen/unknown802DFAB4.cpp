#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2820[];
extern char lbl_804D282C[];
extern char lbl_804D2838[];
extern char lbl_804D2844[];
extern void *lbl_80535570;
}
extern "C" {
void fn_802DFAB4(){
 void *meta=lbl_80535570;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2820,0x3);
 fn_800659C0(meta,lbl_804D282C,lbl_804D2838,lbl_804D2844,field);
}
}
#pragma pop
