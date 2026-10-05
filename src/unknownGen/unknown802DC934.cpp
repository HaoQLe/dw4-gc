#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DC804();
void fn_802DC850();
void fn_802DC9F8();
extern char lbl_8042060C[];
extern char lbl_804D244C[];
extern char lbl_80535450[];
void fn_802DC95C();
void *fn_802DC9D8();
}
extern "C" {
void fn_802DC934(){
 fn_80066188((int)fn_802DC95C);
}
void fn_802DC95C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535450,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802DC9D8,(int)lbl_8042060C,16,(int)fn_802DC850,(int)fn_802DC9F8,0,(int)lbl_804D244C);
}
void *fn_802DC9D8(){return fn_802DC804();}
}
#pragma pop
