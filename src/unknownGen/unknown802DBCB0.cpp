#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DBB14();
void fn_802DBB60();
void fn_802DBD6C();
extern char lbl_804205A4[];
extern char lbl_80535418[];
void fn_802DBCD8();
void *fn_802DBD4C();
}
extern "C" {
void fn_802DBCB0(){
 fn_80066188((int)fn_802DBCD8);
}
void fn_802DBCD8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535418,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DBD4C,(int)lbl_804205A4,48,(int)fn_802DBB60,(int)fn_802DBD6C,0,0);
}
void *fn_802DBD4C(){return fn_802DBB14();}
}
#pragma pop
