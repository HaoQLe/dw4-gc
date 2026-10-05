#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void fn_802E3908();
void *fn_802E52B4();
void fn_802E5300();
extern char lbl_80420EAC[];
extern char lbl_80535760[];
void fn_802E5438();
void *fn_802E54A4();
}
extern "C" {
void fn_802E5410(){
 fn_80066188((int)fn_802E5438);
}
void fn_802E5438(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535760,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E54A4,(int)lbl_80420EAC,32,(int)fn_802E5300,0,0,0);
}
void *fn_802E54A4(){return fn_802E52B4();}
}
#pragma pop
