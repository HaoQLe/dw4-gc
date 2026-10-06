#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E38E4[];
extern char lbl_804E38EC[];
extern char lbl_804E38F4[];
extern char lbl_804E38FC[];
extern void *lbl_805365F4;
}
extern "C" {
void fn_8033FF3C(){
 void *meta=lbl_805365F4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E38E4,0x2);
 fn_800659C0(meta,lbl_804E38EC,lbl_804E38F4,lbl_804E38FC,field);
}
}
#pragma pop
