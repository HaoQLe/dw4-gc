#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80340328();
void fn_80340374();
extern char lbl_80454EB0[];
extern char lbl_804E3954[];
extern char lbl_8053661C[];
void fn_80340410();
void *fn_80340484();
}
extern "C" {
void fn_803403E8(){
 fn_80066188((int)fn_80340410);
}
void fn_80340410(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053661C,(int)fn_8002907C,(int)fn_80024180,(int)fn_80340484,(int)lbl_80454EB0,20,(int)fn_80340374,0,0,(int)lbl_804E3954);
}
void *fn_80340484(){return fn_80340328();}
}
#pragma pop
