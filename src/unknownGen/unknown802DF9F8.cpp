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
void *fn_802DF964();
void fn_802DF9B0();
void fn_802DFC3C();
extern char lbl_80420970[];
extern char lbl_804D2820[];
extern char lbl_804D282C[];
extern char lbl_804D2838[];
extern char lbl_804D2844[];
extern void *lbl_80535570;
extern void *lbl_80535580;
void fn_802DFA20();
void *fn_802DFA94();
void fn_802DFAB4();
}
extern "C" {
void fn_802DF9F8(){
 fn_80066188((int)fn_802DFA20);
}
void fn_802DFA20(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535570,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DFA94,(int)lbl_80420970,32,(int)fn_802DF9B0,(int)fn_802DFAB4,0,0);
}
void *fn_802DFA94(){return fn_802DF964();}
void fn_802DFAB4(){
 void *meta=lbl_80535570;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2820,0x3);
 fn_800659C0(meta,lbl_804D282C,lbl_804D2838,lbl_804D2844,field);
}
void *fn_802DFB34(){
 if(!lbl_80535580 || !(reinterpret_cast<unsigned int *>(lbl_80535580)[0x24/4]&4)) fn_802DFC3C();
 return lbl_80535580;
}
}
#pragma pop
