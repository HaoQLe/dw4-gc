#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_803416EC();
void fn_80341738();
void fn_80341AD4();
extern char lbl_80455070[];
extern char lbl_804E3BFC[];
extern char lbl_804E3C08[];
extern char lbl_804E3C14[];
extern char lbl_804E3C20[];
extern void *lbl_805366D8;
extern void *lbl_805366E8;
extern void *lbl_805621F4;
void fn_80341830();
void *fn_803418A4();
void fn_803418C4();
}
extern "C" {
void fn_80341808(){
 fn_80066188((int)fn_80341830);
}
void fn_80341830(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_805366D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_803418A4,(int)lbl_80455070,20,(int)fn_80341738,(int)fn_803418C4,0,0);
}
void *fn_803418A4(){return fn_803416EC();}
void fn_803418C4(){
 void *meta=lbl_805366D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3BFC,0x3);
 fn_800659C0(meta,lbl_804E3C08,lbl_804E3C14,lbl_804E3C20,field);
}
void *fn_80341944(void *object){
 fn_80341AD4();
 return fn_8006546C(lbl_805366E8,object);
}
void *fn_80341984(){
 if(!lbl_805366E8) lbl_805366E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805366E8;
}
void *fn_803419D8(){
 if(!lbl_805366E8 || !(reinterpret_cast<unsigned int *>(lbl_805366E8)[0x24/4]&4)) fn_80341AD4();
 return lbl_805366E8;
}
}
#pragma pop
