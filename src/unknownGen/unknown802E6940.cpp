#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E6810();
void fn_802E685C();
void fn_802E6BEC();
extern char lbl_80421074[];
extern char lbl_804D3138[];
extern char lbl_804D3144[];
extern char lbl_804D3150[];
extern char lbl_804D315C[];
extern void *lbl_805357FC;
extern void *lbl_8053580C;
void fn_802E6968();
void *fn_802E69DC();
void fn_802E69FC();
}
extern "C" {
void fn_802E6940(){
 fn_80066188((int)fn_802E6968);
}
void fn_802E6968(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805357FC,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802E69DC,(int)lbl_80421074,24,(int)fn_802E685C,(int)fn_802E69FC,0,0);
}
void *fn_802E69DC(){return fn_802E6810();}
void fn_802E69FC(){
 void *meta=lbl_805357FC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3138,0x3);
 fn_800659C0(meta,lbl_804D3144,lbl_804D3150,lbl_804D315C,field);
}
void *fn_802E6A7C(){
 if(!lbl_8053580C || !(reinterpret_cast<unsigned int *>(lbl_8053580C)[0x24/4]&4)) fn_802E6BEC();
 return lbl_8053580C;
}
}
#pragma pop
