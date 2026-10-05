#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802C111C();
void fn_802C1168();
void fn_802C1334();
void fn_802E3908();
extern char lbl_8041E478[];
extern char lbl_80534A6C[];
void fn_802C12A0();
void *fn_802C1314();
}
extern "C" {
void fn_802C1278(){
 fn_80066188((int)fn_802C12A0);
}
void fn_802C12A0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A6C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802C1314,(int)lbl_8041E478,36,(int)fn_802C1168,(int)fn_802C1334,0,0);
}
void *fn_802C1314(){return fn_802C111C();}
}
#pragma pop
