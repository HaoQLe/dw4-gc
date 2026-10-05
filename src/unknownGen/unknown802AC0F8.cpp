#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802AA788();
void *fn_802AC064();
void fn_802AC0B0();
void fn_802AC1B4();
extern char lbl_8041BD54[];
extern char lbl_805343EC[];
void fn_802AC120();
void *fn_802AC194();
}
extern "C" {
void fn_802AC0F8(){
 fn_80066188((int)fn_802AC120);
}
void fn_802AC120(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343EC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802AC194,(int)lbl_8041BD54,28,(int)fn_802AC0B0,(int)fn_802AC1B4,0,0);
}
void *fn_802AC194(){return fn_802AC064();}
}
#pragma pop
