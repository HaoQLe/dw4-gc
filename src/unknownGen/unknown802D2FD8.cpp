#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802D2E7C();
void fn_802D2EC8();
void fn_802D3174();
void fn_802E3908();
extern char lbl_8041FB64[];
extern char lbl_80535148[];
extern void *lbl_8053514C;
void fn_802D3000();
void *fn_802D306C();
}
extern "C" {
void fn_802D2FD8(){
 fn_80066188((int)fn_802D3000);
}
void fn_802D3000(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535148,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D306C,(int)lbl_8041FB64,32,(int)fn_802D2EC8,0,0,0);
}
void *fn_802D306C(){return fn_802D2E7C();}
void *fn_802D308C(){
 if(!lbl_8053514C || !(reinterpret_cast<unsigned int *>(lbl_8053514C)[0x24/4]&4)) fn_802D3174();
 return lbl_8053514C;
}
}
#pragma pop
