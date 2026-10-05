#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_80334DE8();
void fn_80334E34();
void fn_80335038();
extern char lbl_80453E90[];
extern char lbl_804E214C[];
extern char lbl_80535FE0[];
void fn_80334F9C();
void *fn_80335018();
}
extern "C" {
void fn_80334F74(){
 fn_80066188((int)fn_80334F9C);
}
void fn_80334F9C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FE0,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_80335018,(int)lbl_80453E90,40,(int)fn_80334E34,(int)fn_80335038,0,(int)lbl_804E214C);
}
void *fn_80335018(){return fn_80334DE8();}
}
#pragma pop
