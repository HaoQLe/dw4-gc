#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802C1F24();
void fn_802C1F70();
void fn_802C2394();
void fn_802E3908();
extern char lbl_8041E580[];
extern char lbl_80534AA8[];
extern void *lbl_80534AAC;
extern void *lbl_805621F4;
void fn_802C20A8();
void *fn_802C2114();
}
extern "C" {
void fn_802C2080(){
 fn_80066188((int)fn_802C20A8);
}
void fn_802C20A8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AA8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802C2114,(int)lbl_8041E580,32,(int)fn_802C1F70,0,0,0);
}
void *fn_802C2114(){return fn_802C1F24();}
void *fn_802C2134(void *object){
 fn_802C2394();
 return fn_8006546C(lbl_80534AAC,object);
}
void *fn_802C2174(){
 if(!lbl_80534AAC) lbl_80534AAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534AAC;
}
void *fn_802C21C8(){
 if(!lbl_80534AAC || !(reinterpret_cast<unsigned int *>(lbl_80534AAC)[0x24/4]&4)) fn_802C2394();
 return lbl_80534AAC;
}
}
#pragma pop
