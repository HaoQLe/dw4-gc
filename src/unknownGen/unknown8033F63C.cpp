#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033F57C();
void fn_8033F5C8();
void fn_8033F7CC();
extern char lbl_80454D40[];
extern char lbl_804E37DC[];
extern char lbl_805365A8[];
extern void *lbl_805365AC;
void fn_8033F664();
void *fn_8033F6D8();
}
extern "C" {
void fn_8033F63C(){
 fn_80066188((int)fn_8033F664);
}
void fn_8033F664(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805365A8,(int)fn_8002907C,(int)fn_80024180,(int)fn_8033F6D8,(int)lbl_80454D40,20,(int)fn_8033F5C8,0,0,(int)lbl_804E37DC);
}
void *fn_8033F6D8(){return fn_8033F57C();}
void *fn_8033F6F8(void *object){
 fn_8033F7CC();
 return fn_8006546C(lbl_805365AC,object);
}
void *fn_8033F738(){
 if(!lbl_805365AC || !(reinterpret_cast<unsigned int *>(lbl_805365AC)[0x24/4]&4)) fn_8033F7CC();
 return lbl_805365AC;
}
}
#pragma pop
