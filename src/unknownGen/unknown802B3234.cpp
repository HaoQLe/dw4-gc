#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B3104();
void fn_802B3150();
void fn_802B3758();
extern char lbl_8041CA30[];
extern char lbl_8041CA68[];
extern char lbl_804CEDD8[];
extern char lbl_804CEDDC[];
extern char lbl_804CEDE0[];
extern char lbl_804CEDE4[];
extern char lbl_804CEDE8[];
extern char lbl_804CEDF4[];
extern void *lbl_80534550;
extern void *lbl_80534558;
extern void *lbl_8053455C;
extern void *lbl_805621F4;
void fn_802B325C();
void *fn_802B32D0();
void fn_802B32F0();
}
extern "C" {
void fn_802B3234(){
 fn_80066188((int)fn_802B325C);
}
void fn_802B325C(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534550,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802B32D0,(int)lbl_8041CA30,16,(int)fn_802B3150,(int)fn_802B32F0,0,0);
}
void *fn_802B32D0(){return fn_802B3104();}
void fn_802B32F0(){
 void *meta=lbl_80534550;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CEDD8,0x1);
 fn_800659C0(meta,lbl_804CEDDC,lbl_804CEDE0,lbl_804CEDE4,field);
}
void *fn_802B3370(){
 if(!lbl_80534558) lbl_80534558=fn_800635C8(lbl_8041CA68,lbl_804CEDE8,lbl_804CEDF4,0x3);
 return lbl_80534558;
}
void *fn_802B33D0(void *object){
 fn_802B3758();
 return fn_8006546C(lbl_8053455C,object);
}
void *fn_802B3410(){
 if(!lbl_8053455C) lbl_8053455C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053455C;
}
void *fn_802B3464(){
 if(!lbl_8053455C || !(reinterpret_cast<unsigned int *>(lbl_8053455C)[0x24/4]&4)) fn_802B3758();
 return lbl_8053455C;
}
}
#pragma pop
