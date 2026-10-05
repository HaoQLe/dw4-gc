#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80029C6C();
void fn_80029CA8();
void fn_80029DE8();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_8046428C[];
extern void *lbl_80561744;
void fn_80029D58();
void *fn_80029DC8();
}
extern "C" {
void fn_80029D30(){
 fn_80066188((int)fn_80029D58);
}
void fn_80029D58(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561744,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80029DC8,(int)lbl_8046428C,12,(int)fn_80029CA8,(int)fn_80029DE8,0,0);
}
void *fn_80029DC8(){return fn_80029C6C();}
}
#pragma pop
