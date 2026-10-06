#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_8041CA68[];
extern char lbl_804D1F00[];
extern char lbl_804D1F0C[];
extern char lbl_804D1F18[];
extern char lbl_804D1F24[];
extern char lbl_804D1F30[];
extern char lbl_804D1F50[];
extern void *lbl_805352F0;
extern void *lbl_80535300;
}
extern "C" {
void fn_802D85A0(){
 void *meta=lbl_805352F0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1F00,0x3);
 fn_800659C0(meta,lbl_804D1F0C,lbl_804D1F18,lbl_804D1F24,field);
}
void *fn_802D8620(){
 if(!lbl_80535300) lbl_80535300=fn_800635C8(lbl_8041CA68,lbl_804D1F30,lbl_804D1F50,0x8);
 return lbl_80535300;
}
}
#pragma pop
