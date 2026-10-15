#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_80402E28();
void igObject_register();
void igViewerStatisticsManager_fieldInit();
void *igViewerStatisticsManager_getMeta();
void igViewerStatisticsManager_vtableRead();
extern char igViewerStatisticsManager_className[];
extern char igViewerStatisticsManager_dependencies[];
extern char igViewerStatisticsManager_meta[];
void igViewerStatisticsManager_register();
void *igViewerStatisticsManager_getMetaCall();
}
extern "C" {
void igViewerStatisticsManager_arkRegister(){
 meta_registerNow((int)igViewerStatisticsManager_register);
}
void igViewerStatisticsManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewerStatisticsManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igViewerStatisticsManager_getMetaCall,(int)igViewerStatisticsManager_className,72,(int)igViewerStatisticsManager_vtableRead,(int)igViewerStatisticsManager_fieldInit,0,(int)igViewerStatisticsManager_dependencies);
}
void *igViewerStatisticsManager_getMetaCall(){return igViewerStatisticsManager_getMeta();}
}
#pragma pop
