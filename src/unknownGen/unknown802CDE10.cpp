#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802CDCB4();
void fn_802CDD00();
void fn_802E3908();
extern char lbl_8041F688[];
extern char lbl_80534FB8[];
void fn_802CDE38();
void *fn_802CDEA4();
}
extern "C" {
void fn_802CDE10(){
 fn_80066188((int)fn_802CDE38);
}
void fn_802CDE38(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FB8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802CDEA4,(int)lbl_8041F688,32,(int)fn_802CDD00,0,0,0);
}
void *fn_802CDEA4(){return fn_802CDCB4();}
}
#pragma pop
