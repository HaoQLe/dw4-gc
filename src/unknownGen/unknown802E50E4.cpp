#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E4FB4();
void fn_802E5000();
void fn_802E51A0();
extern char lbl_80420E98[];
extern char lbl_80535748[];
void fn_802E510C();
void *fn_802E5180();
}
extern "C" {
void fn_802E50E4(){
 fn_80066188((int)fn_802E510C);
}
void fn_802E510C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535748,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802E5180,(int)lbl_80420E98,36,(int)fn_802E5000,(int)fn_802E51A0,0,0);
}
void *fn_802E5180(){return fn_802E4FB4();}
}
#pragma pop
