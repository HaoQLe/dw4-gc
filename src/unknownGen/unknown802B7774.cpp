#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802B7460();
void fn_802B74AC();
void fn_802B7838();
extern char lbl_8041D444[];
extern char lbl_804CF274[];
extern char lbl_805346A8[];
void fn_802B779C();
void *fn_802B7818();
}
extern "C" {
void fn_802B7774(){
 fn_80066188((int)fn_802B779C);
}
void fn_802B779C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805346A8,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802B7818,(int)lbl_8041D444,104,(int)fn_802B74AC,(int)fn_802B7838,0,(int)lbl_804CF274);
}
void *fn_802B7818(){return fn_802B7460();}
}
#pragma pop
