#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void fn_800CB164();
void *fn_800CB28C();
void fn_800CB710();
void fn_800CB848();
extern char lbl_8047F3DC[];
extern void *lbl_80562BA4;
extern void *lbl_80562BC4;
void fn_800CB7D0();
void *fn_800CB840();
}
extern "C" {
void fn_800CB7A8(){
 fn_80066188((int)fn_800CB7D0);
}
void fn_800CB7D0(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562BC4,(int)fn_800CB164,(int)fn_800CB840,(int)fn_800CB28C,(int)lbl_8047F3DC,76,(int)fn_800CB710,(int)fn_800CB848,0,0);
}
void *fn_800CB840(){return lbl_80562BA4;}
}
#pragma pop
