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
void *fn_8033B300();
void fn_8033B34C();
void fn_8033B728();
extern char lbl_8045476C[];
extern char lbl_80536230[];
extern void *lbl_80536234;
extern void *lbl_805621F4;
void fn_8033B498();
void *fn_8033B504();
}
extern "C" {
void fn_8033B470(){
 fn_80066188((int)fn_8033B498);
}
void fn_8033B498(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536230,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_8033B504,(int)lbl_8045476C,44,(int)fn_8033B34C,0,0,0);
}
void *fn_8033B504(){return fn_8033B300();}
void *fn_8033B524(void *object){
 fn_8033B728();
 return fn_8006546C(lbl_80536234,object);
}
void *fn_8033B564(){
 if(!lbl_80536234) lbl_80536234=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536234;
}
void *fn_8033B5B8(){
 if(!lbl_80536234 || !(reinterpret_cast<unsigned int *>(lbl_80536234)[0x24/4]&4)) fn_8033B728();
 return lbl_80536234;
}
}
#pragma pop
