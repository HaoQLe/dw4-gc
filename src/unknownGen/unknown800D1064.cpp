#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800CE2F8();
void *fn_800D0EB8();
void fn_800D0EF4();
void fn_800D1124();
extern char lbl_804890B0[];
extern char lbl_804890C8[];
extern void *lbl_80562E9C;
void fn_800D108C();
void *fn_800D1104();
}
extern "C" {
void fn_800D1064(){
 fn_80066188((int)fn_800D108C);
}
void fn_800D108C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562E9C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800D1104,(int)lbl_804890C8,92,(int)fn_800D0EF4,(int)fn_800D1124,0,(int)lbl_804890B0);
}
void *fn_800D1104(){return fn_800D0EB8();}
}
#pragma pop
