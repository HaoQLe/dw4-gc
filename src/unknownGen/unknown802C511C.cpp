#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802C4F38();
void fn_802C4F84();
void fn_802C51E0();
void fn_802E3908();
extern char lbl_8041E938[];
extern char lbl_804D0588[];
extern char lbl_80534BE4[];
void fn_802C5144();
void *fn_802C51C0();
}
extern "C" {
void fn_802C511C(){
 fn_80066188((int)fn_802C5144);
}
void fn_802C5144(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BE4,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802C51C0,(int)lbl_8041E938,40,(int)fn_802C4F84,(int)fn_802C51E0,0,(int)lbl_804D0588);
}
void *fn_802C51C0(){return fn_802C4F38();}
}
#pragma pop
