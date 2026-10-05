#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B7D1C();
void fn_801B7D58();
void fn_801B7EB0();
void fn_801BF270();
extern char lbl_804ADF54[];
extern char lbl_805603DC[6];
extern void *lbl_80564BEC;
extern void *lbl_80564EBC;
void fn_801B7E14();
void *fn_801B7E88();
void *fn_801B7EA8();
}
extern "C" {
void fn_801B7DEC(){
 fn_80066188((int)fn_801B7E14);
}
void fn_801B7E14(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BEC,(int)fn_801BF270,(int)fn_801B7EA8,(int)fn_801B7E88,(int)lbl_805603DC,44,(int)fn_801B7D58,(int)fn_801B7EB0,0,(int)lbl_804ADF54);
}
void *fn_801B7E88(){return fn_801B7D1C();}
void *fn_801B7EA8(){return lbl_80564EBC;}
}
#pragma pop
