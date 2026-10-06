#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802C3F90();
void fn_802C3FDC();
void fn_802C4390();
void fn_802E3908();
extern char lbl_8041E844[];
extern char lbl_80534B90[];
extern void *lbl_80534B94;
void fn_802C4114();
void *fn_802C4180();
}
extern "C" {
void fn_802C40EC(){
 fn_80066188((int)fn_802C4114);
}
void fn_802C4114(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B90,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802C4180,(int)lbl_8041E844,32,(int)fn_802C3FDC,0,0,0);
}
void *fn_802C4180(){return fn_802C3F90();}
void *fn_802C41A0(){
 if(!lbl_80534B94 || !(reinterpret_cast<unsigned int *>(lbl_80534B94)[0x24/4]&4)) fn_802C4390();
 return lbl_80534B94;
}
}
#pragma pop
