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
void *fn_802DD610();
void fn_802DD65C();
void fn_802DD8F4();
extern char lbl_80420668[];
extern char lbl_804D24B4[];
extern char lbl_804D24B8[];
extern char lbl_804D24BC[];
extern char lbl_804D24C0[];
extern void *lbl_80535478;
extern void *lbl_80535480;
void fn_802DD720();
void *fn_802DD794();
void fn_802DD7B4();
}
extern "C" {
void fn_802DD6F8(){
 fn_80066188((int)fn_802DD720);
}
void fn_802DD720(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535478,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802DD794,(int)lbl_80420668,16,(int)fn_802DD65C,(int)fn_802DD7B4,0,0);
}
void *fn_802DD794(){return fn_802DD610();}
void fn_802DD7B4(){
 void *meta=lbl_80535478;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D24B4,0x1);
 fn_800659C0(meta,lbl_804D24B8,lbl_804D24BC,lbl_804D24C0,field);
}
void *fn_802DD834(){
 if(!lbl_80535480 || !(reinterpret_cast<unsigned int *>(lbl_80535480)[0x24/4]&4)) fn_802DD8F4();
 return lbl_80535480;
}
}
#pragma pop
