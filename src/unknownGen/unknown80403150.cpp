#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80402E28();
void igObject_register();
void igViewerStatisticsManager_fieldInit();
void *igViewerStatisticsManager_getMeta();
void igViewerStatisticsManager_vtableRead();
extern char lbl_80461C20[];
extern char lbl_804EFE48[];
extern char lbl_8055C700[];
void igViewerStatisticsManager_register();
void *igViewerStatisticsManager_getMetaCall();
}
extern "C" {
void fn_80403150(){
 fn_80066188((int)igViewerStatisticsManager_register);
}
void igViewerStatisticsManager_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C700,(int)igObject_register,(int)fn_800237D0,(int)igViewerStatisticsManager_getMetaCall,(int)lbl_80461C20,72,(int)igViewerStatisticsManager_vtableRead,(int)igViewerStatisticsManager_fieldInit,0,(int)lbl_804EFE48);
}
void *igViewerStatisticsManager_getMetaCall(){return igViewerStatisticsManager_getMeta();}
}
#pragma pop
