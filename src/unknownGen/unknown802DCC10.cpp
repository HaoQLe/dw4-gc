#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DCAE0();
void fn_802DCB2C();
void fn_802DCCCC();
extern char lbl_80420620[];
extern char lbl_80535458[];
void fn_802DCC38();
void *fn_802DCCAC();
}
extern "C" {
void fn_802DCC10(){
 fn_80066188((int)fn_802DCC38);
}
void fn_802DCC38(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535458,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802DCCAC,(int)lbl_80420620,16,(int)fn_802DCB2C,(int)fn_802DCCCC,0,0);
}
void *fn_802DCCAC(){return fn_802DCAE0();}
}
#pragma pop
