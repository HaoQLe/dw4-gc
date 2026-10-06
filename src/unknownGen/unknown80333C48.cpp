#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E2064[];
extern char lbl_804E2068[];
extern char lbl_804E206C[];
extern char lbl_804E2070[];
extern void *lbl_80535F94;
}
extern "C" {
void fn_80333C48(){
 void *meta=lbl_80535F94;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E2064,0x1);
 fn_800659C0(meta,lbl_804E2068,lbl_804E206C,lbl_804E2070,field);
}
}
#pragma pop
