#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void *fn_803386E8();
void *fn_8033A2A4();
void fn_8033A2F0();
void fn_8033A71C();
extern char lbl_80454694[];
extern char lbl_805361F4[];
extern void *lbl_805361F8;
extern void *lbl_805621F4;
void fn_8033A43C();
void *fn_8033A4A8();
}
extern "C" {
void fn_8033A414(){
 fn_80066188((int)fn_8033A43C);
}
void fn_8033A43C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361F4,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_8033A4A8,(int)lbl_80454694,44,(int)fn_8033A2F0,0,0,0);
}
void *fn_8033A4A8(){return fn_8033A2A4();}
void *fn_8033A4C8(void *object){
 fn_8033A71C();
 return fn_8006546C(lbl_805361F8,object);
}
void *fn_8033A508(){
 if(!lbl_805361F8) lbl_805361F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361F8;
}
void *fn_8033A55C(){
 if(!lbl_805361F8 || !(reinterpret_cast<unsigned int *>(lbl_805361F8)[0x24/4]&4)) fn_8033A71C();
 return lbl_805361F8;
}
}
#pragma pop
