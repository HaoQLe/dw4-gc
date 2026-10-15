#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igObject_construct(void *);
void fn_80406344(void *,short);
void igViewerGuiFactory_registerNow();
extern char igViewerGuiFactory_vtable[];
extern void *igViewerGuiFactory_meta;
extern void *lbl_805621F4;
}
struct UnknownGenObject804062C8 {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 char unknown28[8];
};
extern "C" {
void *igViewerGuiFactory_metaObject(){
 if(!igViewerGuiFactory_meta) igViewerGuiFactory_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igViewerGuiFactory_meta;
}
void *igViewerGuiFactory_getMeta(){
 if(!igViewerGuiFactory_meta || !(reinterpret_cast<unsigned int *>(igViewerGuiFactory_meta)[0x24/4]&4)) igViewerGuiFactory_registerNow();
 return igViewerGuiFactory_meta;
}
void *igViewerGuiFactory_vtableRead(){
 UnknownGenObject804062C8 object;
 igObject_construct(&object);
 object.unknown00=igViewerGuiFactory_vtable;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80406344(&object,-1);
 return result;
}
}
#pragma pop
