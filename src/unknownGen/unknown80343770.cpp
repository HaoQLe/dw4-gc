#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803436B0();
void fn_803436FC();
extern char lbl_80455204[];
extern char lbl_804E3D50[];
extern char lbl_80536764[];
void fn_80343798();
void *fn_8034380C();
}
extern "C" {
void fn_80343770(){
 fn_80066188((int)fn_80343798);
}
void fn_80343798(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536764,(int)fn_8002907C,(int)fn_80024180,(int)fn_8034380C,(int)lbl_80455204,20,(int)fn_803436FC,0,0,(int)lbl_804E3D50);
}
void *fn_8034380C(){return fn_803436B0();}
}
#pragma pop
