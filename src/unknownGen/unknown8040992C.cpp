#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010EE6C();
void fn_8010F21C();
void fn_80402E28();
void *fn_80409844();
void fn_80409890();
void fn_804099E8();
extern char lbl_80462CBC[];
extern char lbl_8055CB6C[];
void fn_80409954();
void *fn_804099C8();
}
extern "C" {
void fn_8040992C(){
 fn_80066188((int)fn_80409954);
}
void fn_80409954(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CB6C,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_804099C8,(int)lbl_80462CBC,16,(int)fn_80409890,(int)fn_804099E8,0,0);
}
void *fn_804099C8(){return fn_80409844();}
}
#pragma pop
