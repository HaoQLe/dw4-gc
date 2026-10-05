#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B8770();
void *fn_802D8D24();
void fn_802D8D70();
void fn_802D8F74();
void fn_802E40FC();
extern char lbl_8042024C[];
extern char lbl_804D1FB0[];
extern char lbl_80535318[];
void fn_802D8ED8();
void *fn_802D8F54();
}
extern "C" {
void fn_802D8EB0(){
 fn_80066188((int)fn_802D8ED8);
}
void fn_802D8ED8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535318,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802D8F54,(int)lbl_8042024C,44,(int)fn_802D8D70,(int)fn_802D8F74,0,(int)lbl_804D1FB0);
}
void *fn_802D8F54(){return fn_802D8D24();}
}
#pragma pop
