#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DCDA0();
void fn_802DCDEC();
void fn_802DCF94();
extern char lbl_80420630[];
extern char lbl_804D2474[];
extern char lbl_80535460[];
void fn_802DCEF8();
void *fn_802DCF74();
}
extern "C" {
void fn_802DCED0(){
 fn_80066188((int)fn_802DCEF8);
}
void fn_802DCEF8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535460,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802DCF74,(int)lbl_80420630,16,(int)fn_802DCDEC,(int)fn_802DCF94,0,(int)lbl_804D2474);
}
void *fn_802DCF74(){return fn_802DCDA0();}
}
#pragma pop
