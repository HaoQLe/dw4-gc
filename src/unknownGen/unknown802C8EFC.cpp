#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
void *fn_802C8CFC();
void fn_802C8D48();
void fn_802C8FC0();
void fn_802E40FC();
extern char lbl_8041EFBC[];
extern char lbl_804D0D00[];
extern char lbl_80534DF8[];
void fn_802C8F24();
void *fn_802C8FA0();
}
extern "C" {
void fn_802C8EFC(){
 fn_80066188((int)fn_802C8F24);
}
void fn_802C8F24(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DF8,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802C8FA0,(int)lbl_8041EFBC,24,(int)fn_802C8D48,(int)fn_802C8FC0,0,(int)lbl_804D0D00);
}
void *fn_802C8FA0(){return fn_802C8CFC();}
}
#pragma pop
