#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E3D40[];
extern char lbl_804E3D44[];
extern char lbl_804E3D48[];
extern char lbl_804E3D4C[];
extern void *lbl_8053675C;
}
extern "C" {
void fn_8034359C(){
 void *meta=lbl_8053675C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D40,0x1);
 fn_800659C0(meta,lbl_804E3D44,lbl_804E3D48,lbl_804E3D4C,field);
}
}
#pragma pop
