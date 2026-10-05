#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8003722C();
void fn_80037268();
void fn_800373EC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80467690[];
extern char lbl_8055D640[8];
extern void *lbl_80561DE8;
void fn_80037358();
void *fn_800373CC();
}
extern "C" {
void fn_80037330(){
 fn_80066188((int)fn_80037358);
}
void fn_80037358(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561DE8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800373CC,(int)lbl_80467690,20,(int)fn_80037268,(int)fn_800373EC,0,(int)lbl_8055D640);
}
void *fn_800373CC(){return fn_8003722C();}
}
#pragma pop
