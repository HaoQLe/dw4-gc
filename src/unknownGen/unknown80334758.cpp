#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_803345BC();
void fn_80334608();
extern char lbl_80453E20[];
extern char lbl_80535FCC[];
void fn_80334780();
void *fn_803347EC();
}
extern "C" {
void fn_80334758(){
 fn_80066188((int)fn_80334780);
}
void fn_80334780(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FCC,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_803347EC,(int)lbl_80453E20,28,(int)fn_80334608,0,0,0);
}
void *fn_803347EC(){return fn_803345BC();}
}
#pragma pop
