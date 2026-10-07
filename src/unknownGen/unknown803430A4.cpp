#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80342FEC();
void fn_80343038();
void *fn_80343158();
void fn_80343388();
extern char lbl_80455190[];
extern char lbl_8053674C[];
void fn_803430CC();
void *fn_80343138();
}
extern "C" {
void fn_803430A4(){
 fn_80066188((int)fn_803430CC);
}
void fn_803430CC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053674C,(int)fn_80343388,(int)fn_80343158,(int)fn_80343138,(int)lbl_80455190,28,(int)fn_80343038,0,0,0);
}
void *fn_80343138(){return fn_80342FEC();}
}
#pragma pop
