#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065D94(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void *fn_802A8C4C();
void *fn_802A8CC4();
void fn_802AA788();
void *fn_802AA7BC();
void fn_802AA808();
void fn_802AAA90();
extern char lbl_8041BB30[];
extern char lbl_80534350[];
extern void *lbl_80534354;
extern void *lbl_805621F4;
void fn_802AA878();
void *fn_802AA8F4();
void fn_802AA914();
void *fn_802AA93C();
void *fn_802AA95C();
}
extern "C" {
void fn_802AA850(){
 fn_80066188((int)fn_802AA878);
}
void fn_802AA878(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534350,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802AA8F4,(int)lbl_8041BB30,8,(int)fn_802AA808,(int)fn_802AA914,(int)fn_802AA93C,0);
}
void *fn_802AA8F4(){return fn_802AA7BC();}
void fn_802AA914(){
 fn_80065D94((int)fn_802AA95C);
}
void *fn_802AA93C(){return fn_802A8C4C();}
void *fn_802AA95C(){return fn_802A8CC4();}
void *fn_802AA97C(){
 if(!lbl_80534354) lbl_80534354=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534354;
}
void *fn_802AA9D0(){
 if(!lbl_80534354 || !(reinterpret_cast<unsigned int *>(lbl_80534354)[0x24/4]&4)) fn_802AAA90();
 return lbl_80534354;
}
}
#pragma pop
