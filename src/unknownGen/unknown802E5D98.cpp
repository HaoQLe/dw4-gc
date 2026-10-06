#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E5CD8();
void fn_802E5D24();
void fn_802E6090();
extern char lbl_80420FE8[];
extern char lbl_804D30C0[];
extern char lbl_805357D0[];
extern void *lbl_805357D4;
void fn_802E5DC0();
void *fn_802E5E34();
}
extern "C" {
void fn_802E5D98(){
 fn_80066188((int)fn_802E5DC0);
}
void fn_802E5DC0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805357D0,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E5E34,(int)lbl_80420FE8,20,(int)fn_802E5D24,0,0,(int)lbl_804D30C0);
}
void *fn_802E5E34(){return fn_802E5CD8();}
void *fn_802E5E54(){
 if(!lbl_805357D4 || !(reinterpret_cast<unsigned int *>(lbl_805357D4)[0x24/4]&4)) fn_802E6090();
 return lbl_805357D4;
}
}
#pragma pop
