#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802E1D74();
void fn_802E1DC0();
void fn_802E1FF4();
extern char lbl_80420B08[];
extern char lbl_804D2A60[];
extern char lbl_8053561C[];
void fn_802E1F58();
void *fn_802E1FD4();
}
extern "C" {
void fn_802E1F30(){
 fn_80066188((int)fn_802E1F58);
}
void fn_802E1F58(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053561C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802E1FD4,(int)lbl_80420B08,28,(int)fn_802E1DC0,(int)fn_802E1FF4,0,(int)lbl_804D2A60);
}
void *fn_802E1FD4(){return fn_802E1D74();}
}
#pragma pop
