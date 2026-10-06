#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D239C[];
extern char lbl_804D23B8[];
extern char lbl_804D23D4[];
extern char lbl_804D23F0[];
extern void *lbl_80535418;
}
extern "C" {
void fn_802DBD6C(){
 void *meta=lbl_80535418;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D239C,0x7);
 fn_800659C0(meta,lbl_804D23B8,lbl_804D23D4,lbl_804D23F0,field);
}
}
#pragma pop
