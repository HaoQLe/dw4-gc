#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010E6DC();
void *fn_80110464();
void fn_801104A0();
void fn_80110668();
extern char lbl_80494CE4[];
extern char lbl_8055F08C[8];
extern void *lbl_805636AC;
void fn_801105D4();
void *fn_80110648();
}
extern "C" {
void fn_801105AC(){
 fn_80066188((int)fn_801105D4);
}
void fn_801105D4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805636AC,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80110648,(int)lbl_80494CE4,24,(int)fn_801104A0,(int)fn_80110668,0,(int)lbl_8055F08C);
}
void *fn_80110648(){return fn_80110464();}
}
#pragma pop
