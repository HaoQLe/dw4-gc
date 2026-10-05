#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80340834();
void fn_80340880();
extern char lbl_80454F10[];
extern char lbl_804E3998[];
extern char lbl_80536630[];
void fn_8034091C();
void *fn_80340990();
}
extern "C" {
void fn_803408F4(){
 fn_80066188((int)fn_8034091C);
}
void fn_8034091C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536630,(int)fn_8002907C,(int)fn_80024180,(int)fn_80340990,(int)lbl_80454F10,20,(int)fn_80340880,0,0,(int)lbl_804E3998);
}
void *fn_80340990(){return fn_80340834();}
}
#pragma pop
