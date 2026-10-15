#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igObject_construct(void *);
void fn_80402F78(void *,short);
void igViewerStatisticsManager_arkRegister();
extern char igViewerStatisticsManager_vtable[];
extern void *igViewerStatisticsManager_meta;
extern void *lbl_805621F4;
}
struct UnknownGenObject80402EFC {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 char unknown20[4];
 int unknown24;
 int unknown28;
 char unknown2C[36];
};
extern "C" {
void *igViewerStatisticsManager_metaObject(){
 if(!igViewerStatisticsManager_meta) igViewerStatisticsManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerStatisticsManager_meta;
}
void *igViewerStatisticsManager_getMeta(){
 if(!igViewerStatisticsManager_meta || !(reinterpret_cast<unsigned int *>(igViewerStatisticsManager_meta)[0x24/4]&4)) igViewerStatisticsManager_arkRegister();
 return igViewerStatisticsManager_meta;
}
void *igViewerStatisticsManager_vtableRead(){
 UnknownGenObject80402EFC object;
 igObject_construct(&object);
 object.unknown00=igViewerStatisticsManager_vtable;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown24=0;
 object.unknown28=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80402F78(&object,-1);
 return result;
}
}
#pragma pop
