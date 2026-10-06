#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_803436B0();
void fn_803436FC();
void fn_80343BB4();
extern char lbl_80455204[];
extern char lbl_80455218[];
extern char lbl_804E3D50[];
extern char lbl_804E3D58[];
extern char lbl_804E3D64[];
extern char lbl_804E3D70[];
extern char lbl_804E3D7C[];
extern char lbl_80536764[];
extern void *lbl_80536768;
extern void *lbl_80536778;
extern void *lbl_805621F4;
void fn_80343798();
void *fn_8034380C();
void *fn_80343880();
void fn_803438CC();
void fn_803438F4();
void *fn_80343964();
void fn_80343984();
}
extern "C" {
void fn_80343770(){
 fn_80066188((int)fn_80343798);
}
void fn_80343798(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536764,(int)fn_8002907C,(int)fn_80024180,(int)fn_8034380C,(int)lbl_80455204,20,(int)fn_803436FC,0,0,(int)lbl_804E3D50);
}
void *fn_8034380C(){return fn_803436B0();}
void *fn_8034382C(){
 if(!lbl_80536768) lbl_80536768=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536768;
}
void *fn_80343880(){
 if(!lbl_80536768 || !(reinterpret_cast<unsigned int *>(lbl_80536768)[0x24/4]&4)) fn_803438CC();
 return lbl_80536768;
}
void fn_803438CC(){
 fn_80066188((int)fn_803438F4);
}
void fn_803438F4(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80536768,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80343964,(int)lbl_80455218,20,0,(int)fn_80343984,0,0);
}
void *fn_80343964(){return fn_80343880();}
void fn_80343984(){
 void *meta=lbl_80536768;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D58,0x3);
 fn_800659C0(meta,lbl_804E3D64,lbl_804E3D70,lbl_804E3D7C,field);
}
void *fn_80343A04(){
 if(!lbl_80536778) lbl_80536778=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536778;
}
void *fn_80343A58(){
 if(!lbl_80536778 || !(reinterpret_cast<unsigned int *>(lbl_80536778)[0x24/4]&4)) fn_80343BB4();
 return lbl_80536778;
}
}
#pragma pop
