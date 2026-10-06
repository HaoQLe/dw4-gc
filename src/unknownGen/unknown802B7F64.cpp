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
void *fn_802B381C();
void *fn_802B7E08();
void fn_802B7E54();
void fn_802B82B0();
void fn_802E3908();
extern char lbl_8041CD10[];
extern char lbl_8041D5E4[];
extern char lbl_804CF458[];
extern char lbl_804CF45C[];
extern char lbl_80534720[];
extern void *lbl_80534724;
extern void *lbl_80534728;
extern void *lbl_805621F4;
void fn_802B7F8C();
void *fn_802B7FF8();
}
extern "C" {
void fn_802B7F64(){
 fn_80066188((int)fn_802B7F8C);
}
void fn_802B7F8C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534720,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B7FF8,(int)lbl_8041D5E4,32,(int)fn_802B7E54,0,0,0);
}
void *fn_802B7FF8(){return fn_802B7E08();}
void *fn_802B8018(){
 if(!lbl_80534724) lbl_80534724=fn_800635C8(lbl_8041CD10,lbl_804CF458,lbl_804CF45C,0x1);
 return lbl_80534724;
}
void *fn_802B8078(void *object){
 fn_802B82B0();
 return fn_8006546C(lbl_80534728,object);
}
void *fn_802B80B8(){
 if(!lbl_80534728) lbl_80534728=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534728;
}
void *fn_802B810C(){
 if(!lbl_80534728 || !(reinterpret_cast<unsigned int *>(lbl_80534728)[0x24/4]&4)) fn_802B82B0();
 return lbl_80534728;
}
}
#pragma pop
