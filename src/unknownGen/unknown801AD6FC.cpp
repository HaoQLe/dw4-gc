#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AD5B4();
void fn_801AD5F0();
void fn_801AD7C4();
void fn_801B09E4();
extern char lbl_804ABC18[];
extern char lbl_804ABC24[];
extern void *lbl_8056475C;
extern void *lbl_805648D0;
void fn_801AD724();
void *fn_801AD79C();
void *fn_801AD7BC();
}
extern "C" {
void fn_801AD6FC(){
 fn_80066188((int)fn_801AD724);
}
void fn_801AD724(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056475C,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801AD79C,(int)lbl_804ABC24,80,(int)fn_801AD5F0,(int)fn_801AD7C4,0,(int)lbl_804ABC18);
}
void *fn_801AD79C(){return fn_801AD5B4();}
void *fn_801AD7BC(){return lbl_805648D0;}
}
#pragma pop
