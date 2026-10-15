#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002C31C();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802AB598();
void igAdxFile_fieldInit();
void *igAdxFile_getMeta();
void igAdxFile_vtableRead();
void igFile_register();
extern char igAdxFile_className[];
extern char igAdxFile_meta[];
void igAdxFile_register();
void *igAdxFile_getMetaCall();
}
extern "C" {
void igAdxFile_registerNow(){
 meta_registerNow((int)igAdxFile_register);
}
void igAdxFile_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igAdxFile_meta,(int)igFile_register,(int)fn_8002C31C,(int)igAdxFile_getMetaCall,(int)igAdxFile_className,104,(int)igAdxFile_vtableRead,(int)igAdxFile_fieldInit,(int)fn_802AB598,0);
}
void *igAdxFile_getMetaCall(){return igAdxFile_getMeta();}
}
#pragma pop
