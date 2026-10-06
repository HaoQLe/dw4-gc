#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D2EB4[];
extern char lbl_804D2EC8[];
extern char lbl_804D2EDC[];
extern char lbl_804D2EF0[];
extern void *lbl_80535748;
}
extern "C" {
void fn_802E51A0(){
 void *meta=lbl_80535748;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2EB4,0x5);
 fn_800659C0(meta,lbl_804D2EC8,lbl_804D2EDC,lbl_804D2EF0,field);
}
}
#pragma pop
