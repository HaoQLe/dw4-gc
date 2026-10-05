#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802DB10C();
void fn_802DB158();
void fn_802DB35C();
extern char lbl_804204E8[];
extern char lbl_804D22E0[];
extern char lbl_805353E4[];
void fn_802DB2C0();
void *fn_802DB33C();
}
extern "C" {
void fn_802DB298(){
 fn_80066188((int)fn_802DB2C0);
}
void fn_802DB2C0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805353E4,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802DB33C,(int)lbl_804204E8,36,(int)fn_802DB158,(int)fn_802DB35C,0,(int)lbl_804D22E0);
}
void *fn_802DB33C(){return fn_802DB10C();}
}
#pragma pop
