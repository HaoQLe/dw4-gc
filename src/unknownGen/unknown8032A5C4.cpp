#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_8032A47C();
void fn_8032A4C8();
void fn_8032A928();
extern char lbl_80453628[];
extern char lbl_80535D98[];
void fn_8032A5EC();
void *fn_8032A658();
}
extern "C" {
void fn_8032A5C4(){
 fn_80066188((int)fn_8032A5EC);
}
void fn_8032A5EC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D98,(int)fn_8032A928,(int)fn_80328C10,(int)fn_8032A658,(int)lbl_80453628,112,(int)fn_8032A4C8,0,0,0);
}
void *fn_8032A658(){return fn_8032A47C();}
}
#pragma pop
