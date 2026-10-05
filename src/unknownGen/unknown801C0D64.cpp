#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C05BC();
void fn_801C05F8();
void fn_801C0E30();
void fn_801C0F80();
void fn_801C49BC();
extern char lbl_804AF60C[];
extern char lbl_804AF618[];
extern char lbl_80564EFC[8];
extern void *lbl_80565118;
void fn_801C0D8C();
void *fn_801C0E08();
void *fn_801C0E28();
}
extern "C" {
void fn_801C0D64(){
 fn_80066188((int)fn_801C0D8C);
}
void fn_801C0D8C(){
 fn_801AA6DC();
 fn_80066204(0,(int)lbl_80564EFC,(int)fn_801C49BC,(int)fn_801C0E28,(int)fn_801C0E08,(int)lbl_804AF618,560,(int)fn_801C05F8,(int)fn_801C0E30,(int)fn_801C0F80,(int)lbl_804AF60C);
}
void *fn_801C0E08(){return fn_801C05BC();}
void *fn_801C0E28(){return lbl_80565118;}
}
#pragma pop
