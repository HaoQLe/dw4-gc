#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D3168[];
extern char lbl_804D3174[];
extern char lbl_804D3180[];
extern char lbl_804D318C[];
extern void *lbl_8053580C;
}
extern "C" {
void fn_802E6CA8(){
 void *meta=lbl_8053580C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3168,0x3);
 fn_800659C0(meta,lbl_804D3174,lbl_804D3180,lbl_804D318C,field);
}
}
#pragma pop
