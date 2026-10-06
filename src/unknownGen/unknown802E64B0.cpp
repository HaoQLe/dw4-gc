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
void *fn_802E63C8();
void fn_802E6414();
void fn_802E66D4();
extern char lbl_80421034[];
extern char lbl_804D3108[];
extern char lbl_804D310C[];
extern char lbl_804D3110[];
extern char lbl_804D3114[];
extern void *lbl_805357E8;
extern void *lbl_805357F0;
void fn_802E64D8();
void *fn_802E654C();
void fn_802E656C();
}
extern "C" {
void fn_802E64B0(){
 fn_80066188((int)fn_802E64D8);
}
void fn_802E64D8(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805357E8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802E654C,(int)lbl_80421034,16,(int)fn_802E6414,(int)fn_802E656C,0,0);
}
void *fn_802E654C(){return fn_802E63C8();}
void fn_802E656C(){
 void *meta=lbl_805357E8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3108,0x1);
 fn_800659C0(meta,lbl_804D310C,lbl_804D3110,lbl_804D3114,field);
}
void *fn_802E65EC(){
 if(!lbl_805357F0 || !(reinterpret_cast<unsigned int *>(lbl_805357F0)[0x24/4]&4)) fn_802E66D4();
 return lbl_805357F0;
}
}
#pragma pop
