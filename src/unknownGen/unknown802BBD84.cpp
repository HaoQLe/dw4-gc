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
void *fn_802BBBE8();
void fn_802BBC34();
void fn_802BC110();
void fn_802E3D20();
extern char lbl_8041CD10[];
extern char lbl_8041DA74[];
extern char lbl_804CF848[];
extern char lbl_804CF890[];
extern char lbl_80534828[];
extern void *lbl_8053482C;
extern void *lbl_80534830;
extern void *lbl_805621F4;
void fn_802BBDAC();
void *fn_802BBE18();
}
extern "C" {
void fn_802BBD84(){
 fn_80066188((int)fn_802BBDAC);
}
void fn_802BBDAC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534828,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802BBE18,(int)lbl_8041DA74,28,(int)fn_802BBC34,0,0,0);
}
void *fn_802BBE18(){return fn_802BBBE8();}
void *fn_802BBE38(){
 if(!lbl_8053482C) lbl_8053482C=fn_800635C8(lbl_8041CD10,lbl_804CF848,lbl_804CF890,0x12);
 return lbl_8053482C;
}
void *fn_802BBE98(void *object){
 fn_802BC110();
 return fn_8006546C(lbl_80534830,object);
}
void *fn_802BBED8(){
 if(!lbl_80534830) lbl_80534830=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534830;
}
void *fn_802BBF2C(){
 if(!lbl_80534830 || !(reinterpret_cast<unsigned int *>(lbl_80534830)[0x24/4]&4)) fn_802BC110();
 return lbl_80534830;
}
}
#pragma pop
