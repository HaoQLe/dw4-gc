#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284540();
void fn_80284B74();
void fn_80402E28();
void *fn_80404CA0();
void fn_80404CEC();
void fn_80404E40();
extern char lbl_80462130[];
extern char lbl_8055C83C[];
void fn_80404DAC();
void *fn_80404E20();
}
extern "C" {
void fn_80404D84(){
 fn_80066188((int)fn_80404DAC);
}
void fn_80404DAC(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C83C,(int)fn_80284B74,(int)fn_80284540,(int)fn_80404E20,(int)lbl_80462130,16,(int)fn_80404CEC,(int)fn_80404E40,0,0);
}
void *fn_80404E20(){return fn_80404CA0();}
}
#pragma pop
