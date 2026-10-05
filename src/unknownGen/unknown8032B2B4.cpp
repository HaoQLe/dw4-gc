#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_8032B04C();
void fn_8032B098();
void fn_8032B378();
extern char lbl_804536E4[];
extern char lbl_804E1A70[];
extern char lbl_80535DC8[];
void fn_8032B2DC();
void *fn_8032B358();
}
extern "C" {
void fn_8032B2B4(){
 fn_80066188((int)fn_8032B2DC);
}
void fn_8032B2DC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DC8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8032B358,(int)lbl_804536E4,36,(int)fn_8032B098,(int)fn_8032B378,0,(int)lbl_804E1A70);
}
void *fn_8032B358(){return fn_8032B04C();}
}
#pragma pop
