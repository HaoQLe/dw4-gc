#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_802AAE9C();
extern char lbl_804CD950[];
extern char lbl_804CD958[];
extern char lbl_804CD960[];
extern char lbl_804CD968[];
extern void *lbl_80534358;
extern void *lbl_80534364;
}
extern "C" {
void fn_802AAD5C(){
 void *meta=lbl_80534358;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CD950,0x2);
 fn_800659C0(meta,lbl_804CD958,lbl_804CD960,lbl_804CD968,field);
}
void *fn_802AADDC(){
 if(!lbl_80534364 || !(reinterpret_cast<unsigned int *>(lbl_80534364)[0x24/4]&4)) fn_802AAE9C();
 return lbl_80534364;
}
}
#pragma pop
