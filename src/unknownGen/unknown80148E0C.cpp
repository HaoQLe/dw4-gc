#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800D1DA4();
void fn_8012FC48();
void igFilterImage_fieldInit();
void igImageUtils_register();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804930AC[];
extern char lbl_8049EEA4[];
extern char lbl_8049EEBC[];
extern char lbl_8049EED0[];
extern char lbl_8049EEE0[];
extern char lbl_8049EEF8[];
extern char lbl_8049EF08[];
extern char lbl_8049EF14[];
extern char lbl_8049EF20[];
extern char lbl_804A6B28[];
extern char lbl_804A6B8C[];
extern char lbl_804A903C[];
extern char lbl_804A90A0[];
extern char lbl_804A9160[];
extern char lbl_804A91BC[];
extern char lbl_804A9220[];
extern char lbl_804A9284[];
extern char lbl_804A92E8[];
extern char lbl_8055FAF8[8];
extern char lbl_8055FB00[8];
extern char lbl_8055FB08[4];
extern char lbl_8055FB10[4];
extern char lbl_8055FB14[4];
extern char lbl_8055FB18[4];
extern char lbl_8055FB1C[8];
extern char lbl_8055FB34[8];
extern char lbl_8055FB3C[8];
extern char lbl_8055FB44[8];
extern void *lbl_80564274;
extern void *lbl_80564278;
extern void *lbl_80564280;
extern void *lbl_8056428C;
extern void *lbl_80564290;
extern void *lbl_80564294;
extern void *lbl_80564298;
void *igZFilterWeightListList_getMeta();
void *igZFilterWeightListList_vtableRead();
void fn_80148EF0();
void igZFilterWeightListList_register();
void *igZFilterWeightListList_getMetaCall();
void *igZFilterWeightList_getMeta();
void *igZFilterWeightList_vtableRead();
void fn_80149088();
void igZFilterWeightList_register();
void *igZFilterWeightList_getMetaCall();
void igZFilterWeightList_fieldInit();
void *igZFilterWeight_getMeta();
void *igZFilterWeight_vtableRead();
void fn_80149260();
void igZFilterWeight_register();
void *igZFilterWeight_getMetaCall();
void igZFilterWeight_fieldInit();
void *igGaussianSmoothImage_getMeta();
void *igGaussianSmoothImage_vtableRead();
void fn_801494E8();
void igGaussianSmoothImage_register();
void *igGaussianSmoothImage_getMetaCall();
void *igGaussianSmoothImage_parentMeta();
void *igSmoothImage_getMeta();
void fn_801495DC();
void igSmoothImage_register();
void *igSmoothImage_getMetaCall();
void *fn_80149688();
void *igZoomImage_getMeta();
void *igZoomImage_vtableRead();
void fn_80149820();
void igZoomImage_register();
void *igZoomImage_getMetaCall();
void *igFilterImage_getMeta();
void fn_8014990C();
void igFilterImage_register();
void *igFilterImage_getMetaCall();
}
struct UnknownGenObject80148E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149018_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149220_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801493BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801493BC(){fn_8006665C(this);}
};
struct UnknownGenObject801493BC_0 : UnknownGenRoot801493BC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801493BC_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject801493BC_1 : UnknownGenObject801493BC_0 {
 inline ~UnknownGenObject801493BC_1(){unknown00=lbl_804A6B28;}
};
struct UnknownGenObject801493BC : UnknownGenObject801493BC_1 {
 char unknown14[4];
 inline ~UnknownGenObject801493BC(){unknown00=lbl_804A90A0;}
};
struct UnknownGenRoot80149704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80149704(){fn_8006665C(this);}
};
struct UnknownGenObject80149704_0 : UnknownGenRoot80149704 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80149704_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject80149704 : UnknownGenObject80149704_0 {
 char unknown14[4];
 inline ~UnknownGenObject80149704(){unknown00=lbl_804A903C;}
};
extern "C" {
void *fn_80148E0C(void *object){
 fn_80148EF0();
 return fn_8006546C(lbl_80564274,object);
}
void *igZFilterWeightListList_getMeta(){
 if(!lbl_80564274 || !(reinterpret_cast<unsigned int *>(lbl_80564274)[0x24/4]&4)) fn_80148EF0();
 return lbl_80564274;
}
void *igZFilterWeightListList_vtableRead(){
 UnknownGenObject80148E80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A92E8;
 object.unknown00=lbl_804A9284;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80148EF0(){
 fn_80066188((int)igZFilterWeightListList_register);
}
void igZFilterWeightListList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564274,(int)igObjectList_register,(int)fn_80024180,(int)igZFilterWeightListList_getMetaCall,(int)lbl_8049EEA4,20,(int)igZFilterWeightListList_vtableRead,0,0,(int)lbl_8055FAF8);
}
void *igZFilterWeightListList_getMetaCall(){return igZFilterWeightListList_getMeta();}
void *fn_80148FA4(void *object){
 fn_80149088();
 return fn_8006546C(lbl_80564278,object);
}
void *igZFilterWeightList_getMeta(){
 if(!lbl_80564278 || !(reinterpret_cast<unsigned int *>(lbl_80564278)[0x24/4]&4)) fn_80149088();
 return lbl_80564278;
}
void *igZFilterWeightList_vtableRead(){
 UnknownGenObject80149018_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9220;
 object.unknown00=lbl_804A91BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149088(){
 fn_80066188((int)igZFilterWeightList_register);
}
void igZFilterWeightList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564278,(int)igObjectList_register,(int)fn_80024180,(int)igZFilterWeightList_getMetaCall,(int)lbl_8049EEBC,24,(int)igZFilterWeightList_vtableRead,(int)igZFilterWeightList_fieldInit,0,(int)lbl_8055FB00);
}
void *igZFilterWeightList_getMetaCall(){return igZFilterWeightList_getMeta();}
void igZFilterWeightList_fieldInit(){
 void *value0=lbl_80564278;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB08,1);
 fn_800659C0(value0,lbl_8055FB10,lbl_8055FB14,lbl_8055FB18,value1);
}
void *fn_801491AC(void *object){
 fn_80149260();
 return fn_8006546C(lbl_80564280,object);
}
void *igZFilterWeight_getMeta(){
 if(!lbl_80564280 || !(reinterpret_cast<unsigned int *>(lbl_80564280)[0x24/4]&4)) fn_80149260();
 return lbl_80564280;
}
void *igZFilterWeight_vtableRead(){
 UnknownGenObject80149220_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A9160;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149260(){
 fn_80066188((int)igZFilterWeight_register);
}
void igZFilterWeight_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564280,(int)igObject_register,(int)fn_800237D0,(int)igZFilterWeight_getMetaCall,(int)lbl_8049EED0,24,(int)igZFilterWeight_vtableRead,(int)igZFilterWeight_fieldInit,0,0);
}
void *igZFilterWeight_getMetaCall(){return igZFilterWeight_getMeta();}
void igZFilterWeight_fieldInit(){
 void *value0=lbl_80564280;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB1C,2);
 fn_800659C0(value0,lbl_8055FB34,lbl_8055FB3C,lbl_8055FB44,value1);
}
void *igGaussianSmoothImage_getMeta(){
 if(!lbl_8056428C || !(reinterpret_cast<unsigned int *>(lbl_8056428C)[0x24/4]&4)) fn_801494E8();
 return lbl_8056428C;
}
void *igGaussianSmoothImage_vtableRead(){
 UnknownGenObject801493BC object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A6B28;
 object.unknown00=lbl_804A90A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801494E8(){
 fn_80066188((int)igGaussianSmoothImage_register);
}
void igGaussianSmoothImage_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056428C,(int)igSmoothImage_register,(int)igGaussianSmoothImage_parentMeta,(int)igGaussianSmoothImage_getMetaCall,(int)lbl_8049EEE0,20,(int)igGaussianSmoothImage_vtableRead,0,0,0);
}
void *igGaussianSmoothImage_getMetaCall(){return igGaussianSmoothImage_getMeta();}
void *igGaussianSmoothImage_parentMeta(){return lbl_80564290;}
void *igSmoothImage_getMeta(){
 if(!lbl_80564290 || !(reinterpret_cast<unsigned int *>(lbl_80564290)[0x24/4]&4)) fn_801495DC();
 return lbl_80564290;
}
void fn_801495DC(){
 fn_80066188((int)igSmoothImage_register);
}
void igSmoothImage_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564290,(int)igFilterImage_register,(int)fn_80149688,(int)igSmoothImage_getMetaCall,(int)lbl_8049EEF8,20,0,0,0,0);
}
void *igSmoothImage_getMetaCall(){return igSmoothImage_getMeta();}
void *fn_80149688(){return lbl_80564298;}
void *fn_80149690(void *object){
 fn_80149820();
 return fn_8006546C(lbl_80564294,object);
}
void *igZoomImage_getMeta(){
 if(!lbl_80564294 || !(reinterpret_cast<unsigned int *>(lbl_80564294)[0x24/4]&4)) fn_80149820();
 return lbl_80564294;
}
void *igZoomImage_vtableRead(){
 UnknownGenObject80149704 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A903C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149820(){
 fn_80066188((int)igZoomImage_register);
}
void igZoomImage_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564294,(int)igFilterImage_register,(int)fn_80149688,(int)igZoomImage_getMetaCall,(int)lbl_8049EF08,20,(int)igZoomImage_vtableRead,0,0,0);
}
void *igZoomImage_getMetaCall(){return igZoomImage_getMeta();}
void *igFilterImage_getMeta(){
 if(!lbl_80564298 || !(reinterpret_cast<unsigned int *>(lbl_80564298)[0x24/4]&4)) fn_8014990C();
 return lbl_80564298;
}
void fn_8014990C(){
 fn_80066188((int)igFilterImage_register);
}
void igFilterImage_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564298,(int)igImageUtils_register,(int)fn_800D1DA4,(int)igFilterImage_getMetaCall,(int)lbl_8049EF20,20,0,(int)igFilterImage_fieldInit,0,(int)lbl_8049EF14);
}
void *igFilterImage_getMetaCall(){return igFilterImage_getMeta();}
}
#pragma pop
