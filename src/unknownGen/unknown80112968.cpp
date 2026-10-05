#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010E6DC();
void *fn_80112898();
void fn_801128D4();
void fn_80112A28();
extern char lbl_80495320[];
extern char lbl_8049532C[];
extern void *lbl_805637A4;
void fn_80112990();
void *fn_80112A08();
}
extern "C" {
void fn_80112968(){
 fn_80066188((int)fn_80112990);
}
void fn_80112990(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637A4,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80112A08,(int)lbl_8049532C,20,(int)fn_801128D4,(int)fn_80112A28,0,(int)lbl_80495320);
}
void *fn_80112A08(){return fn_80112898();}
}
#pragma pop
