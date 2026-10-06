#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802CDCB4();
void fn_802CDD00();
void fn_802CE1F0();
void fn_802E3908();
extern char lbl_8041F688[];
extern char lbl_80534FB8[];
extern void *lbl_80534FBC;
extern void *lbl_805621F4;
void fn_802CDE38();
void *fn_802CDEA4();
}
extern "C" {
void fn_802CDE10(){
 fn_80066188((int)fn_802CDE38);
}
void fn_802CDE38(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FB8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802CDEA4,(int)lbl_8041F688,32,(int)fn_802CDD00,0,0,0);
}
void *fn_802CDEA4(){return fn_802CDCB4();}
void *fn_802CDEC4(void *object){
 fn_802CE1F0();
 return fn_8006546C(lbl_80534FBC,object);
}
void *fn_802CDF04(){
 if(!lbl_80534FBC) lbl_80534FBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534FBC;
}
void *fn_802CDF58(){
 if(!lbl_80534FBC || !(reinterpret_cast<unsigned int *>(lbl_80534FBC)[0x24/4]&4)) fn_802CE1F0();
 return lbl_80534FBC;
}
}
#pragma pop
