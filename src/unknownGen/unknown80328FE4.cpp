#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_80328E9C();
void fn_80328EE8();
void fn_80329220();
void fn_8032A928();
extern char lbl_80453550[];
extern char lbl_80535D6C[];
extern void *lbl_80535D70;
void fn_8032900C();
void *fn_80329078();
}
extern "C" {
void fn_80328FE4(){
 fn_80066188((int)fn_8032900C);
}
void fn_8032900C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D6C,(int)fn_8032A928,(int)fn_80328C10,(int)fn_80329078,(int)lbl_80453550,112,(int)fn_80328EE8,0,0,0);
}
void *fn_80329078(){return fn_80328E9C();}
void *fn_80329098(void *object){
 fn_80329220();
 return fn_8006546C(lbl_80535D70,object);
}
void *fn_803290D8(){
 if(!lbl_80535D70 || !(reinterpret_cast<unsigned int *>(lbl_80535D70)[0x24/4]&4)) fn_80329220();
 return lbl_80535D70;
}
}
#pragma pop
