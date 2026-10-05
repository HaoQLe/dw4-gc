#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C570C();
void *fn_802C59F8();
void fn_802C5A44();
void fn_802C5BD8();
void fn_802C5CE0();
extern char lbl_8041E9EC[];
extern char lbl_80534C20[];
void fn_802C5B44();
void *fn_802C5BB8();
}
extern "C" {
void fn_802C5B1C(){
 fn_80066188((int)fn_802C5B44);
}
void fn_802C5B44(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534C20,(int)fn_802C5CE0,(int)fn_802C570C,(int)fn_802C5BB8,(int)lbl_8041E9EC,60,(int)fn_802C5A44,(int)fn_802C5BD8,0,0);
}
void *fn_802C5BB8(){return fn_802C59F8();}
}
#pragma pop
