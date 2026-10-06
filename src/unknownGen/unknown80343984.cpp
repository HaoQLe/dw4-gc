#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E3D58[];
extern char lbl_804E3D64[];
extern char lbl_804E3D70[];
extern char lbl_804E3D7C[];
extern void *lbl_80536768;
}
extern "C" {
void fn_80343984(){
 void *meta=lbl_80536768;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D58,0x3);
 fn_800659C0(meta,lbl_804E3D64,lbl_804E3D70,lbl_804E3D7C,field);
}
}
#pragma pop
