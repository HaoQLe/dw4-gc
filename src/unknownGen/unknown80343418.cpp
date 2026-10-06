#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E3D30[];
extern char lbl_804E3D34[];
extern char lbl_804E3D38[];
extern char lbl_804E3D3C[];
extern void *lbl_80536754;
}
extern "C" {
void fn_80343418(){
 void *meta=lbl_80536754;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D30,0x1);
 fn_800659C0(meta,lbl_804E3D34,lbl_804E3D38,lbl_804E3D3C,field);
}
}
#pragma pop
