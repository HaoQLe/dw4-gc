#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_8032A6B8();
void fn_8032A704();
void fn_8032A928();
extern char lbl_80453640[];
extern char lbl_80535D9C[];
void fn_8032A828();
void *fn_8032A894();
}
extern "C" {
void fn_8032A800(){
 fn_80066188((int)fn_8032A828);
}
void fn_8032A828(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D9C,(int)fn_8032A928,(int)fn_80328C10,(int)fn_8032A894,(int)lbl_80453640,112,(int)fn_8032A704,0,0,0);
}
void *fn_8032A894(){return fn_8032A6B8();}
}
#pragma pop
