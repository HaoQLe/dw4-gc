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
void *fn_80343DE4();
void fn_80343E30();
void fn_80344078();
extern char lbl_80455280[];
extern char lbl_804E3E00[];
extern char lbl_80536794[];
extern void *lbl_80536798;
void fn_80343ECC();
void *fn_80343F40();
}
extern "C" {
void fn_80343EA4(){
 fn_80066188((int)fn_80343ECC);
}
void fn_80343ECC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536794,(int)fn_8002907C,(int)fn_80024180,(int)fn_80343F40,(int)lbl_80455280,20,(int)fn_80343E30,0,0,(int)lbl_804E3E00);
}
void *fn_80343F40(){return fn_80343DE4();}
void *fn_80343F60(void *object){
 fn_80344078();
 return fn_8006546C(lbl_80536798,object);
}
void *fn_80343FA0(){
 if(!lbl_80536798 || !(reinterpret_cast<unsigned int *>(lbl_80536798)[0x24/4]&4)) fn_80344078();
 return lbl_80536798;
}
}
#pragma pop
