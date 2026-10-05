#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_80329AB8();
void fn_80329B04();
void fn_8032A928();
extern char lbl_804535C4[];
extern char lbl_80535D84[];
void fn_80329C28();
void *fn_80329C94();
}
extern "C" {
void fn_80329C00(){
 fn_80066188((int)fn_80329C28);
}
void fn_80329C28(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D84,(int)fn_8032A928,(int)fn_80328C10,(int)fn_80329C94,(int)lbl_804535C4,112,(int)fn_80329B04,0,0,0);
}
void *fn_80329C94(){return fn_80329AB8();}
}
#pragma pop
