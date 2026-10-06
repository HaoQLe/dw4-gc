#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D8280();
void fn_802D82CC();
void fn_802D84E4();
extern char lbl_804201A8[];
extern char lbl_804D1EF8[];
extern char lbl_805352EC[];
extern void *lbl_805352F0;
void fn_802D8368();
void *fn_802D83DC();
}
extern "C" {
void fn_802D8340(){
 fn_80066188((int)fn_802D8368);
}
void fn_802D8368(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352EC,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D83DC,(int)lbl_804201A8,20,(int)fn_802D82CC,0,0,(int)lbl_804D1EF8);
}
void *fn_802D83DC(){return fn_802D8280();}
void *fn_802D83FC(){
 if(!lbl_805352F0 || !(reinterpret_cast<unsigned int *>(lbl_805352F0)[0x24/4]&4)) fn_802D84E4();
 return lbl_805352F0;
}
}
#pragma pop
