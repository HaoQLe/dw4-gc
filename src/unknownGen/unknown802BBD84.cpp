#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802BBBE8();
void fn_802BBC34();
void fn_802E3D20();
extern char lbl_8041DA74[];
extern char lbl_80534828[];
void fn_802BBDAC();
void *fn_802BBE18();
}
extern "C" {
void fn_802BBD84(){
 fn_80066188((int)fn_802BBDAC);
}
void fn_802BBDAC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534828,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802BBE18,(int)lbl_8041DA74,28,(int)fn_802BBC34,0,0,0);
}
void *fn_802BBE18(){return fn_802BBBE8();}
}
#pragma pop
