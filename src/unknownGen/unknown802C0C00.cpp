#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CFFC4[];
extern char lbl_804CFFCC[];
extern char lbl_804CFFD4[];
extern char lbl_804CFFDC[];
extern void *lbl_80534A50;
}
extern "C" {
void fn_802C0C00(){
 void *meta=lbl_80534A50;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFFC4,0x2);
 fn_800659C0(meta,lbl_804CFFCC,lbl_804CFFD4,lbl_804CFFDC,field);
}
}
#pragma pop
