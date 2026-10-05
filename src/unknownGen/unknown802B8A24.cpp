#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802B8820();
void fn_802B886C();
void fn_802B8AE8();
void fn_802E3D20();
extern char lbl_8041D658[];
extern char lbl_804CF498[];
extern char lbl_80534740[];
void fn_802B8A4C();
void *fn_802B8AC8();
}
extern "C" {
void fn_802B8A24(){
 fn_80066188((int)fn_802B8A4C);
}
void fn_802B8A4C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534740,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B8AC8,(int)lbl_8041D658,40,(int)fn_802B886C,(int)fn_802B8AE8,0,(int)lbl_804CF498);
}
void *fn_802B8AC8(){return fn_802B8820();}
}
#pragma pop
