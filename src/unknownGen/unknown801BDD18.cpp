#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801BDBDC();
void fn_801BDC18();
void fn_801BDDD4();
extern char lbl_804AF2A0[];
extern char lbl_8056055C[8];
extern void *lbl_80564E5C;
void fn_801BDD40();
void *fn_801BDDB4();
}
extern "C" {
void fn_801BDD18(){
 fn_80066188((int)fn_801BDD40);
}
void fn_801BDD40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E5C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BDDB4,(int)lbl_8056055C,20,(int)fn_801BDC18,(int)fn_801BDDD4,0,(int)lbl_804AF2A0);
}
void *fn_801BDDB4(){return fn_801BDBDC();}
}
#pragma pop
