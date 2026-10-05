#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CE980();
void fn_802CE9CC();
extern char lbl_8041F77C[];
extern char lbl_804D1458[];
extern char lbl_80535000[];
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
}
#pragma pop
