#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803287F8();
void fn_80328844();
void fn_80328C10();
void fn_8032A928();
extern char lbl_80453528[];
extern char lbl_80535D64[];
void fn_80328B84();
void *fn_80328BF0();
}
extern "C" {
void fn_80328B5C(){
 fn_80066188((int)fn_80328B84);
}
void fn_80328B84(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D64,(int)fn_8032A928,(int)fn_80328C10,(int)fn_80328BF0,(int)lbl_80453528,112,(int)fn_80328844,0,0,0);
}
void *fn_80328BF0(){return fn_803287F8();}
}
#pragma pop
