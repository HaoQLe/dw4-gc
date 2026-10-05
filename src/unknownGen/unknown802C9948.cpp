#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
void *fn_802C97FC();
void fn_802C9848();
void fn_802C9A0C();
void fn_802E40FC();
extern char lbl_8041F024[];
extern char lbl_804D0D5C[];
extern char lbl_80534E20[];
void fn_802C9970();
void *fn_802C99EC();
}
extern "C" {
void fn_802C9948(){
 fn_80066188((int)fn_802C9970);
}
void fn_802C9970(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E20,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802C99EC,(int)lbl_8041F024,28,(int)fn_802C9848,(int)fn_802C9A0C,0,(int)lbl_804D0D5C);
}
void *fn_802C99EC(){return fn_802C97FC();}
}
#pragma pop
