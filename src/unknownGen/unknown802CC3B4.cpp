#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CC284();
void fn_802CC2D0();
void fn_802CC470();
extern char lbl_8041F308[];
extern char lbl_80534F28[];
void fn_802CC3DC();
void *fn_802CC450();
}
extern "C" {
void fn_802CC3B4(){
 fn_80066188((int)fn_802CC3DC);
}
void fn_802CC3DC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F28,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CC450,(int)lbl_8041F308,16,(int)fn_802CC2D0,(int)fn_802CC470,0,0);
}
void *fn_802CC450(){return fn_802CC284();}
}
#pragma pop
