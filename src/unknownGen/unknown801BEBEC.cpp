#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B11F4();
void *fn_801BE884();
void fn_801BE8C0();
void fn_801BECB4();
extern char lbl_804AF37C[];
extern char lbl_804AF390[];
extern void *lbl_805648E8;
extern void *lbl_80564E88;
void fn_801BEC14();
void *fn_801BEC8C();
void *fn_801BECAC();
}
extern "C" {
void fn_801BEBEC(){
 fn_80066188((int)fn_801BEC14);
}
void fn_801BEC14(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E88,(int)fn_801B11F4,(int)fn_801BECAC,(int)fn_801BEC8C,(int)lbl_804AF390,60,(int)fn_801BE8C0,(int)fn_801BECB4,0,(int)lbl_804AF37C);
}
void *fn_801BEC8C(){return fn_801BE884();}
void *fn_801BECAC(){return lbl_805648E8;}
}
#pragma pop
