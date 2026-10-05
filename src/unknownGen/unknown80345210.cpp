#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80345150();
void fn_8034519C();
extern char lbl_80455698[];
extern char lbl_804E4184[];
extern char lbl_80536834[];
void fn_80345238();
void *fn_803452AC();
}
extern "C" {
void fn_80345210(){
 fn_80066188((int)fn_80345238);
}
void fn_80345238(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536834,(int)fn_8002907C,(int)fn_80024180,(int)fn_803452AC,(int)lbl_80455698,20,(int)fn_8034519C,0,0,(int)lbl_804E4184);
}
void *fn_803452AC(){return fn_80345150();}
}
#pragma pop
