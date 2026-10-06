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
void *fn_802CAB7C();
void fn_802CABC8();
void fn_802CAE88();
extern char lbl_8041F200[];
extern char lbl_804D0F24[];
extern char lbl_804D0F38[];
extern char lbl_804D0F4C[];
extern char lbl_804D0F60[];
extern void *lbl_80534EB0;
extern void *lbl_80534EC8;
void fn_802CAC8C();
void *fn_802CAD00();
void fn_802CAD20();
}
extern "C" {
void fn_802CAC64(){
 fn_80066188((int)fn_802CAC8C);
}
void fn_802CAC8C(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EB0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CAD00,(int)lbl_8041F200,48,(int)fn_802CABC8,(int)fn_802CAD20,0,0);
}
void *fn_802CAD00(){return fn_802CAB7C();}
void fn_802CAD20(){
 void *meta=lbl_80534EB0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F24,0x5);
 fn_800659C0(meta,lbl_804D0F38,lbl_804D0F4C,lbl_804D0F60,field);
}
void *fn_802CADA0(){
 if(!lbl_80534EC8 || !(reinterpret_cast<unsigned int *>(lbl_80534EC8)[0x24/4]&4)) fn_802CAE88();
 return lbl_80534EC8;
}
}
#pragma pop
