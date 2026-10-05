#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B8770();
void *fn_802C9B44();
void fn_802C9B90();
void fn_802C9CFC();
void fn_802E40FC();
extern char lbl_8041F090[];
extern char lbl_80534E38[];
void fn_802C9C68();
void *fn_802C9CDC();
}
extern "C" {
void fn_802C9C40(){
 fn_80066188((int)fn_802C9C68);
}
void fn_802C9C68(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E38,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802C9CDC,(int)lbl_8041F090,44,(int)fn_802C9B90,(int)fn_802C9CFC,0,0);
}
void *fn_802C9CDC(){return fn_802C9B44();}
}
#pragma pop
