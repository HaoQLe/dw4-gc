#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_80340D38();
void fn_80340D84();
void fn_80340EF8();
extern char lbl_80454F8C[];
extern char lbl_804E3A78[];
extern char lbl_8053666C[];
void fn_80340E5C();
void *fn_80340ED8();
}
extern "C" {
void fn_80340E34(){
 fn_80066188((int)fn_80340E5C);
}
void fn_80340E5C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053666C,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_80340ED8,(int)lbl_80454F8C,64,(int)fn_80340D84,(int)fn_80340EF8,0,(int)lbl_804E3A78);
}
void *fn_80340ED8(){return fn_80340D38();}
}
#pragma pop
