#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010FE74();
void fn_8010FEB0();
void fn_8010FFF4();
extern char lbl_80494C30[];
extern char lbl_8055F05C[8];
extern void *lbl_8056368C;
void fn_8010FF60();
void *fn_8010FFD4();
}
extern "C" {
void fn_8010FF38(){
 fn_80066188((int)fn_8010FF60);
}
void fn_8010FF60(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056368C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010FFD4,(int)lbl_80494C30,20,(int)fn_8010FEB0,(int)fn_8010FFF4,0,(int)lbl_8055F05C);
}
void *fn_8010FFD4(){return fn_8010FE74();}
}
#pragma pop
