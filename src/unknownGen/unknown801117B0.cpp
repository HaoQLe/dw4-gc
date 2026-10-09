#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igGuiComponentAspect_fieldInit();
void igView_register();
extern char lbl_804950CC[];
extern char lbl_804950E8[];
extern char lbl_80495AD8[];
extern char lbl_804964A0[];
extern char lbl_8055F0E4[8];
extern void *lbl_805621F4;
extern void *lbl_80563738;
extern void *lbl_8056373C;
void *igGuiComponentController_getMeta();
void *igGuiComponentController_vtableRead();
void fn_80111874();
void igGuiComponentController_register();
void *igGuiComponentController_getMetaCall();
void *igGuiComponentAspect_getMeta();
void fn_8011199C();
void igGuiComponentAspect_register();
void *igGuiComponentAspect_getMetaCall();
}
struct UnknownGenObject80111828_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801117B0(){
 if(!lbl_80563738) lbl_80563738=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563738;
}
void *igGuiComponentController_getMeta(){
 if(!lbl_80563738 || !(reinterpret_cast<unsigned int *>(lbl_80563738)[0x24/4]&4)) fn_80111874();
 return lbl_80563738;
}
void *igGuiComponentController_vtableRead(){
 UnknownGenObject80111828_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_804964A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80111874(){
 fn_80066188((int)igGuiComponentController_register);
}
void igGuiComponentController_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563738,(int)igView_register,(int)fn_8010E6DC,(int)igGuiComponentController_getMetaCall,(int)lbl_804950CC,12,(int)igGuiComponentController_vtableRead,0,0,0);
}
void *igGuiComponentController_getMetaCall(){return igGuiComponentController_getMeta();}
void *fn_80111924(){
 if(!lbl_8056373C) lbl_8056373C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056373C;
}
void *igGuiComponentAspect_getMeta(){
 if(!lbl_8056373C || !(reinterpret_cast<unsigned int *>(lbl_8056373C)[0x24/4]&4)) fn_8011199C();
 return lbl_8056373C;
}
void fn_8011199C(){
 fn_80066188((int)igGuiComponentAspect_register);
}
void igGuiComponentAspect_register(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_8056373C,(int)igView_register,(int)fn_8010E6DC,(int)igGuiComponentAspect_getMetaCall,(int)lbl_804950E8,40,0,(int)igGuiComponentAspect_fieldInit,0,(int)lbl_8055F0E4);
}
void *igGuiComponentAspect_getMetaCall(){return igGuiComponentAspect_getMeta();}
}
#pragma pop
