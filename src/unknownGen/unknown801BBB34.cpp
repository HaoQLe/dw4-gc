#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B76A8();
void *fn_801BB990();
void fn_801BB9CC();
void fn_801BBBF8();
extern char lbl_804AED70[];
extern char lbl_805604CC[8];
extern void *lbl_80564BC0;
extern void *lbl_80564DB4;
void fn_801BBB5C();
void *fn_801BBBD0();
void *fn_801BBBF0();
}
extern "C" {
void fn_801BBB34(){
 fn_80066188((int)fn_801BBB5C);
}
void fn_801BBB5C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DB4,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BBBD0,(int)lbl_804AED70,32,(int)fn_801BB9CC,(int)fn_801BBBF8,0,(int)lbl_805604CC);
}
void *fn_801BBBD0(){return fn_801BB990();}
void *fn_801BBBF0(){return lbl_80564BC0;}
}
#pragma pop
