#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E3D10[];
extern char lbl_804E3D14[];
extern char lbl_804E3D18[];
extern char lbl_804E3D1C[];
extern void *lbl_80536734;
}
extern "C" {
void fn_8034297C(){
 void *meta=lbl_80536734;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D10,0x1);
 fn_800659C0(meta,lbl_804E3D14,lbl_804E3D18,lbl_804E3D1C,field);
}
}
#pragma pop
