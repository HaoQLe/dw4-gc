#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802B9FB0();
void fn_802B9FFC();
void fn_802BA3C0();
void fn_802E3D20();
extern char lbl_8041D8E8[];
extern char lbl_805347B4[];
extern void *lbl_805347B8;
void fn_802BA174();
void *fn_802BA1E0();
}
extern "C" {
void fn_802BA14C(){
 fn_80066188((int)fn_802BA174);
}
void fn_802BA174(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347B4,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802BA1E0,(int)lbl_8041D8E8,28,(int)fn_802B9FFC,0,0,0);
}
void *fn_802BA1E0(){return fn_802B9FB0();}
void *fn_802BA200(){
 if(!lbl_805347B8 || !(reinterpret_cast<unsigned int *>(lbl_805347B8)[0x24/4]&4)) fn_802BA3C0();
 return lbl_805347B8;
}
}
#pragma pop
