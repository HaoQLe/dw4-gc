#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D0F24[];
extern char lbl_804D0F38[];
extern char lbl_804D0F4C[];
extern char lbl_804D0F60[];
extern void *lbl_80534EB0;
}
extern "C" {
void fn_802CAD20(){
 void *meta=lbl_80534EB0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F24,0x5);
 fn_800659C0(meta,lbl_804D0F38,lbl_804D0F4C,lbl_804D0F60,field);
}
}
#pragma pop
