#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802B4F38();
void fn_802B4F84();
void fn_802E3908();
extern char lbl_8041CD18[];
extern char lbl_80534620[];
void fn_802B50BC();
void *fn_802B5128();
}
extern "C" {
void fn_802B5094(){
 fn_80066188((int)fn_802B50BC);
}
void fn_802B50BC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534620,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B5128,(int)lbl_8041CD18,32,(int)fn_802B4F84,0,0,0);
}
void *fn_802B5128(){return fn_802B4F38();}
}
#pragma pop
