#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CB160();
void fn_802CB1AC();
void fn_802CB3E4();
extern char lbl_8041F254[];
extern char lbl_80534ED4[];
extern void *lbl_80534ED8;
void fn_802CB270();
void *fn_802CB2DC();
}
extern "C" {
void fn_802CB248(){
 fn_80066188((int)fn_802CB270);
}
void fn_802CB270(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534ED4,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CB2DC,(int)lbl_8041F254,12,(int)fn_802CB1AC,0,0,0);
}
void *fn_802CB2DC(){return fn_802CB160();}
void *fn_802CB2FC(){
 if(!lbl_80534ED8 || !(reinterpret_cast<unsigned int *>(lbl_80534ED8)[0x24/4]&4)) fn_802CB3E4();
 return lbl_80534ED8;
}
}
#pragma pop
