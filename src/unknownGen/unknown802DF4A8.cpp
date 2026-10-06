#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DF414();
void fn_802DF460();
void fn_802DF754();
extern char lbl_80420874[];
extern char lbl_804D2714[];
extern char lbl_804D2744[];
extern char lbl_804D2774[];
extern char lbl_804D27A4[];
extern void *lbl_80535528;
extern void *lbl_8053555C;
extern void *lbl_805621F4;
void fn_802DF4D0();
void *fn_802DF544();
void fn_802DF564();
}
extern "C" {
void fn_802DF4A8(){
 fn_80066188((int)fn_802DF4D0);
}
void fn_802DF4D0(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535528,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DF544,(int)lbl_80420874,56,(int)fn_802DF460,(int)fn_802DF564,0,0);
}
void *fn_802DF544(){return fn_802DF414();}
void fn_802DF564(){
 void *meta=lbl_80535528;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2714,0xC);
 fn_800659C0(meta,lbl_804D2744,lbl_804D2774,lbl_804D27A4,field);
}
void *fn_802DF5E4(){
 if(!lbl_8053555C) lbl_8053555C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053555C;
}
void *fn_802DF638(){
 if(!lbl_8053555C || !(reinterpret_cast<unsigned int *>(lbl_8053555C)[0x24/4]&4)) fn_802DF754();
 return lbl_8053555C;
}
}
#pragma pop
