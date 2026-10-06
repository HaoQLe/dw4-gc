#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80343FA0();
void fn_80343FEC();
void fn_8034474C();
extern char lbl_80453438[];
extern char lbl_80455298[];
extern char lbl_80455484[];
extern char lbl_804E3E08[];
extern char lbl_804E3E54[];
extern char lbl_804E3EA0[];
extern char lbl_804E3EEC[];
extern char lbl_804E3F38[];
extern char lbl_804E3F90[];
extern char lbl_804E3FE8[];
extern char lbl_804E4040[];
extern void *lbl_80536798;
extern void *lbl_805367E8;
extern void *lbl_805367EC;
extern void *lbl_805367F0;
extern void *lbl_805621F4;
void fn_803440A0();
void *fn_80344114();
void fn_80344134();
}
extern "C" {
void fn_80344078(){
 fn_80066188((int)fn_803440A0);
}
void fn_803440A0(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80536798,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80344114,(int)lbl_80455298,84,(int)fn_80343FEC,(int)fn_80344134,0,0);
}
void *fn_80344114(){return fn_80343FA0();}
void fn_80344134(){
 void *meta=lbl_80536798;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3E08,0x13);
 fn_800659C0(meta,lbl_804E3E54,lbl_804E3EA0,lbl_804E3EEC,field);
}
void *fn_803441B4(){
 if(!lbl_805367E8) lbl_805367E8=fn_800635C8(lbl_80455484,lbl_804E3F38,lbl_804E3F90,0x16);
 return lbl_805367E8;
}
void *fn_80344214(){
 if(!lbl_805367EC) lbl_805367EC=fn_800635C8(lbl_80453438,lbl_804E3FE8,lbl_804E4040,0x16);
 return lbl_805367EC;
}
void *fn_80344274(void *object){
 fn_8034474C();
 return fn_8006546C(lbl_805367F0,object);
}
void *fn_803442B4(){
 if(!lbl_805367F0) lbl_805367F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805367F0;
}
void *fn_80344308(){
 if(!lbl_805367F0 || !(reinterpret_cast<unsigned int *>(lbl_805367F0)[0x24/4]&4)) fn_8034474C();
 return lbl_805367F0;
}
}
#pragma pop
