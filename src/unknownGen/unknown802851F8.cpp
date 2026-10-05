#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80284294();
void *fn_802850DC();
void fn_80285128();
void fn_802852BC();
extern char lbl_80416A2C[];
extern char lbl_804CB094[];
extern char lbl_80515C94[];
void fn_80285220();
void *fn_8028529C();
}
extern "C" {
void fn_802851F8(){
 fn_80066188((int)fn_80285220);
}
void fn_80285220(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515C94,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028529C,(int)lbl_80416A2C,16,(int)fn_80285128,(int)fn_802852BC,0,(int)lbl_804CB094);
}
void *fn_8028529C(){return fn_802850DC();}
}
#pragma pop
