#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_80327658();
void fn_803276A4();
void fn_80327C38();
void fn_80328720();
extern char lbl_804534B0[];
extern char lbl_80535D4C[];
extern void *lbl_80535D50;
extern void *lbl_805621F4;
void fn_803278CC();
void *fn_80327938();
}
extern "C" {
void fn_803278A4(){
 fn_80066188((int)fn_803278CC);
}
void fn_803278CC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D4C,(int)fn_80328720,(int)fn_80326F88,(int)fn_80327938,(int)lbl_804534B0,80,(int)fn_803276A4,0,0,0);
}
void *fn_80327938(){return fn_80327658();}
void *fn_80327958(void *object){
 fn_80327C38();
 return fn_8006546C(lbl_80535D50,object);
}
void *fn_80327998(){
 if(!lbl_80535D50) lbl_80535D50=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535D50;
}
void *fn_803279EC(){
 if(!lbl_80535D50 || !(reinterpret_cast<unsigned int *>(lbl_80535D50)[0x24/4]&4)) fn_80327C38();
 return lbl_80535D50;
}
}
#pragma pop
