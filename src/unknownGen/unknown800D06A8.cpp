#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800CE2F8();
void fn_800D080C();
extern char lbl_80488A94[];
extern void *lbl_805621F4;
extern void *lbl_80562E24;
void *fn_800D071C();
void fn_800D0758();
void fn_800D0780();
void *fn_800D07EC();
}
extern "C" {
void *fn_800D06A8(void *object){
 fn_800D0758();
 return fn_8006546C(lbl_80562E24,object);
}
void *fn_800D06E0(){
 if(!lbl_80562E24) lbl_80562E24=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E24;
}
void *fn_800D071C(){
 if(!lbl_80562E24 || !(reinterpret_cast<unsigned int *>(lbl_80562E24)[0x24/4]&4)) fn_800D0758();
 return lbl_80562E24;
}
void fn_800D0758(){
 fn_80066188((int)fn_800D0780);
}
void fn_800D0780(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E24,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800D07EC,(int)lbl_80488A94,20,0,(int)fn_800D080C,0,0);
}
void *fn_800D07EC(){return fn_800D071C();}
}
#pragma pop
