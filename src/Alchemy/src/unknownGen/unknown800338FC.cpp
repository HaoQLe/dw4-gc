#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDataList_fieldInit();
void igObject_register();
extern char lbl_8046746C[];
extern char lbl_80472FA0[];
extern void *lbl_80561D3C;
extern void *lbl_805621F4;
void *igDataList_getMeta();
void *igDataList_vtableRead();
void fn_800339EC();
void igDataList_register();
void *igDataList_getMetaCall();
}
struct UnknownGenObject800339AC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800338FC(void *object){
 fn_800339EC();
 return fn_8006546C(lbl_80561D3C,object);
}
void *fn_80033934(){
 if(!lbl_80561D3C) lbl_80561D3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561D3C;
}
void *igDataList_getMeta(){
 if(!lbl_80561D3C || !(reinterpret_cast<unsigned int *>(lbl_80561D3C)[0x24/4]&4)) fn_800339EC();
 return lbl_80561D3C;
}
void *igDataList_vtableRead(){
 UnknownGenObject800339AC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800339EC(){
 fn_80066188((int)igDataList_register);
}
void igDataList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D3C,(int)igObject_register,(int)fn_800237D0,(int)igDataList_getMetaCall,(int)lbl_8046746C,20,(int)igDataList_vtableRead,(int)igDataList_fieldInit,0,0);
}
void *igDataList_getMetaCall(){return igDataList_getMeta();}
}
#pragma pop
