#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *igGamecubeVertexStream_getMeta();
void igNamedObject_register();
void igObjectList_register();
void igVertexData_fieldInit();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80480EC0[];
extern char lbl_8048867C[];
extern char lbl_80488844[];
extern char lbl_8049402C[];
extern char lbl_80494088[];
extern char lbl_804940EC[];
extern char lbl_8055EAA8[8];
extern char lbl_8055EAB0[8];
extern void *lbl_805621F4;
extern void *lbl_80562DB8;
extern void *lbl_80562DBC;
extern void *lbl_80562DC0;
void *igVertexDataList_getMeta();
void *igVertexDataList_vtableRead();
void fn_800CF7C0();
void igVertexDataList_register();
void *igVertexDataList_getMetaCall();
void *igVertexData_getMeta();
void *igVertexData_vtableRead();
void fn_800CFA50();
void igVertexData_register();
void *igVertexData_getMetaCall();
}
struct UnknownGenObject800CF750_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CF970 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF970(){fn_8006665C(this);}
};
struct UnknownGenObject800CF970_0 : UnknownGenRoot800CF970 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF970_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CF970 : UnknownGenObject800CF970_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject800CF970(){unknown00=lbl_8049402C;}
};
extern "C" {
void *igGamecubeVertexStream_getMetaCall(){return igGamecubeVertexStream_getMeta();}
void *fn_800CF6A0(void *object){
 fn_800CF7C0();
 return fn_8006546C(lbl_80562DB8,object);
}
void *fn_800CF6D8(){
 if(!lbl_80562DB8) lbl_80562DB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562DB8;
}
void *igVertexDataList_getMeta(){
 if(!lbl_80562DB8 || !(reinterpret_cast<unsigned int *>(lbl_80562DB8)[0x24/4]&4)) fn_800CF7C0();
 return lbl_80562DB8;
}
void *igVertexDataList_vtableRead(){
 UnknownGenObject800CF750_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804940EC;
 object.unknown00=lbl_80494088;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CF7C0(){
 fn_80066188((int)igVertexDataList_register);
}
void igVertexDataList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562DB8,(int)igObjectList_register,(int)fn_80024180,(int)igVertexDataList_getMetaCall,(int)lbl_8048867C,20,(int)igVertexDataList_vtableRead,0,0,(int)lbl_8055EAA8);
}
void *igVertexDataList_getMetaCall(){return igVertexDataList_getMeta();}
void *fn_800CF874(){
 char *data=lbl_80480EC0;
 if(!lbl_80562DBC) lbl_80562DBC=fn_800635C8(data+0x7968,data+0x7910,data+0x793C,0xB);
 return lbl_80562DBC;
}
void *fn_800CF8C0(void *object){
 fn_800CFA50();
 return fn_8006546C(lbl_80562DC0,object);
}
void *fn_800CF8F8(){
 if(!lbl_80562DC0) lbl_80562DC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562DC0;
}
void *igVertexData_getMeta(){
 if(!lbl_80562DC0 || !(reinterpret_cast<unsigned int *>(lbl_80562DC0)[0x24/4]&4)) fn_800CFA50();
 return lbl_80562DC0;
}
void *igVertexData_vtableRead(){
 UnknownGenObject800CF970 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049402C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800CFA50(){
 fn_80066188((int)igVertexData_register);
}
void igVertexData_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562DC0,(int)igNamedObject_register,(int)fn_80023CF4,(int)igVertexData_getMetaCall,(int)lbl_80488844,36,(int)igVertexData_vtableRead,(int)igVertexData_fieldInit,0,(int)lbl_8055EAB0);
}
void *igVertexData_getMetaCall(){return igVertexData_getMeta();}
}
#pragma pop
