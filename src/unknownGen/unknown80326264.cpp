#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_80326168();
void fn_803261B4();
void fn_80326328();
extern char lbl_80453340[];
extern char lbl_804E1844[];
extern char lbl_80535CD0[];
void fn_8032628C();
void *fn_80326308();
}
extern "C" {
void fn_80326264(){
 fn_80066188((int)fn_8032628C);
}
void fn_8032628C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535CD0,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_80326308,(int)lbl_80453340,56,(int)fn_803261B4,(int)fn_80326328,0,(int)lbl_804E1844);
}
void *fn_80326308(){return fn_80326168();}
}
#pragma pop
