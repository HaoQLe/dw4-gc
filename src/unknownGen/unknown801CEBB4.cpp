#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801C1208();
void *fn_801C1524();
void fn_801CE5BC();
void fn_801CEC5C();
extern char lbl_804B2BC8[];
extern char lbl_804B2BDC[];
extern void *lbl_80564F20;
extern void *lbl_805655D8;
void fn_801CEBDC();
void *fn_801CEC54();
}
extern "C" {
void fn_801CEBB4(){
 fn_80066188((int)fn_801CEBDC);
}
void fn_801CEBDC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805655D8,(int)fn_801C1208,(int)fn_801CEC54,(int)fn_801C1524,(int)lbl_804B2BDC,136,(int)fn_801CE5BC,(int)fn_801CEC5C,0,(int)lbl_804B2BC8);
}
void *fn_801CEC54(){return lbl_80564F20;}
}
#pragma pop
