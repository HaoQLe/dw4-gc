#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E3BFC[];
extern char lbl_804E3C08[];
extern char lbl_804E3C14[];
extern char lbl_804E3C20[];
extern void *lbl_805366D8;
}
extern "C" {
void fn_803418C4(){
 void *meta=lbl_805366D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3BFC,0x3);
 fn_800659C0(meta,lbl_804E3C08,lbl_804E3C14,lbl_804E3C20,field);
}
}
#pragma pop
