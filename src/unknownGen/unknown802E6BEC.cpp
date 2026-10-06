#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E6A7C();
void fn_802E6AC8();
void fn_802E6E3C();
extern char lbl_80421094[];
extern char lbl_804D3168[];
extern char lbl_804D3174[];
extern char lbl_804D3180[];
extern char lbl_804D318C[];
extern void *lbl_8053580C;
extern void *lbl_8053581C;
extern void *lbl_805621F4;
void fn_802E6C14();
void *fn_802E6C88();
void fn_802E6CA8();
}
extern "C" {
void fn_802E6BEC(){
 fn_80066188((int)fn_802E6C14);
}
void fn_802E6C14(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_8053580C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802E6C88,(int)lbl_80421094,24,(int)fn_802E6AC8,(int)fn_802E6CA8,0,0);
}
void *fn_802E6C88(){return fn_802E6A7C();}
void fn_802E6CA8(){
 void *meta=lbl_8053580C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3168,0x3);
 fn_800659C0(meta,lbl_804D3174,lbl_804D3180,lbl_804D318C,field);
}
void *fn_802E6D28(){
 if(!lbl_8053581C) lbl_8053581C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053581C;
}
void *fn_802E6D7C(){
 if(!lbl_8053581C || !(reinterpret_cast<unsigned int *>(lbl_8053581C)[0x24/4]&4)) fn_802E6E3C();
 return lbl_8053581C;
}
}
#pragma pop
