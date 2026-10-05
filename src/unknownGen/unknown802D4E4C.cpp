#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802D4B5C();
void fn_802D4BA8();
void fn_802D4F10();
void fn_802E3908();
extern char lbl_8041FDA8[];
extern char lbl_804D1AE4[];
extern char lbl_805351C4[];
void fn_802D4E74();
void *fn_802D4EF0();
}
extern "C" {
void fn_802D4E4C(){
 fn_80066188((int)fn_802D4E74);
}
void fn_802D4E74(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351C4,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D4EF0,(int)lbl_8041FDA8,112,(int)fn_802D4BA8,(int)fn_802D4F10,0,(int)lbl_804D1AE4);
}
void *fn_802D4EF0(){return fn_802D4B5C();}
}
#pragma pop
