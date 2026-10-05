#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_80329550();
void fn_8032959C();
void fn_8032A928();
extern char lbl_8045358C[];
extern char lbl_80535D78[];
void fn_803296C0();
void *fn_8032972C();
}
extern "C" {
void fn_80329698(){
 fn_80066188((int)fn_803296C0);
}
void fn_803296C0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D78,(int)fn_8032A928,(int)fn_80328C10,(int)fn_8032972C,(int)lbl_8045358C,112,(int)fn_8032959C,0,0,0);
}
void *fn_8032972C(){return fn_80329550();}
}
#pragma pop
