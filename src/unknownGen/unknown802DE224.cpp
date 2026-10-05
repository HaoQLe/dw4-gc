#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802DE040();
void fn_802DE08C();
void fn_802DE2E8();
void fn_802E3D20();
extern char lbl_80420748[];
extern char lbl_804D25A8[];
extern char lbl_805354B8[];
void fn_802DE24C();
void *fn_802DE2C8();
}
extern "C" {
void fn_802DE224(){
 fn_80066188((int)fn_802DE24C);
}
void fn_802DE24C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354B8,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802DE2C8,(int)lbl_80420748,32,(int)fn_802DE08C,(int)fn_802DE2E8,0,(int)lbl_804D25A8);
}
void *fn_802DE2C8(){return fn_802DE040();}
}
#pragma pop
