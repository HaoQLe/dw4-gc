#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802E7580();
void fn_802E75CC();
void fn_802E7790();
extern char lbl_80421120[];
extern char lbl_804D31F0[];
extern char lbl_80535830[];
void fn_802E76F4();
void *fn_802E7770();
}
extern "C" {
void fn_802E76CC(){
 fn_80066188((int)fn_802E76F4);
}
void fn_802E76F4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535830,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802E7770,(int)lbl_80421120,20,(int)fn_802E75CC,(int)fn_802E7790,0,(int)lbl_804D31F0);
}
void *fn_802E7770(){return fn_802E7580();}
}
#pragma pop
