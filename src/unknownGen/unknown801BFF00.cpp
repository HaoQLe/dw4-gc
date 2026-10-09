#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C0394();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF55C[];
extern char lbl_804B730C[];
extern char lbl_804B7370[];
extern char lbl_80560648[8];
extern void *lbl_805621F4;
extern void *lbl_80564EEC;
extern void *lbl_80564EF0;
void *igGeometryList_getMeta();
void *igGeometryList_vtableRead();
void fn_801C0020();
void igGeometryList_register();
void *igGeometryList_getMetaCall();
}
struct UnknownGenObject801BFFB0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BFF00(void *object){
 fn_801C0020();
 return fn_8006546C(lbl_80564EEC,object);
}
void *fn_801BFF38(){
 if(!lbl_80564EEC) lbl_80564EEC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EEC;
}
void *igGeometryList_getMeta(){
 if(!lbl_80564EEC || !(reinterpret_cast<unsigned int *>(lbl_80564EEC)[0x24/4]&4)) fn_801C0020();
 return lbl_80564EEC;
}
void *igGeometryList_vtableRead(){
 UnknownGenObject801BFFB0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7370;
 object.unknown00=lbl_804B730C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C0020(){
 fn_80066188((int)igGeometryList_register);
}
void igGeometryList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EEC,(int)igObjectList_register,(int)fn_80024180,(int)igGeometryList_getMetaCall,(int)lbl_804AF55C,20,(int)igGeometryList_vtableRead,0,0,(int)lbl_80560648);
}
void *igGeometryList_getMetaCall(){return igGeometryList_getMeta();}
void *fn_801C00D4(void *object){
 fn_801C0394();
 return fn_8006546C(lbl_80564EF0,object);
}
void *fn_801C010C(){
 if(!lbl_80564EF0) lbl_80564EF0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EF0;
}
void *igGeometry_getMeta(){
 if(!lbl_80564EF0 || !(reinterpret_cast<unsigned int *>(lbl_80564EF0)[0x24/4]&4)) fn_801C0394();
 return lbl_80564EF0;
}
}
#pragma pop
