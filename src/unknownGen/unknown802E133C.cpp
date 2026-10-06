#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802E11E0();
void fn_802E122C();
void fn_802E1648();
void fn_802E3908();
extern char lbl_80420A74[];
extern char lbl_804D2970[];
extern char lbl_804D2974[];
extern char lbl_804D2978[];
extern char lbl_804D297C[];
extern void *lbl_805355D8;
extern void *lbl_805355E0;
extern void *lbl_805621F4;
void fn_802E1364();
void *fn_802E13D8();
void fn_802E13F8();
}
extern "C" {
void fn_802E133C(){
 fn_80066188((int)fn_802E1364);
}
void fn_802E1364(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805355D8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E13D8,(int)lbl_80420A74,44,(int)fn_802E122C,(int)fn_802E13F8,0,0);
}
void *fn_802E13D8(){return fn_802E11E0();}
void fn_802E13F8(){
 void *meta=lbl_805355D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2970,0x1);
 fn_800659C0(meta,lbl_804D2974,lbl_804D2978,lbl_804D297C,field);
}
void *fn_802E1478(void *object){
 fn_802E1648();
 return fn_8006546C(lbl_805355E0,object);
}
void *fn_802E14B8(){
 if(!lbl_805355E0) lbl_805355E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805355E0;
}
void *fn_802E150C(){
 if(!lbl_805355E0 || !(reinterpret_cast<unsigned int *>(lbl_805355E0)[0x24/4]&4)) fn_802E1648();
 return lbl_805355E0;
}
}
#pragma pop
