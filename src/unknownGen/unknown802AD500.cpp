#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802AA788();
void igInfoManager_register();
void igMovieManager_fieldInit();
void *igMovieManager_getMeta();
void igMovieManager_vtableRead();
extern char lbl_8041BFA4[];
extern char lbl_804CDD74[];
extern char lbl_80534474[];
void igMovieManager_register();
void *igMovieManager_getMetaCall();
}
extern "C" {
void fn_802AD500(){
 fn_80066188((int)igMovieManager_register);
}
void igMovieManager_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534474,(int)igInfoManager_register,(int)fn_80284550,(int)igMovieManager_getMetaCall,(int)lbl_8041BFA4,40,(int)igMovieManager_vtableRead,(int)igMovieManager_fieldInit,0,(int)lbl_804CDD74);
}
void *igMovieManager_getMetaCall(){return igMovieManager_getMeta();}
}
#pragma pop
