#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_80402E28();
void igNormalsRenderer_fieldInit();
void *igNormalsRenderer_getMeta();
void igNormalsRenderer_vtableRead();
void igRenderer_register();
extern char lbl_80462A98[];
extern char lbl_804F0DC8[];
extern char lbl_8055CAB0[];
void igNormalsRenderer_register();
void *igNormalsRenderer_getMetaCall();
}
extern "C" {
void fn_804086E0(){
 fn_80066188((int)igNormalsRenderer_register);
}
void igNormalsRenderer_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CAB0,(int)igRenderer_register,(int)fn_8010DF8C,(int)igNormalsRenderer_getMetaCall,(int)lbl_80462A98,48,(int)igNormalsRenderer_vtableRead,(int)igNormalsRenderer_fieldInit,0,(int)lbl_804F0DC8);
}
void *igNormalsRenderer_getMetaCall(){return igNormalsRenderer_getMeta();}
}
#pragma pop
