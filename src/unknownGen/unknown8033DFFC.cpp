#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033DF00();
void fn_8033DF4C();
void fn_8033E0B8();
extern char lbl_80454B54[];
extern char lbl_805364A0[];
void fn_8033E024();
void *fn_8033E098();
}
extern "C" {
void fn_8033DFFC(){
 fn_80066188((int)fn_8033E024);
}
void fn_8033E024(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805364A0,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033E098,(int)lbl_80454B54,60,(int)fn_8033DF4C,(int)fn_8033E0B8,0,0);
}
void *fn_8033E098(){return fn_8033DF00();}
}
#pragma pop
