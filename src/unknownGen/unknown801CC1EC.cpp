#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801CC0B0();
void fn_801CC0EC();
void fn_801CC2AC();
extern char lbl_804B25CC[];
extern char lbl_804B25DC[];
extern void *lbl_805654F4;
void fn_801CC214();
void *fn_801CC28C();
}
extern "C" {
void fn_801CC1EC(){
 fn_80066188((int)fn_801CC214);
}
void fn_801CC214(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805654F4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CC28C,(int)lbl_804B25DC,28,(int)fn_801CC0EC,(int)fn_801CC2AC,0,(int)lbl_804B25CC);
}
void *fn_801CC28C(){return fn_801CC0B0();}
}
#pragma pop
