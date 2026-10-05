#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_803301C4();
void fn_80330210();
void fn_80330644();
void fn_80333F14();
extern char lbl_80453A54[];
extern char lbl_804E1D8C[];
extern char lbl_80535EC0[];
void fn_803305A8();
void *fn_80330624();
}
extern "C" {
void fn_80330580(){
 fn_80066188((int)fn_803305A8);
}
void fn_803305A8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EC0,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80330624,(int)lbl_80453A54,104,(int)fn_80330210,(int)fn_80330644,0,(int)lbl_804E1D8C);
}
void *fn_80330624(){return fn_803301C4();}
}
#pragma pop
