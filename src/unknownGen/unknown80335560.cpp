#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E21A0[];
extern char lbl_804E21AC[];
extern char lbl_804E21B8[];
extern char lbl_804E21C4[];
extern void *lbl_80535FFC;
}
extern "C" {
void fn_80335560(){
 void *meta=lbl_80535FFC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E21A0,0x3);
 fn_800659C0(meta,lbl_804E21AC,lbl_804E21B8,lbl_804E21C4,field);
}
}
#pragma pop
