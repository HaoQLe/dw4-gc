#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void *fn_80407040();
void fn_8040708C();
void fn_804071B0();
void fn_80407B3C();
extern char lbl_80462858[];
extern char lbl_8055C9DC[];
void fn_8040711C();
void *fn_80407190();
}
extern "C" {
void fn_804070F4(){
 fn_80066188((int)fn_8040711C);
}
void fn_8040711C(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C9DC,(int)fn_80407B3C,(int)fn_802E170C,(int)fn_80407190,(int)lbl_80462858,148,(int)fn_8040708C,(int)fn_804071B0,0,0);
}
void *fn_80407190(){return fn_80407040();}
}
#pragma pop
