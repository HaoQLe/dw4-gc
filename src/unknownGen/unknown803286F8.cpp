#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80325C6C();
void *fn_803286AC();
void *fn_803287A8();
extern char lbl_80453514[];
extern char lbl_80535D60[];
void fn_80328720();
void *fn_80328788();
}
extern "C" {
void fn_803286F8(){
 fn_80066188((int)fn_80328720);
}
void fn_80328720(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80535D60,(int)fn_80325C6C,(int)fn_803287A8,(int)fn_80328788,(int)lbl_80453514,80,0,0,0,0);
}
void *fn_80328788(){return fn_803286AC();}
}
#pragma pop
