#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igCBBox_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049CF84[];
extern char lbl_804A40EC[];
extern char lbl_804AA48C[];
extern char lbl_804AA4F0[];
extern char lbl_8055F6D4[8];
extern char lbl_8055F6DC[8];
extern void *lbl_805621F4;
extern void *lbl_80563D7C;
extern void *lbl_80563D80;
void *igCBBoxList_getMeta();
void *igCBBoxList_vtableRead();
void fn_80138050();
void igCBBoxList_register();
void *igCBBoxList_getMetaCall();
void *igCBBox_getMeta();
void *igCBBox_vtableRead();
void fn_801381B8();
void igCBBox_register();
void *igCBBox_getMetaCall();
}
struct UnknownGenObject80137FE0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80138178_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80137F68(){
 if(!lbl_80563D7C) lbl_80563D7C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563D7C;
}
void *igCBBoxList_getMeta(){
 if(!lbl_80563D7C || !(reinterpret_cast<unsigned int *>(lbl_80563D7C)[0x24/4]&4)) fn_80138050();
 return lbl_80563D7C;
}
void *igCBBoxList_vtableRead(){
 UnknownGenObject80137FE0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AA4F0;
 object.unknown00=lbl_804AA48C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80138050(){
 fn_80066188((int)igCBBoxList_register);
}
void igCBBoxList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D7C,(int)igObjectList_register,(int)fn_80024180,(int)igCBBoxList_getMetaCall,(int)lbl_8049CF84,20,(int)igCBBoxList_vtableRead,0,0,(int)lbl_8055F6D4);
}
void *igCBBoxList_getMetaCall(){return igCBBoxList_getMeta();}
void *fn_80138104(void *object){
 fn_801381B8();
 return fn_8006546C(lbl_80563D80,object);
}
void *igCBBox_getMeta(){
 if(!lbl_80563D80 || !(reinterpret_cast<unsigned int *>(lbl_80563D80)[0x24/4]&4)) fn_801381B8();
 return lbl_80563D80;
}
void *igCBBox_vtableRead(){
 UnknownGenObject80138178_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A40EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801381B8(){
 fn_80066188((int)igCBBox_register);
}
void igCBBox_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563D80,(int)igObject_register,(int)fn_800237D0,(int)igCBBox_getMetaCall,(int)lbl_8055F6DC,24,(int)igCBBox_vtableRead,(int)igCBBox_fieldInit,0,0);
}
void *igCBBox_getMetaCall(){return igCBBox_getMeta();}
}
#pragma pop
