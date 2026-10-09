#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_800427E8();
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDirEntry_fieldInit();
void igNamedObject_register();
extern char lbl_80463100[];
extern char lbl_804672C8[];
extern char lbl_804672D4[];
extern char lbl_80467314[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
extern char lbl_8055D5B0[8];
extern void *lbl_80561CF8;
extern void *lbl_80561CFC;
extern void *lbl_80561D00;
void *igDirEntry_getMeta();
void *igDirEntry_vtableRead();
void fn_80032D58();
void igDirEntry_register();
void *igDirEntry_getMetaCall();
}
struct UnknownGenRoot80032CC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032CC0(){fn_8006665C(this);}
};
struct UnknownGenObject80032CC0_0 : UnknownGenRoot80032CC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80032CC0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80032CC0 : UnknownGenObject80032CC0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject80032CC0(){unknown00=lbl_80472EF4;}
};
extern "C" {
void *fn_80032B94(){return fn_800427E8();}
void *fn_80032BB4(){
 void *value0;
 if(!lbl_80561CF8){
  value0=fn_800635C8(lbl_8055D5B0,lbl_804672C8,lbl_804672D4,3);
  lbl_80561CF8=value0;
 }
 return lbl_80561CF8;
}
void *fn_80032C00(){
 char *data=lbl_80463100;
 if(!lbl_80561CFC) lbl_80561CFC=fn_800635C8(data+0x4204,data+0x41EC,data+0x41F8,0x3);
 return lbl_80561CFC;
}
void *fn_80032C4C(void *object){
 fn_80032D58();
 return fn_8006546C(lbl_80561D00,object);
}
void *igDirEntry_getMeta(){
 if(!lbl_80561D00 || !(reinterpret_cast<unsigned int *>(lbl_80561D00)[0x24/4]&4)) fn_80032D58();
 return lbl_80561D00;
}
void *igDirEntry_vtableRead(){
 UnknownGenObject80032CC0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80032D58(){
 fn_80066188((int)igDirEntry_register);
}
void igDirEntry_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D00,(int)igNamedObject_register,(int)fn_80023CF4,(int)igDirEntry_getMetaCall,(int)lbl_80467314,28,(int)igDirEntry_vtableRead,(int)igDirEntry_fieldInit,0,0);
}
void *igDirEntry_getMetaCall(){return igDirEntry_getMeta();}
}
#pragma pop
