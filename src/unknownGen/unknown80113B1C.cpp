#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_80113A78();
void fn_80113AB4();
void fn_80113BDC();
void fn_80113D38();
extern char lbl_8049553C[];
extern void *lbl_805637F8;
extern void *lbl_80563804;
void fn_80113B44();
void *fn_80113BB4();
void *fn_80113BD4();
}
extern "C" {
void fn_80113B1C(){
 fn_80066188((int)fn_80113B44);
}
void fn_80113B44(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637F8,(int)fn_80113D38,(int)fn_80113BD4,(int)fn_80113BB4,(int)lbl_8049553C,88,(int)fn_80113AB4,(int)fn_80113BDC,0,0);
}
void *fn_80113BB4(){return fn_80113A78();}
void *fn_80113BD4(){return lbl_80563804;}
}
#pragma pop
