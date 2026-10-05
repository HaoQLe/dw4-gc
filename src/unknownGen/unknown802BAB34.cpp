#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802BA9D8();
void fn_802BAA24();
void fn_802BABF8();
void fn_802E3908();
extern char lbl_8041D9D0[];
extern char lbl_804CF7A0[];
extern char lbl_805347EC[];
void fn_802BAB5C();
void *fn_802BABD8();
}
extern "C" {
void fn_802BAB34(){
 fn_80066188((int)fn_802BAB5C);
}
void fn_802BAB5C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347EC,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802BABD8,(int)lbl_8041D9D0,40,(int)fn_802BAA24,(int)fn_802BABF8,0,(int)lbl_804CF7A0);
}
void *fn_802BABD8(){return fn_802BA9D8();}
}
#pragma pop
