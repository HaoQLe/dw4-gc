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
void *fn_802CADA0();
void fn_802CADEC();
void fn_802CB0AC();
extern char lbl_8041F224[];
extern char lbl_804D0F74[];
extern char lbl_804D0F78[];
extern char lbl_804D0F7C[];
extern char lbl_804D0F80[];
extern void *lbl_80534EC8;
extern void *lbl_80534ED0;
void fn_802CAEB0();
void *fn_802CAF24();
void fn_802CAF44();
}
extern "C" {
void fn_802CAE88(){
 fn_80066188((int)fn_802CAEB0);
}
void fn_802CAEB0(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EC8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CAF24,(int)lbl_8041F224,16,(int)fn_802CADEC,(int)fn_802CAF44,0,0);
}
void *fn_802CAF24(){return fn_802CADA0();}
void fn_802CAF44(){
 void *meta=lbl_80534EC8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F74,0x1);
 fn_800659C0(meta,lbl_804D0F78,lbl_804D0F7C,lbl_804D0F80,field);
}
void *fn_802CAFC4(){
 if(!lbl_80534ED0 || !(reinterpret_cast<unsigned int *>(lbl_80534ED0)[0x24/4]&4)) fn_802CB0AC();
 return lbl_80534ED0;
}
}
#pragma pop
