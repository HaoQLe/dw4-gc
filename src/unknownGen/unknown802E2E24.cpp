#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802E2CC8();
void fn_802E2D14();
void fn_802E3074();
void fn_802E3908();
extern char lbl_80420CE4[];
extern char lbl_804D2CA8[];
extern char lbl_804D2CAC[];
extern char lbl_804D2CB0[];
extern char lbl_804D2CB4[];
extern void *lbl_805356A0;
extern void *lbl_805356A8;
extern void *lbl_805621F4;
void fn_802E2E4C();
void *fn_802E2EC0();
void fn_802E2EE0();
}
extern "C" {
void fn_802E2E24(){
 fn_80066188((int)fn_802E2E4C);
}
void fn_802E2E4C(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805356A0,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E2EC0,(int)lbl_80420CE4,36,(int)fn_802E2D14,(int)fn_802E2EE0,0,0);
}
void *fn_802E2EC0(){return fn_802E2CC8();}
void fn_802E2EE0(){
 void *meta=lbl_805356A0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2CA8,0x1);
 fn_800659C0(meta,lbl_804D2CAC,lbl_804D2CB0,lbl_804D2CB4,field);
}
void *fn_802E2F60(){
 if(!lbl_805356A8) lbl_805356A8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805356A8;
}
void *fn_802E2FB4(){
 if(!lbl_805356A8 || !(reinterpret_cast<unsigned int *>(lbl_805356A8)[0x24/4]&4)) fn_802E3074();
 return lbl_805356A8;
}
}
#pragma pop
