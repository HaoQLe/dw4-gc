#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDirEntry_register();
void igExternalInfoEntry_fieldInit();
void *igGamecubeFile_getMeta();
extern char lbl_80465F2C[];
extern char lbl_8047284C[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
extern void *lbl_80561B60;
void *igExternalInfoEntry_getMeta();
void *igExternalInfoEntry_vtableRead();
void fn_8003040C();
void igExternalInfoEntry_register();
void *igExternalInfoEntry_getMetaCall();
}
struct UnknownGenRoot800302DC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800302DC(){fn_8006665C(this);}
};
struct UnknownGenObject800302DC_0 : UnknownGenRoot800302DC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800302DC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800302DC_1 : UnknownGenObject800302DC_0 {
 inline ~UnknownGenObject800302DC_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800302DC : UnknownGenObject800302DC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 char unknown20[4];
 UnknownGenString unknown24;
 inline ~UnknownGenObject800302DC(){unknown00=lbl_8047284C;}
};
extern "C" {
void *igGamecubeFile_getMetaCall(){return igGamecubeFile_getMeta();}
void *fn_80030268(void *object){
 fn_8003040C();
 return fn_8006546C(lbl_80561B60,object);
}
void *igExternalInfoEntry_getMeta(){
 if(!lbl_80561B60 || !(reinterpret_cast<unsigned int *>(lbl_80561B60)[0x24/4]&4)) fn_8003040C();
 return lbl_80561B60;
}
void *igExternalInfoEntry_vtableRead(){
 UnknownGenObject800302DC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_8047284C;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003040C(){
 fn_80066188((int)igExternalInfoEntry_register);
}
void igExternalInfoEntry_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B60,(int)igDirEntry_register,(int)fn_8002942C,(int)igExternalInfoEntry_getMetaCall,(int)lbl_80465F2C,40,(int)igExternalInfoEntry_vtableRead,(int)igExternalInfoEntry_fieldInit,0,0);
}
void *igExternalInfoEntry_getMetaCall(){return igExternalInfoEntry_getMeta();}
}
#pragma pop
