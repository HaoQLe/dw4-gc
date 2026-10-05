#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D1B08();
void *fn_800D1C9C();
void fn_800D85A4();
void fn_800D86DC();
extern char lbl_8048ED44[];
extern void *lbl_80562F40;
extern void *lbl_80563460;
void fn_800D8664();
void *fn_800D86D4();
}
extern "C" {
void fn_800D863C(){
 fn_80066188((int)fn_800D8664);
}
void fn_800D8664(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563460,(int)fn_800D1B08,(int)fn_800D86D4,(int)fn_800D1C9C,(int)lbl_8048ED44,28,(int)fn_800D85A4,(int)fn_800D86DC,0,0);
}
void *fn_800D86D4(){return lbl_80562F40;}
}
#pragma pop
