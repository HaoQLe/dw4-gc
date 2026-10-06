#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CC8F8();
void fn_802CC944();
void fn_802CCBF8();
extern char lbl_8041F354[];
extern char lbl_804D1064[];
extern char lbl_80534F3C[];
extern void *lbl_80534F40;
extern void *lbl_805621F4;
void fn_802CC9E0();
void *fn_802CCA54();
}
extern "C" {
void fn_802CC9B8(){
 fn_80066188((int)fn_802CC9E0);
}
void fn_802CC9E0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F3C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CCA54,(int)lbl_8041F354,20,(int)fn_802CC944,0,0,(int)lbl_804D1064);
}
void *fn_802CCA54(){return fn_802CC8F8();}
void *fn_802CCA74(){
 if(!lbl_80534F40) lbl_80534F40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534F40;
}
void *fn_802CCAC8(){
 if(!lbl_80534F40 || !(reinterpret_cast<unsigned int *>(lbl_80534F40)[0x24/4]&4)) fn_802CCBF8();
 return lbl_80534F40;
}
}
#pragma pop
