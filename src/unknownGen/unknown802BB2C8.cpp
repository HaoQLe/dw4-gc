#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BB208();
void fn_802BB254();
void fn_802BB4B4();
extern char lbl_8041DA18[];
extern char lbl_804CF7E0[];
extern char lbl_80534804[];
extern void *lbl_80534808;
void fn_802BB2F0();
void *fn_802BB364();
}
extern "C" {
void fn_802BB2C8(){
 fn_80066188((int)fn_802BB2F0);
}
void fn_802BB2F0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534804,(int)fn_8002907C,(int)fn_80024180,(int)fn_802BB364,(int)lbl_8041DA18,20,(int)fn_802BB254,0,0,(int)lbl_804CF7E0);
}
void *fn_802BB364(){return fn_802BB208();}
void *fn_802BB384(){
 if(!lbl_80534808 || !(reinterpret_cast<unsigned int *>(lbl_80534808)[0x24/4]&4)) fn_802BB4B4();
 return lbl_80534808;
}
}
#pragma pop
