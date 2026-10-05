#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80285E14();
void fn_802AD8A0();
void fn_802B1AC8();
void *fn_802B1AFC();
void fn_802B1B48();
void fn_802B24EC();
extern char lbl_8041C7E8[];
extern char lbl_804CEA80[];
extern char lbl_80534498[];
void fn_802B2450();
void *fn_802B24CC();
}
extern "C" {
void fn_802B2428(){
 fn_80066188((int)fn_802B2450);
}
void fn_802B2450(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534498,(int)fn_80285E14,(int)fn_802AD8A0,(int)fn_802B24CC,(int)lbl_8041C7E8,164,(int)fn_802B1B48,(int)fn_802B24EC,0,(int)lbl_804CEA80);
}
void *fn_802B24CC(){return fn_802B1AFC();}
}
#pragma pop
