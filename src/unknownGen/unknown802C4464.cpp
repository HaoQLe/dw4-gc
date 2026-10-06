#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0470[];
extern char lbl_804D0478[];
extern char lbl_804D0480[];
extern char lbl_804D0488[];
extern void *lbl_80534B94;
}
extern "C" {
void fn_802C4464(){
 void *meta=lbl_80534B94;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0470,0x2);
 fn_800659C0(meta,lbl_804D0478,lbl_804D0480,lbl_804D0488,field);
}
}
#pragma pop
