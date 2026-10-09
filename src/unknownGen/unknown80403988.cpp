#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_801159FC();
void fn_80402E28();
void igAction_register();
void igViewerAction_fieldInit();
extern char lbl_80461E00[];
extern char lbl_80496CB8[];
extern char lbl_804F0038[];
extern char lbl_804F1AE0[];
extern void *lbl_8055C778;
void *igViewerAction_getMeta();
void *igViewerAction_vtableRead();
void fn_80403A68();
void igViewerAction_register();
void *igViewerAction_getMetaCall();
}
struct UnknownGenObject80403A14_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80403988(void *object){
 fn_80403A68();
 return fn_8006546C(lbl_8055C778,object);
}
void *igViewerAction_getMeta(){
 if(!lbl_8055C778 || !(reinterpret_cast<unsigned int *>(lbl_8055C778)[0x24/4]&4)) fn_80403A68();
 return lbl_8055C778;
}
void *igViewerAction_vtableRead(){
 UnknownGenObject80403A14_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80496CB8;
 object.unknown00=lbl_804F1AE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80403A68(){
 fn_80066188((int)igViewerAction_register);
}
void igViewerAction_register(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C778,(int)igAction_register,(int)fn_801159FC,(int)igViewerAction_getMetaCall,(int)lbl_80461E00,24,(int)igViewerAction_vtableRead,(int)igViewerAction_fieldInit,0,(int)lbl_804F0038);
}
void *igViewerAction_getMetaCall(){return igViewerAction_getMeta();}
}
#pragma pop
