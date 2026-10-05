#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801CB560();
void fn_801CB59C();
void fn_801CB724();
extern char lbl_804B2208[];
extern char lbl_804B2214[];
extern void *lbl_8056548C;
void fn_801CB68C();
void *fn_801CB704();
}
extern "C" {
void fn_801CB664(){
 fn_80066188((int)fn_801CB68C);
}
void fn_801CB68C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056548C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CB704,(int)lbl_804B2214,60,(int)fn_801CB59C,(int)fn_801CB724,0,(int)lbl_804B2208);
}
void *fn_801CB704(){return fn_801CB560();}
}
#pragma pop
