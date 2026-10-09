#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ParticleTimer_fieldInit();
void *ParticleTimer_getMeta();
void ParticleTimer_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801B8D70();
void fn_802B1AC8();
void *fn_802E8184();
void igGeometry_register();
extern char lbl_804211FC[];
extern char lbl_80535868[];
void ParticleTimer_register();
void *ParticleTimer_getMetaCall();
}
extern "C" {
void fn_802E7FDC(){
 fn_80066188((int)ParticleTimer_register);
}
void ParticleTimer_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535868,(int)igGeometry_register,(int)fn_801B8D70,(int)ParticleTimer_getMetaCall,(int)lbl_804211FC,64,(int)ParticleTimer_vtableRead,(int)ParticleTimer_fieldInit,(int)fn_802E8184,0);
}
void *ParticleTimer_getMetaCall(){return ParticleTimer_getMeta();}
}
#pragma pop
