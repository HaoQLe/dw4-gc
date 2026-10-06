#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CE980();
void fn_802CE9CC();
void fn_802CECEC();
extern char lbl_8041F77C[];
extern char lbl_804D1458[];
extern char lbl_80535000[];
extern void *lbl_80535004;
void fn_802CEA68();
void *fn_802CEADC();
}
extern "C" {
void fn_802CEA40(){
 fn_80066188((int)fn_802CEA68);
}
void fn_802CEA68(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535000,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CEADC,(int)lbl_8041F77C,20,(int)fn_802CE9CC,0,0,(int)lbl_804D1458);
}
void *fn_802CEADC(){return fn_802CE980();}
void *fn_802CEAFC(void *object){
 fn_802CECEC();
 return fn_8006546C(lbl_80535004,object);
}
void *fn_802CEB3C(){
 if(!lbl_80535004 || !(reinterpret_cast<unsigned int *>(lbl_80535004)[0x24/4]&4)) fn_802CECEC();
 return lbl_80535004;
}
}
#pragma pop
