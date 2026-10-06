#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1FC8[];
extern char lbl_804E1FCC[];
extern char lbl_804E1FD0[];
extern char lbl_804E1FD4[];
extern void *lbl_80535F68;
}
extern "C" {
void fn_80333370(){
 void *meta=lbl_80535F68;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1FC8,0x1);
 fn_800659C0(meta,lbl_804E1FCC,lbl_804E1FD0,lbl_804E1FD4,field);
}
}
#pragma pop
