#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D24B4[];
extern char lbl_804D24B8[];
extern char lbl_804D24BC[];
extern char lbl_804D24C0[];
extern void *lbl_80535478;
}
extern "C" {
void fn_802DD7B4(){
 void *meta=lbl_80535478;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D24B4,0x1);
 fn_800659C0(meta,lbl_804D24B8,lbl_804D24BC,lbl_804D24C0,field);
}
}
#pragma pop
