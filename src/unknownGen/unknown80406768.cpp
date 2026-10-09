#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80284550();
void fn_80402E28();
void igInfoManager_register();
void igViewerDataPumpManager_fieldInit();
extern char lbl_8046272C[];
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804F09A4[];
extern char lbl_804F18F0[];
extern void *lbl_8055C998;
void *igViewerDataPumpManager_getMeta();
void *igViewerDataPumpManager_vtableRead();
void fn_804068F4();
void igViewerDataPumpManager_register();
void *igViewerDataPumpManager_getMetaCall();
}
struct UnknownGenRoot804067F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot804067F4(){fn_8006665C(this);}
};
struct UnknownGenObject804067F4_0 : UnknownGenRoot804067F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject804067F4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject804067F4_1 : UnknownGenObject804067F4_0 {
 inline ~UnknownGenObject804067F4_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject804067F4 : UnknownGenObject804067F4_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject804067F4(){unknown00=lbl_804F18F0;}
};
extern "C" {
void *fn_80406768(void *object){
 fn_804068F4();
 return fn_8006546C(lbl_8055C998,object);
}
void *igViewerDataPumpManager_getMeta(){
 if(!lbl_8055C998 || !(reinterpret_cast<unsigned int *>(lbl_8055C998)[0x24/4]&4)) fn_804068F4();
 return lbl_8055C998;
}
void *igViewerDataPumpManager_vtableRead(){
 UnknownGenObject804067F4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804F18F0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_804068F4(){
 fn_80066188((int)igViewerDataPumpManager_register);
}
void igViewerDataPumpManager_register(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C998,(int)igInfoManager_register,(int)fn_80284550,(int)igViewerDataPumpManager_getMetaCall,(int)lbl_8046272C,20,(int)igViewerDataPumpManager_vtableRead,(int)igViewerDataPumpManager_fieldInit,0,(int)lbl_804F09A4);
}
void *igViewerDataPumpManager_getMetaCall(){return igViewerDataPumpManager_getMeta();}
}
#pragma pop
