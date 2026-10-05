#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2B2C();
void *fn_802D6C8C();
void fn_802D6CD8();
void fn_802D6EF4();
void fn_802E3284();
extern char lbl_80420014[];
extern char lbl_804D1D80[];
extern char lbl_80535280[];
void fn_802D6E58();
void *fn_802D6ED4();
}
extern "C" {
void fn_802D6E30(){
 fn_80066188((int)fn_802D6E58);
}
void fn_802D6E58(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535280,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802D6ED4,(int)lbl_80420014,48,(int)fn_802D6CD8,(int)fn_802D6EF4,0,(int)lbl_804D1D80);
}
void *fn_802D6ED4(){return fn_802D6C8C();}
}
#pragma pop
