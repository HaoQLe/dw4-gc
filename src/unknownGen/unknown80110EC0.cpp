#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010EE6C();
void fn_8010F21C();
void *fn_80110CF4();
void fn_80110D30();
void fn_80110F7C();
extern char lbl_80494E7C[];
extern char lbl_8055F0A4[8];
extern void *lbl_805636E0;
void fn_80110EE8();
void *fn_80110F5C();
}
extern "C" {
void fn_80110EC0(){
 fn_80066188((int)fn_80110EE8);
}
void fn_80110EE8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805636E0,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_80110F5C,(int)lbl_80494E7C,184,(int)fn_80110D30,(int)fn_80110F7C,0,(int)lbl_8055F0A4);
}
void *fn_80110F5C(){return fn_80110CF4();}
}
#pragma pop
