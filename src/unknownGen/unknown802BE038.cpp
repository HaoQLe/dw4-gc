#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CFBC4[];
extern char lbl_804CFBD0[];
extern char lbl_804CFBDC[];
extern char lbl_804CFBE8[];
extern void *lbl_80534920;
}
extern "C" {
void fn_802BE038(){
 void *meta=lbl_80534920;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFBC4,0x3);
 fn_800659C0(meta,lbl_804CFBD0,lbl_804CFBDC,lbl_804CFBE8,field);
}
}
#pragma pop
