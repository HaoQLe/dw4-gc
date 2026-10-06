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
void *fn_802C3C4C();
void fn_802C3C98();
void fn_802C40EC();
void fn_802E3D20();
extern char lbl_8041CD10[];
extern char lbl_8041E7FC[];
extern char lbl_804D0450[];
extern char lbl_804D0460[];
extern char lbl_80534B88[];
extern void *lbl_80534B8C;
extern void *lbl_80534B90;
extern void *lbl_805621F4;
void fn_802C3E10();
void *fn_802C3E7C();
}
extern "C" {
void fn_802C3DE8(){
 fn_80066188((int)fn_802C3E10);
}
void fn_802C3E10(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B88,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802C3E7C,(int)lbl_8041E7FC,28,(int)fn_802C3C98,0,0,0);
}
void *fn_802C3E7C(){return fn_802C3C4C();}
void *fn_802C3E9C(){
 if(!lbl_80534B8C) lbl_80534B8C=fn_800635C8(lbl_8041CD10,lbl_804D0450,lbl_804D0460,0x4);
 return lbl_80534B8C;
}
void *fn_802C3EFC(void *object){
 fn_802C40EC();
 return fn_8006546C(lbl_80534B90,object);
}
void *fn_802C3F3C(){
 if(!lbl_80534B90) lbl_80534B90=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534B90;
}
void *fn_802C3F90(){
 if(!lbl_80534B90 || !(reinterpret_cast<unsigned int *>(lbl_80534B90)[0x24/4]&4)) fn_802C40EC();
 return lbl_80534B90;
}
}
#pragma pop
