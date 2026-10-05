#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_80334B98();
void fn_80334BE4();
extern char lbl_80453E7C[];
extern char lbl_80535FDC[];
void fn_80334D5C();
void *fn_80334DC8();
}
extern "C" {
void fn_80334D34(){
 fn_80066188((int)fn_80334D5C);
}
void fn_80334D5C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FDC,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_80334DC8,(int)lbl_80453E7C,28,(int)fn_80334BE4,0,0,0);
}
void *fn_80334DC8(){return fn_80334B98();}
}
#pragma pop
