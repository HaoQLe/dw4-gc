#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800CF4C0();
void *fn_800CF680();
void fn_800D726C();
void fn_800D747C();
void *fn_800D75B4();
extern char lbl_8048E058[];
extern char lbl_8055EDDC[8];
extern void *lbl_80562D9C;
extern void *lbl_80563374;
void fn_800D73FC();
void *fn_800D7474();
}
extern "C" {
void fn_800D73D4(){
 fn_80066188((int)fn_800D73FC);
}
void fn_800D73FC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563374,(int)fn_800CF4C0,(int)fn_800D7474,(int)fn_800CF680,(int)lbl_8048E058,112,(int)fn_800D726C,(int)fn_800D747C,(int)fn_800D75B4,(int)lbl_8055EDDC);
}
void *fn_800D7474(){return lbl_80562D9C;}
}
#pragma pop
