#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DC24C();
void fn_802DC298();
void fn_802DC440();
extern char lbl_804205E4[];
extern char lbl_804D241C[];
extern char lbl_80535440[];
void fn_802DC3A4();
void *fn_802DC420();
}
extern "C" {
void fn_802DC37C(){
 fn_80066188((int)fn_802DC3A4);
}
void fn_802DC3A4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535440,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802DC420,(int)lbl_804205E4,16,(int)fn_802DC298,(int)fn_802DC440,0,(int)lbl_804D241C);
}
void *fn_802DC420(){return fn_802DC24C();}
}
#pragma pop
