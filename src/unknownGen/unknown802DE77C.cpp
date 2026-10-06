#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DE6E8();
void fn_802DE734();
void fn_802DE9C0();
extern char lbl_804207A4[];
extern char lbl_804D25C8[];
extern char lbl_804D25E0[];
extern char lbl_804D25F8[];
extern char lbl_804D2610[];
extern void *lbl_805354C8;
extern void *lbl_805354E4;
void fn_802DE7A4();
void *fn_802DE818();
void fn_802DE838();
}
extern "C" {
void fn_802DE77C(){
 fn_80066188((int)fn_802DE7A4);
}
void fn_802DE7A4(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805354C8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DE818,(int)lbl_804207A4,32,(int)fn_802DE734,(int)fn_802DE838,0,0);
}
void *fn_802DE818(){return fn_802DE6E8();}
void fn_802DE838(){
 void *meta=lbl_805354C8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D25C8,0x6);
 fn_800659C0(meta,lbl_804D25E0,lbl_804D25F8,lbl_804D2610,field);
}
void *fn_802DE8B8(){
 if(!lbl_805354E4 || !(reinterpret_cast<unsigned int *>(lbl_805354E4)[0x24/4]&4)) fn_802DE9C0();
 return lbl_805354E4;
}
}
#pragma pop
