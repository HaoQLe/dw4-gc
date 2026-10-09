#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800638E0(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igMetaField_register();
void igStructMetaField_fieldInit();
extern char lbl_80463508[];
extern char lbl_80470E00[];
extern char lbl_80471914[];
extern char lbl_8055D090[8];
extern void *lbl_80561560;
void *igStructMetaField_getMeta();
void *igStructMetaField_vtableRead();
void fn_8002460C();
void igStructMetaField_register();
void *igStructMetaField_getMetaCall();
}
struct UnknownGenRoot80024580 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80024580(){fn_800638E0(this);}
};
struct UnknownGenObject80024580_0 : UnknownGenRoot80024580 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80024580_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80024580 : UnknownGenObject80024580_0 {
 char unknown10[48];
 inline ~UnknownGenObject80024580(){unknown00=lbl_80470E00;}
};
extern "C" {
void *fn_8002450C(void *object){
 fn_8002460C();
 return fn_8006546C(lbl_80561560,object);
}
void *igStructMetaField_getMeta(){
 if(!lbl_80561560 || !(reinterpret_cast<unsigned int *>(lbl_80561560)[0x24/4]&4)) fn_8002460C();
 return lbl_80561560;
}
void *igStructMetaField_vtableRead(){
 UnknownGenObject80024580 object;
 object.unknown00=lbl_80470E00;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002460C(){
 fn_80066188((int)igStructMetaField_register);
}
void igStructMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561560,(int)igMetaField_register,(int)fn_80021D70,(int)igStructMetaField_getMetaCall,(int)lbl_80463508,64,(int)igStructMetaField_vtableRead,(int)igStructMetaField_fieldInit,0,(int)lbl_8055D090);
}
void *igStructMetaField_getMetaCall(){return igStructMetaField_getMeta();}
}
#pragma pop
