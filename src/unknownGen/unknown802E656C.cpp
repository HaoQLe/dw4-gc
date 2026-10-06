#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D3108[];
extern char lbl_804D310C[];
extern char lbl_804D3110[];
extern char lbl_804D3114[];
extern void *lbl_805357E8;
}
extern "C" {
void fn_802E656C(){
 void *meta=lbl_805357E8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3108,0x1);
 fn_800659C0(meta,lbl_804D310C,lbl_804D3110,lbl_804D3114,field);
}
}
#pragma pop
