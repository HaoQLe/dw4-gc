#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDirEntry_register();
void igExternalIndexedEntry_fieldInit();
extern char lbl_80465F8C[];
extern char lbl_804728F8[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
extern char lbl_8055D4AC[8];
extern void *lbl_80561B70;
void *igExternalIndexedEntry_getMeta();
void *igExternalIndexedEntry_vtableRead();
void fn_800306DC();
void igExternalIndexedEntry_register();
void *igExternalIndexedEntry_getMetaCall();
}
struct UnknownGenRoot800305AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800305AC(){fn_8006665C(this);}
};
struct UnknownGenObject800305AC_0 : UnknownGenRoot800305AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800305AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800305AC_1 : UnknownGenObject800305AC_0 {
 inline ~UnknownGenObject800305AC_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject800305AC : UnknownGenObject800305AC_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[4];
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject800305AC(){unknown00=lbl_804728F8;}
};
extern "C" {
void *igExternalIndexedEntry_getMeta(){
 if(!lbl_80561B70 || !(reinterpret_cast<unsigned int *>(lbl_80561B70)[0x24/4]&4)) fn_800306DC();
 return lbl_80561B70;
}
void *igExternalIndexedEntry_vtableRead(){
 UnknownGenObject800305AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_804728F8;
 object.unknown24.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800306DC(){
 fn_80066188((int)igExternalIndexedEntry_register);
}
void igExternalIndexedEntry_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B70,(int)igDirEntry_register,(int)fn_8002942C,(int)igExternalIndexedEntry_getMetaCall,(int)lbl_80465F8C,52,(int)igExternalIndexedEntry_vtableRead,(int)igExternalIndexedEntry_fieldInit,0,(int)lbl_8055D4AC);
}
void *igExternalIndexedEntry_getMetaCall(){return igExternalIndexedEntry_getMeta();}
}
#pragma pop
