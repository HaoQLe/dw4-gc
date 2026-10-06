#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CF63C[];
extern char lbl_804CF644[];
extern char lbl_804CF64C[];
extern char lbl_804CF654[];
extern void *lbl_80534788;
}
extern "C" {
void fn_802B95EC(){
 void *meta=lbl_80534788;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CF63C,0x2);
 fn_800659C0(meta,lbl_804CF644,lbl_804CF64C,lbl_804CF654,field);
}
}
#pragma pop
