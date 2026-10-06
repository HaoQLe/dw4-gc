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
void *fn_802CB2FC();
void fn_802CB348();
void fn_802CB690();
extern char lbl_8041F268[];
extern char lbl_804D0F84[];
extern char lbl_804D0F8C[];
extern char lbl_804D0F94[];
extern char lbl_804D0F9C[];
extern void *lbl_80534ED8;
extern void *lbl_80534EE4;
void fn_802CB40C();
void *fn_802CB480();
void fn_802CB4A0();
}
extern "C" {
void fn_802CB3E4(){
 fn_80066188((int)fn_802CB40C);
}
void fn_802CB40C(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534ED8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CB480,(int)lbl_8041F268,20,(int)fn_802CB348,(int)fn_802CB4A0,0,0);
}
void *fn_802CB480(){return fn_802CB2FC();}
void fn_802CB4A0(){
 void *meta=lbl_80534ED8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F84,0x2);
 fn_800659C0(meta,lbl_804D0F8C,lbl_804D0F94,lbl_804D0F9C,field);
}
void *fn_802CB520(){
 if(!lbl_80534EE4 || !(reinterpret_cast<unsigned int *>(lbl_80534EE4)[0x24/4]&4)) fn_802CB690();
 return lbl_80534EE4;
}
}
#pragma pop
