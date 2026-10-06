#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D1024[];
extern char lbl_804D102C[];
extern char lbl_804D1034[];
extern char lbl_804D103C[];
extern void *lbl_80534F0C;
}
extern "C" {
void fn_802CBB94(){
 void *meta=lbl_80534F0C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1024,0x2);
 fn_800659C0(meta,lbl_804D102C,lbl_804D1034,lbl_804D103C,field);
}
}
#pragma pop
