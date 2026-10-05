#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80334118();
void fn_80334164();
void fn_80334380();
extern char lbl_80453DD0[];
extern char lbl_804E20EC[];
extern char lbl_80535FB8[];
void fn_803342E4();
void *fn_80334360();
}
extern "C" {
void fn_803342BC(){
 fn_80066188((int)fn_803342E4);
}
void fn_803342E4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FB8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_80334360,(int)lbl_80453DD0,44,(int)fn_80334164,(int)fn_80334380,0,(int)lbl_804E20EC);
}
void *fn_80334360(){return fn_80334118();}
}
#pragma pop
