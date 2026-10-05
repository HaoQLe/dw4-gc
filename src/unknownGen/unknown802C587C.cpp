#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C570C();
void *fn_802C57DC();
void fn_802C5828();
void fn_802C5938();
void fn_802C5CE0();
extern char lbl_8041E99C[];
extern char lbl_80534C04[];
void fn_802C58A4();
void *fn_802C5918();
}
extern "C" {
void fn_802C587C(){
 fn_80066188((int)fn_802C58A4);
}
void fn_802C58A4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534C04,(int)fn_802C5CE0,(int)fn_802C570C,(int)fn_802C5918,(int)lbl_8041E99C,60,(int)fn_802C5828,(int)fn_802C5938,0,0);
}
void *fn_802C5918(){return fn_802C57DC();}
}
#pragma pop
