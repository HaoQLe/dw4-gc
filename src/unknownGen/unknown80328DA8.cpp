#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_80328C60();
void fn_80328CAC();
void fn_80328FE4();
void fn_8032A928();
extern char lbl_8045353C[];
extern char lbl_80535D68[];
extern void *lbl_80535D6C;
void fn_80328DD0();
void *fn_80328E3C();
}
extern "C" {
void fn_80328DA8(){
 fn_80066188((int)fn_80328DD0);
}
void fn_80328DD0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D68,(int)fn_8032A928,(int)fn_80328C10,(int)fn_80328E3C,(int)lbl_8045353C,112,(int)fn_80328CAC,0,0,0);
}
void *fn_80328E3C(){return fn_80328C60();}
void *fn_80328E5C(void *object){
 fn_80328FE4();
 return fn_8006546C(lbl_80535D6C,object);
}
void *fn_80328E9C(){
 if(!lbl_80535D6C || !(reinterpret_cast<unsigned int *>(lbl_80535D6C)[0x24/4]&4)) fn_80328FE4();
 return lbl_80535D6C;
}
}
#pragma pop
