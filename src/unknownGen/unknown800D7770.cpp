#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800CF0E4();
void *fn_800CF250();
void fn_800D7610();
void fn_800D7810();
extern char lbl_8048E298[];
extern void *lbl_80562D84;
extern void *lbl_805633B8;
void fn_800D7798();
void *fn_800D7808();
}
extern "C" {
void fn_800D7770(){
 fn_80066188((int)fn_800D7798);
}
void fn_800D7798(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_805633B8,(int)fn_800CF0E4,(int)fn_800D7808,(int)fn_800CF250,(int)lbl_8048E298,24,(int)fn_800D7610,(int)fn_800D7810,0,0);
}
void *fn_800D7808(){return lbl_80562D84;}
}
#pragma pop
