#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CC4F0();
void fn_802CC53C();
void fn_802CC7BC();
extern char lbl_8041F320[];
extern char lbl_80534F30[];
extern void *lbl_80534F34;
void fn_802CC600();
void *fn_802CC66C();
}
extern "C" {
void fn_802CC5D8(){
 fn_80066188((int)fn_802CC600);
}
void fn_802CC600(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F30,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CC66C,(int)lbl_8041F320,12,(int)fn_802CC53C,0,0,0);
}
void *fn_802CC66C(){return fn_802CC4F0();}
void *fn_802CC68C(){
 if(!lbl_80534F34 || !(reinterpret_cast<unsigned int *>(lbl_80534F34)[0x24/4]&4)) fn_802CC7BC();
 return lbl_80534F34;
}
}
#pragma pop
