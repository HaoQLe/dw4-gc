#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010EE6C();
void fn_8010F21C();
void fn_80402E28();
void *fn_80408008();
void fn_80408054();
void fn_804081CC();
extern char lbl_80462A24[];
extern char lbl_8055CA78[];
void fn_80408138();
void *fn_804081AC();
}
extern "C" {
void fn_80408110(){
 fn_80066188((int)fn_80408138);
}
void fn_80408138(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA78,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_804081AC,(int)lbl_80462A24,176,(int)fn_80408054,(int)fn_804081CC,0,0);
}
void *fn_804081AC(){return fn_80408008();}
}
#pragma pop
