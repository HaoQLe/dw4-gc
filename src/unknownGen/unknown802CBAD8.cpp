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
void *fn_802CB9F0();
void fn_802CBA3C();
void fn_802CBCFC();
extern char lbl_8041F2B0[];
extern char lbl_804D1024[];
extern char lbl_804D102C[];
extern char lbl_804D1034[];
extern char lbl_804D103C[];
extern void *lbl_80534F0C;
extern void *lbl_80534F18;
void fn_802CBB00();
void *fn_802CBB74();
void fn_802CBB94();
}
extern "C" {
void fn_802CBAD8(){
 fn_80066188((int)fn_802CBB00);
}
void fn_802CBB00(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534F0C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CBB74,(int)lbl_8041F2B0,20,(int)fn_802CBA3C,(int)fn_802CBB94,0,0);
}
void *fn_802CBB74(){return fn_802CB9F0();}
void fn_802CBB94(){
 void *meta=lbl_80534F0C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1024,0x2);
 fn_800659C0(meta,lbl_804D102C,lbl_804D1034,lbl_804D103C,field);
}
void *fn_802CBC14(){
 if(!lbl_80534F18 || !(reinterpret_cast<unsigned int *>(lbl_80534F18)[0x24/4]&4)) fn_802CBCFC();
 return lbl_80534F18;
}
}
#pragma pop
