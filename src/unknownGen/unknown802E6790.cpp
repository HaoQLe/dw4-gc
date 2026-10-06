#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D3118[];
extern char lbl_804D3120[];
extern char lbl_804D3128[];
extern char lbl_804D3130[];
extern void *lbl_805357F0;
}
extern "C" {
void fn_802E6790(){
 void *meta=lbl_805357F0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3118,0x2);
 fn_800659C0(meta,lbl_804D3120,lbl_804D3128,lbl_804D3130,field);
}
}
#pragma pop
