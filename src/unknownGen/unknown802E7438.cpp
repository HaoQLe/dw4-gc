#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void fn_802E3908();
void *fn_802E72DC();
void fn_802E7328();
extern char lbl_80421114[];
extern char lbl_8053582C[];
void fn_802E7460();
void *fn_802E74CC();
}
extern "C" {
void fn_802E7438(){
 fn_80066188((int)fn_802E7460);
}
void fn_802E7460(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053582C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E74CC,(int)lbl_80421114,32,(int)fn_802E7328,0,0,0);
}
void *fn_802E74CC(){return fn_802E72DC();}
}
#pragma pop
