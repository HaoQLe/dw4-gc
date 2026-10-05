#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80336370();
void fn_803363BC();
void fn_803365D8();
extern char lbl_8045407C[];
extern char lbl_804E23C4[];
extern char lbl_80536090[];
void fn_8033653C();
void *fn_803365B8();
}
extern "C" {
void fn_80336514(){
 fn_80066188((int)fn_8033653C);
}
void fn_8033653C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536090,(int)fn_802E3908,(int)fn_802B381C,(int)fn_803365B8,(int)lbl_8045407C,36,(int)fn_803363BC,(int)fn_803365D8,0,(int)lbl_804E23C4);
}
void *fn_803365B8(){return fn_80336370();}
}
#pragma pop
