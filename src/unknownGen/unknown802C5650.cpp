#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C556C();
void fn_802C55B8();
void fn_802C570C();
void fn_802C571C();
void fn_802C5CE0();
extern char lbl_8041E970[];
extern char lbl_80534BF8[];
void fn_802C5678();
void *fn_802C56EC();
}
extern "C" {
void fn_802C5650(){
 fn_80066188((int)fn_802C5678);
}
void fn_802C5678(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BF8,(int)fn_802C5CE0,(int)fn_802C570C,(int)fn_802C56EC,(int)lbl_8041E970,32,(int)fn_802C55B8,(int)fn_802C571C,0,0);
}
void *fn_802C56EC(){return fn_802C556C();}
}
#pragma pop
