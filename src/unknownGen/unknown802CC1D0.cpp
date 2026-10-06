#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CC0E8();
void fn_802CC134();
void fn_802CC3B4();
extern char lbl_8041F2F4[];
extern char lbl_80534F24[];
extern void *lbl_80534F28;
void fn_802CC1F8();
void *fn_802CC264();
}
extern "C" {
void fn_802CC1D0(){
 fn_80066188((int)fn_802CC1F8);
}
void fn_802CC1F8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F24,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CC264,(int)lbl_8041F2F4,12,(int)fn_802CC134,0,0,0);
}
void *fn_802CC264(){return fn_802CC0E8();}
void *fn_802CC284(){
 if(!lbl_80534F28 || !(reinterpret_cast<unsigned int *>(lbl_80534F28)[0x24/4]&4)) fn_802CC3B4();
 return lbl_80534F28;
}
}
#pragma pop
