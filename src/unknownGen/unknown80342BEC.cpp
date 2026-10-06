#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E3D20[];
extern char lbl_804E3D24[];
extern char lbl_804E3D28[];
extern char lbl_804E3D2C[];
extern void *lbl_8053673C;
}
extern "C" {
void fn_80342BEC(){
 void *meta=lbl_8053673C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D20,0x1);
 fn_800659C0(meta,lbl_804E3D24,lbl_804E3D28,lbl_804E3D2C,field);
}
}
#pragma pop
