#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801BF938();
void fn_802B1AC8();
void *fn_802CCFEC();
void fn_802CD038();
void fn_802CD2B8();
void *fn_802CD360();
extern char lbl_8041F530[];
extern char lbl_804D11C8[];
extern char lbl_80534F5C[];
void fn_802CD218();
void *fn_802CD298();
}
extern "C" {
void fn_802CD1F0(){
 fn_80066188((int)fn_802CD218);
}
void fn_802CD218(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F5C,(int)fn_801BF938,(int)fn_8011148C,(int)fn_802CD298,(int)lbl_8041F530,52,(int)fn_802CD038,(int)fn_802CD2B8,(int)fn_802CD360,(int)lbl_804D11C8);
}
void *fn_802CD298(){return fn_802CCFEC();}
}
#pragma pop
