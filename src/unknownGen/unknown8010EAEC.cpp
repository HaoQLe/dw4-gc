#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010E9B0();
void fn_8010E9EC();
void fn_8010EBAC();
extern char lbl_80494918[];
extern char lbl_80494928[];
extern void *lbl_805635FC;
void fn_8010EB14();
void *fn_8010EB8C();
}
extern "C" {
void fn_8010EAEC(){
 fn_80066188((int)fn_8010EB14);
}
void fn_8010EB14(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635FC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010EB8C,(int)lbl_80494928,32,(int)fn_8010E9EC,(int)fn_8010EBAC,0,(int)lbl_80494918);
}
void *fn_8010EB8C(){return fn_8010E9B0();}
}
#pragma pop
