#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802B4BF4();
void fn_802B4C40();
void fn_802B5094();
void fn_802E3D20();
extern char lbl_8041CCF0[];
extern char lbl_8041CD10[];
extern char lbl_804CF0BC[];
extern char lbl_804CF0C0[];
extern char lbl_80534618[];
extern void *lbl_8053461C;
extern void *lbl_80534620;
extern void *lbl_805621F4;
void fn_802B4DB8();
void *fn_802B4E24();
}
extern "C" {
void fn_802B4D90(){
 fn_80066188((int)fn_802B4DB8);
}
void fn_802B4DB8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534618,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B4E24,(int)lbl_8041CCF0,28,(int)fn_802B4C40,0,0,0);
}
void *fn_802B4E24(){return fn_802B4BF4();}
void *fn_802B4E44(){
 if(!lbl_8053461C) lbl_8053461C=fn_800635C8(lbl_8041CD10,lbl_804CF0BC,lbl_804CF0C0,0x1);
 return lbl_8053461C;
}
void *fn_802B4EA4(void *object){
 fn_802B5094();
 return fn_8006546C(lbl_80534620,object);
}
void *fn_802B4EE4(){
 if(!lbl_80534620) lbl_80534620=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534620;
}
void *fn_802B4F38(){
 if(!lbl_80534620 || !(reinterpret_cast<unsigned int *>(lbl_80534620)[0x24/4]&4)) fn_802B5094();
 return lbl_80534620;
}
}
#pragma pop
