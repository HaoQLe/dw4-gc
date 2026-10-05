#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_8032AA60();
void fn_8032AAAC();
extern char lbl_804536B4[];
extern char lbl_80535DBC[];
void fn_8032AC24();
void *fn_8032AC90();
}
extern "C" {
void fn_8032ABFC(){
 fn_80066188((int)fn_8032AC24);
}
void fn_8032AC24(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DBC,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_8032AC90,(int)lbl_804536B4,28,(int)fn_8032AAAC,0,0,0);
}
void *fn_8032AC90(){return fn_8032AA60();}
}
#pragma pop
