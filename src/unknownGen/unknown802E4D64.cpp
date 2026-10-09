#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_802E4EF8();
extern char lbl_804D2E9C[];
extern char lbl_804D2EA0[];
extern char lbl_804D2EA4[];
extern char lbl_804D2EA8[];
extern void *lbl_8053573C;
extern void *lbl_80535744;
extern void *lbl_805621F4;
}
extern "C" {
void beActionStarterData2_fieldInit(){
 void *meta=lbl_8053573C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2E9C,0x1);
 fn_800659C0(meta,lbl_804D2EA0,lbl_804D2EA4,lbl_804D2EA8,field);
}
void *fn_802E4DE4(){
 if(!lbl_80535744) lbl_80535744=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535744;
}
void *beActionStarterDataList_getMeta(){
 if(!lbl_80535744 || !(reinterpret_cast<unsigned int *>(lbl_80535744)[0x24/4]&4)) fn_802E4EF8();
 return lbl_80535744;
}
}
#pragma pop
