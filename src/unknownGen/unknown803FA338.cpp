#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A41C4();
void *fn_802A42D8();
void fn_802A48F0(int,void *,void *,void *);
void fn_802A4AA4(int,void *);
void *fn_802A4BEC(int,void *,void *);
extern void *lbl_80559760;
extern void *lbl_80559764;
extern void *lbl_80559768;
}
extern "C" {
void *fn_803FA338(){return fn_802A41C4();}
void fn_803FA358(){
 fn_802A4AA4(5,lbl_80559760);
}
void fn_803FA388(int p0,int p1){
 void *value0=fn_802A4BEC(5,(void *)p0,(void *)p1);
 lbl_80559760=value0;
}
void fn_803FA3BC(){
 fn_802A4AA4(6,lbl_80559764);
}
void fn_803FA3EC(int p0,int p1){
 void *value0=fn_802A4BEC(6,(void *)p0,(void *)p1);
 lbl_80559764=value0;
}
void fn_803FA420(){
 fn_802A4AA4(2,lbl_80559768);
}
void fn_803FA450(int p0,int p1,int p2){
 fn_802A48F0(2,(void *)p0,(void *)p1,(void *)p2);
 lbl_80559768=(void *)p0;
}
void *fn_803FA498(){return fn_802A42D8();}
}
#pragma pop
