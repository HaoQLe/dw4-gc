#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E4B54();
void fn_802E4BA0();
void *fn_802E4D54();
void fn_802E4D64();
void fn_802E510C();
extern char lbl_80420E68[];
extern char lbl_8053573C[];
void fn_802E4CC0();
void *fn_802E4D34();
}
extern "C" {
void fn_802E4C98(){
 fn_80066188((int)fn_802E4CC0);
}
void fn_802E4CC0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053573C,(int)fn_802E510C,(int)fn_802E4D54,(int)fn_802E4D34,(int)lbl_80420E68,48,(int)fn_802E4BA0,(int)fn_802E4D64,0,0);
}
void *fn_802E4D34(){return fn_802E4B54();}
}
#pragma pop
