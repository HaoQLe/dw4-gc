#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0B84[];
extern char lbl_804D0B98[];
extern char lbl_804D0BAC[];
extern char lbl_804D0BC0[];
extern void *lbl_80534D88;
}
extern "C" {
void fn_802C7FBC(){
 void *meta=lbl_80534D88;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0B84,0x5);
 fn_800659C0(meta,lbl_804D0B98,lbl_804D0BAC,lbl_804D0BC0,field);
}
}
#pragma pop
