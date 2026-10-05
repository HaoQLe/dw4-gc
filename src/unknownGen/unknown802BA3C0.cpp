#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
void *fn_802BA200();
void fn_802BA24C();
void fn_802BA484();
void fn_802E40FC();
extern char lbl_8041D8FC[];
extern char lbl_804CF6C8[];
extern char lbl_805347B8[];
void fn_802BA3E8();
void *fn_802BA464();
}
extern "C" {
void fn_802BA3C0(){
 fn_80066188((int)fn_802BA3E8);
}
void fn_802BA3E8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347B8,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802BA464,(int)lbl_8041D8FC,32,(int)fn_802BA24C,(int)fn_802BA484,0,(int)lbl_804CF6C8);
}
void *fn_802BA464(){return fn_802BA200();}
}
#pragma pop
