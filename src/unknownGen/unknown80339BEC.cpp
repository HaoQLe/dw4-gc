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
void *fn_80339A7C();
void fn_80339AC8();
void fn_80339EA4();
extern char lbl_8045465C[];
extern char lbl_805361E8[];
extern void *lbl_805361EC;
extern void *lbl_805621F4;
void fn_80339C14();
void *fn_80339C80();
}
extern "C" {
void fn_80339BEC(){
 fn_80066188((int)fn_80339C14);
}
void fn_80339C14(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361E8,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_80339C80,(int)lbl_8045465C,44,(int)fn_80339AC8,0,0,0);
}
void *fn_80339C80(){return fn_80339A7C();}
void *fn_80339CA0(void *object){
 fn_80339EA4();
 return fn_8006546C(lbl_805361EC,object);
}
void *fn_80339CE0(){
 if(!lbl_805361EC) lbl_805361EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361EC;
}
void *fn_80339D34(){
 if(!lbl_805361EC || !(reinterpret_cast<unsigned int *>(lbl_805361EC)[0x24/4]&4)) fn_80339EA4();
 return lbl_805361EC;
}
}
#pragma pop
