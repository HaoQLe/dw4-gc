#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2B2C();
void *fn_802E0C68();
void fn_802E0CB4();
void fn_802E0E5C();
void fn_802E3284();
extern char lbl_80420A3C[];
extern char lbl_804D2958[];
extern char lbl_805355CC[];
void fn_802E0DC0();
void *fn_802E0E3C();
}
extern "C" {
void fn_802E0D98(){
 fn_80066188((int)fn_802E0DC0);
}
void fn_802E0DC0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355CC,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802E0E3C,(int)lbl_80420A3C,48,(int)fn_802E0CB4,(int)fn_802E0E5C,0,(int)lbl_804D2958);
}
void *fn_802E0E3C(){return fn_802E0C68();}
}
#pragma pop
