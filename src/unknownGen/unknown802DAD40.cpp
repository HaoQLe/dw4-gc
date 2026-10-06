#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DACAC();
void fn_802DACF8();
void fn_802DAF0C();
extern char lbl_804204CC[];
extern char lbl_805353D8[];
extern void *lbl_805353DC;
void fn_802DAD68();
void *fn_802DADD4();
}
extern "C" {
void fn_802DAD40(){
 fn_80066188((int)fn_802DAD68);
}
void fn_802DAD68(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805353D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DADD4,(int)lbl_804204CC,8,(int)fn_802DACF8,0,0,0);
}
void *fn_802DADD4(){return fn_802DACAC();}
void *fn_802DADF4(void *object){
 fn_802DAF0C();
 return fn_8006546C(lbl_805353DC,object);
}
void *fn_802DAE34(){
 if(!lbl_805353DC || !(reinterpret_cast<unsigned int *>(lbl_805353DC)[0x24/4]&4)) fn_802DAF0C();
 return lbl_805353DC;
}
}
#pragma pop
