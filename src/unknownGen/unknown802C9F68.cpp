#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B8770();
void *fn_802C9E1C();
void fn_802C9E68();
void fn_802CA02C();
void fn_802E40FC();
extern char lbl_8041F110[];
extern char lbl_804D0E24[];
extern char lbl_80534E60[];
void fn_802C9F90();
void *fn_802CA00C();
}
extern "C" {
void fn_802C9F68(){
 fn_80066188((int)fn_802C9F90);
}
void fn_802C9F90(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E60,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802CA00C,(int)lbl_8041F110,20,(int)fn_802C9E68,(int)fn_802CA02C,0,(int)lbl_804D0E24);
}
void *fn_802CA00C(){return fn_802C9E1C();}
}
#pragma pop
