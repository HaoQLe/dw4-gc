#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_802842C8();
void fn_80284314();
extern char lbl_80416910[];
extern char lbl_804CAFD8[];
extern char lbl_80515C54[];
void fn_802843B0();
void *fn_80284424();
}
extern "C" {
void fn_80284388(){
 fn_80066188((int)fn_802843B0);
}
void fn_802843B0(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515C54,(int)fn_8002907C,(int)fn_80024180,(int)fn_80284424,(int)lbl_80416910,20,(int)fn_80284314,0,0,(int)lbl_804CAFD8);
}
void *fn_80284424(){return fn_802842C8();}
}
#pragma pop
