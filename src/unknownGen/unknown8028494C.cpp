#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80284294();
void *fn_80284874();
void fn_802848C0();
void fn_80284A10();
extern char lbl_804169C8[];
extern char lbl_804CB06C[];
extern char lbl_80515C7C[];
void fn_80284974();
void *fn_802849F0();
}
extern "C" {
void fn_8028494C(){
 fn_80066188((int)fn_80284974);
}
void fn_80284974(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515C7C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802849F0,(int)lbl_804169C8,12,(int)fn_802848C0,(int)fn_80284A10,0,(int)lbl_804CB06C);
}
void *fn_802849F0(){return fn_80284874();}
}
#pragma pop
