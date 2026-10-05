#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010F4FC();
void fn_80112DF0();
void fn_80402E28();
void *fn_80407CA4();
void fn_80407CF0();
void fn_80407ECC();
extern char lbl_804629E0[];
extern char lbl_804F0CA8[];
extern char lbl_8055CA64[];
void fn_80407E30();
void *fn_80407EAC();
}
extern "C" {
void fn_80407E08(){
 fn_80066188((int)fn_80407E30);
}
void fn_80407E30(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA64,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_80407EAC,(int)lbl_804629E0,84,(int)fn_80407CF0,(int)fn_80407ECC,0,(int)lbl_804F0CA8);
}
void *fn_80407EAC(){return fn_80407CA4();}
}
#pragma pop
