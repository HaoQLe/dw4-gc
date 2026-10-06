#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CBDB0();
void fn_802CBDFC();
void fn_802CC034();
extern char lbl_8041F2D4[];
extern char lbl_80534F1C[];
extern void *lbl_80534F20;
void fn_802CBEC0();
void *fn_802CBF2C();
}
extern "C" {
void fn_802CBE98(){
 fn_80066188((int)fn_802CBEC0);
}
void fn_802CBEC0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F1C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CBF2C,(int)lbl_8041F2D4,12,(int)fn_802CBDFC,0,0,0);
}
void *fn_802CBF2C(){return fn_802CBDB0();}
void *fn_802CBF4C(){
 if(!lbl_80534F20 || !(reinterpret_cast<unsigned int *>(lbl_80534F20)[0x24/4]&4)) fn_802CC034();
 return lbl_80534F20;
}
}
#pragma pop
