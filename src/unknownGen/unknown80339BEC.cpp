#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void fn_803386E8();
void *fn_80339A7C();
void fn_80339AC8();
extern char lbl_8045465C[];
extern char lbl_805361E8[];
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
}
#pragma pop
