#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void *fn_802B4164();
void fn_802B41B0();
void fn_802B4430();
void fn_802E3284();
extern char lbl_8041CB18[];
extern char lbl_804CEE5C[];
extern char lbl_8053457C[];
void fn_802B4394();
void *fn_802B4410();
}
extern "C" {
void fn_802B436C(){
 fn_80066188((int)fn_802B4394);
}
void fn_802B4394(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053457C,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802B4410,(int)lbl_8041CB18,184,(int)fn_802B41B0,(int)fn_802B4430,0,(int)lbl_804CEE5C);
}
void *fn_802B4410(){return fn_802B4164();}
}
#pragma pop
