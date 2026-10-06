#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CAFC4();
void fn_802CB010();
void fn_802CB248();
extern char lbl_8041F240[];
extern char lbl_80534ED0[];
extern void *lbl_80534ED4;
void fn_802CB0D4();
void *fn_802CB140();
}
extern "C" {
void fn_802CB0AC(){
 fn_80066188((int)fn_802CB0D4);
}
void fn_802CB0D4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534ED0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CB140,(int)lbl_8041F240,12,(int)fn_802CB010,0,0,0);
}
void *fn_802CB140(){return fn_802CAFC4();}
void *fn_802CB160(){
 if(!lbl_80534ED4 || !(reinterpret_cast<unsigned int *>(lbl_80534ED4)[0x24/4]&4)) fn_802CB248();
 return lbl_80534ED4;
}
}
#pragma pop
