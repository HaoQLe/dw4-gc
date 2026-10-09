#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8010E6DC();
void fn_80402E28();
void igView_register();
void igViewerSceneInfoManagerController_fieldInit();
extern char lbl_804621A0[];
extern char lbl_80495AD8[];
extern char lbl_804F03E4[];
extern char lbl_804F1C1C[];
extern void *lbl_8055C860;
extern void *lbl_805621F4;
void *igViewerSceneInfoManagerController_getMeta();
void *igViewerSceneInfoManagerController_vtableRead();
void fn_80405228();
void igViewerSceneInfoManagerController_register();
void *igViewerSceneInfoManagerController_getMetaCall();
}
struct UnknownGenObject804051D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80405134(){
 if(!lbl_8055C860) lbl_8055C860=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C860;
}
void *igViewerSceneInfoManagerController_getMeta(){
 if(!lbl_8055C860 || !(reinterpret_cast<unsigned int *>(lbl_8055C860)[0x24/4]&4)) fn_80405228();
 return lbl_8055C860;
}
void *igViewerSceneInfoManagerController_vtableRead(){
 UnknownGenObject804051D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_804F1C1C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80405228(){
 fn_80066188((int)igViewerSceneInfoManagerController_register);
}
void igViewerSceneInfoManagerController_register(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C860,(int)igView_register,(int)fn_8010E6DC,(int)igViewerSceneInfoManagerController_getMetaCall,(int)lbl_804621A0,20,(int)igViewerSceneInfoManagerController_vtableRead,(int)igViewerSceneInfoManagerController_fieldInit,0,(int)lbl_804F03E4);
}
void *igViewerSceneInfoManagerController_getMetaCall(){return igViewerSceneInfoManagerController_getMeta();}
}
#pragma pop
