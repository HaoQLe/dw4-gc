#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AD8A0();
void igInsightPlugin_register();
void igMoviePlugin_fieldInit();
void *igMoviePlugin_getMeta();
void igMoviePlugin_vtableRead();
extern char igMoviePlugin_className[];
extern char lbl_804CDDEC[];
extern char igMoviePlugin_meta[];
void igMoviePlugin_register();
void *igMoviePlugin_getMetaCall();
}
extern "C" {
void igMoviePlugin_registerNow(){
 meta_registerNow((int)igMoviePlugin_register);
}
void igMoviePlugin_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igMoviePlugin_meta,(int)igInsightPlugin_register,(int)fn_802AD8A0,(int)igMoviePlugin_getMetaCall,(int)igMoviePlugin_className,12,(int)igMoviePlugin_vtableRead,(int)igMoviePlugin_fieldInit,0,(int)lbl_804CDDEC);
}
void *igMoviePlugin_getMetaCall(){return igMoviePlugin_getMeta();}
}
#pragma pop
