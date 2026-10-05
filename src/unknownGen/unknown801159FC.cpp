#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
extern char lbl_80495AA4[];
extern void *lbl_805621F4;
extern void *lbl_805638AC;
void *fn_80115A40();
void fn_80115A7C();
void fn_80115AA4();
void *fn_80115B08();
}
extern "C" {
void *fn_801159FC(){return lbl_805638AC;}
void *fn_80115A04(){
 if(!lbl_805638AC) lbl_805638AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805638AC;
}
void *fn_80115A40(){
 if(!lbl_805638AC || !(reinterpret_cast<unsigned int *>(lbl_805638AC)[0x24/4]&4)) fn_80115A7C();
 return lbl_805638AC;
}
void fn_80115A7C(){
 fn_80066188((int)fn_80115AA4);
}
void fn_80115AA4(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_805638AC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80115B08,(int)lbl_80495AA4,8,0,0,0,0);
}
void *fn_80115B08(){return fn_80115A40();}
}
#pragma pop
