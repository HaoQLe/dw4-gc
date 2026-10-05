#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80326874();
void fn_803268C0();
void fn_80326B1C();
extern char lbl_80453440[];
extern char lbl_804E197C[];
extern char lbl_80535D2C[];
void fn_80326A80();
void *fn_80326AFC();
}
extern "C" {
void fn_80326A58(){
 fn_80066188((int)fn_80326A80);
}
void fn_80326A80(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D2C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_80326AFC,(int)lbl_80453440,52,(int)fn_803268C0,(int)fn_80326B1C,0,(int)lbl_804E197C);
}
void *fn_80326AFC(){return fn_80326874();}
}
#pragma pop
