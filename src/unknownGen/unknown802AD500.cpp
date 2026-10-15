#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802AA788();
void igInfoManager_register();
void igMovieManager_fieldInit();
void *igMovieManager_getMeta();
void igMovieManager_vtableRead();
extern char igMovieManager_className[];
extern char lbl_804CDD74[];
extern char igMovieManager_meta[];
void igMovieManager_register();
void *igMovieManager_getMetaCall();
}
extern "C" {
void igMovieManager_registerNow(){
 meta_registerNow((int)igMovieManager_register);
}
void igMovieManager_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igMovieManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)igMovieManager_getMetaCall,(int)igMovieManager_className,40,(int)igMovieManager_vtableRead,(int)igMovieManager_fieldInit,0,(int)lbl_804CDD74);
}
void *igMovieManager_getMetaCall(){return igMovieManager_getMeta();}
}
#pragma pop
