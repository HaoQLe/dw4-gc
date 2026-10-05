#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AAF58();
void fn_802AAFA4();
void fn_802AB14C();
extern char lbl_8041BB84[];
extern char lbl_804CD978[];
extern char lbl_80534368[];
void fn_802AB0B0();
void *fn_802AB12C();
}
extern "C" {
void fn_802AB088(){
 fn_80066188((int)fn_802AB0B0);
}
void fn_802AB0B0(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534368,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802AB12C,(int)lbl_8041BB84,16,(int)fn_802AAFA4,(int)fn_802AB14C,0,(int)lbl_804CD978);
}
void *fn_802AB12C(){return fn_802AAF58();}
}
#pragma pop
