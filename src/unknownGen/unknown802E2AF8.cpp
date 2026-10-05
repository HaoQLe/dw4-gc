#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802E295C();
void fn_802E29A8();
void fn_802E2BB4();
void fn_802E3D20();
extern char lbl_80420CCC[];
extern char lbl_80535698[];
void fn_802E2B20();
void *fn_802E2B94();
}
extern "C" {
void fn_802E2AF8(){
 fn_80066188((int)fn_802E2B20);
}
void fn_802E2B20(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535698,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802E2B94,(int)lbl_80420CCC,44,(int)fn_802E29A8,(int)fn_802E2BB4,0,0);
}
void *fn_802E2B94(){return fn_802E295C();}
}
#pragma pop
