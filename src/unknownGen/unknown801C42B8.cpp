#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801DF2D4(int);
void fn_801DF2FC();
void *fn_801DF328();
void igCompiledTransform_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B05B8[];
extern char lbl_804B05D0[];
extern char lbl_804B05DC[];
extern char lbl_804B6FA0[];
extern char lbl_804B6FFC[];
extern char lbl_804B7060[];
extern char lbl_80560750[8];
extern void *lbl_805621F4;
extern void *lbl_805650F0;
extern void *lbl_805650F4;
void *igCompiledTransformList_getMeta();
void *igCompiledTransformList_vtableRead();
void fn_801C43EC();
void igCompiledTransformList_register();
void *igCompiledTransformList_getMetaCall();
void *igCompiledTransform_getMeta();
void *igCompiledTransform_vtableRead();
void fn_801C45DC();
void igCompiledTransform_register();
void *igCompiledTransform_getMetaCall();
}
struct UnknownGenObject801C437C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C4514 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C4514(){fn_8006665C(this);}
};
struct UnknownGenObject801C4514 : UnknownGenRoot801C4514 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 char unknown1C[20];
 inline ~UnknownGenObject801C4514(){unknown00=lbl_804B6FA0;}
};
extern "C" {
void fn_801C42B8(){
 fn_801DF2FC();
 fn_80065DBC((int)fn_801DF2D4);
}
void *fn_801C42E4(){return fn_801DF328();}
void *fn_801C4304(){
 if(!lbl_805650F0) lbl_805650F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805650F0;
}
void *igCompiledTransformList_getMeta(){
 if(!lbl_805650F0 || !(reinterpret_cast<unsigned int *>(lbl_805650F0)[0x24/4]&4)) fn_801C43EC();
 return lbl_805650F0;
}
void *igCompiledTransformList_vtableRead(){
 UnknownGenObject801C437C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7060;
 object.unknown00=lbl_804B6FFC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C43EC(){
 fn_80066188((int)igCompiledTransformList_register);
}
void igCompiledTransformList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650F0,(int)igObjectList_register,(int)fn_80024180,(int)igCompiledTransformList_getMetaCall,(int)lbl_804B05B8,20,(int)igCompiledTransformList_vtableRead,0,0,(int)lbl_80560750);
}
void *igCompiledTransformList_getMetaCall(){return igCompiledTransformList_getMeta();}
void *fn_801C44A0(void *object){
 fn_801C45DC();
 return fn_8006546C(lbl_805650F4,object);
}
void *igCompiledTransform_getMeta(){
 if(!lbl_805650F4 || !(reinterpret_cast<unsigned int *>(lbl_805650F4)[0x24/4]&4)) fn_801C45DC();
 return lbl_805650F4;
}
void *igCompiledTransform_vtableRead(){
 UnknownGenObject801C4514 object;
 object.unknown00=lbl_804B6FA0;
 object.unknown0C.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C45DC(){
 fn_80066188((int)igCompiledTransform_register);
}
void igCompiledTransform_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650F4,(int)igObject_register,(int)fn_800237D0,(int)igCompiledTransform_getMetaCall,(int)lbl_804B05DC,36,(int)igCompiledTransform_vtableRead,(int)igCompiledTransform_fieldInit,0,(int)lbl_804B05D0);
}
void *igCompiledTransform_getMetaCall(){return igCompiledTransform_getMeta();}
}
#pragma pop
