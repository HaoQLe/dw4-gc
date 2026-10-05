#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B8914();
void fn_801B8950();
void fn_801B8D78();
void fn_801C03BC();
extern char lbl_804AE20C[];
extern char lbl_804AE220[];
extern void *lbl_80564C54;
extern void *lbl_80564EF0;
void fn_801B8CD8();
void *fn_801B8D50();
void *fn_801B8D70();
}
extern "C" {
void fn_801B8CB0(){
 fn_80066188((int)fn_801B8CD8);
}
void fn_801B8CD8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C54,(int)fn_801C03BC,(int)fn_801B8D70,(int)fn_801B8D50,(int)lbl_804AE220,96,(int)fn_801B8950,(int)fn_801B8D78,0,(int)lbl_804AE20C);
}
void *fn_801B8D50(){return fn_801B8914();}
void *fn_801B8D70(){return lbl_80564EF0;}
}
#pragma pop
