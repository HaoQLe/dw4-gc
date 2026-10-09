#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_801651CC();
void *fn_801652D4();
void igCachedInstanceLock_register();
void igCreateBoundingBoxes_fieldInit();
void igObjectList_register();
void igOptBase_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049F7C8[];
extern char lbl_8049F7D8[];
extern char lbl_8049F7E8[];
extern char lbl_8049F7F8[];
extern char lbl_8049F834[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A6564[];
extern char lbl_804A70C0[];
extern char lbl_804A713C[];
extern char lbl_804A71C4[];
extern char lbl_804A8524[];
extern char lbl_804A8940[];
extern char lbl_804A89A4[];
extern char lbl_804A8A08[];
extern char lbl_804A8A6C[];
extern char lbl_804AA8E4[];
extern char lbl_804AAF48[];
extern char lbl_8055FBB0[8];
extern char lbl_8055FBB8[8];
extern char lbl_8055FBC0[8];
extern char lbl_8055FBC8[8];
extern char lbl_8055FBD0[8];
extern char lbl_8055FBD8[8];
extern void *lbl_805621F4;
extern void *lbl_805643CC;
extern void *lbl_805643D0;
extern void *lbl_805643D4;
extern void *lbl_805643D8;
extern void *lbl_805643E4;
extern void *lbl_80564558;
void *igMetaEnumList_getMeta();
void *igMetaEnumList_vtableRead();
void fn_8014CE74();
void igMetaEnumList_register();
void *igMetaEnumList_getMetaCall();
void *igDataListList_getMeta();
void *igDataListList_vtableRead();
void fn_8014D048();
void igDataListList_register();
void *igDataListList_getMetaCall();
void *igDataPumpLock_getMeta();
void *igDataPumpLock_vtableRead();
void fn_8014D1A8();
void igDataPumpLock_register();
void *igDataPumpLock_getMetaCall();
void *igDataPumpLock_parentMeta();
void *igCreateInfosFromRegistry_getMeta();
void *igCreateInfosFromRegistry_vtableRead();
void fn_8014D3CC();
void igCreateInfosFromRegistry_register();
void *igCreateInfosFromRegistry_getMetaCall();
void igCreateInfosFromRegistry_fieldInit();
void *igCreateBoundingBoxes_getMeta();
void *igCreateBoundingBoxes_vtableRead();
void fn_8014D658();
void igCreateBoundingBoxes_register();
void *igCreateBoundingBoxes_getMetaCall();
}
struct UnknownGenObject8014CE04_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014CFD8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014D138_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot8014D29C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D29C(){fn_8006665C(this);}
};
struct UnknownGenObject8014D29C_0 : UnknownGenRoot8014D29C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D29C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D29C : UnknownGenObject8014D29C_0 {
 UnknownGenString unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8014D29C(){unknown00=lbl_804A713C;}
};
struct UnknownGenRoot8014D528 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014D528(){fn_8006665C(this);}
};
struct UnknownGenObject8014D528_0 : UnknownGenRoot8014D528 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014D528_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014D528 : UnknownGenObject8014D528_0 {
 char unknown28[4];
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014D528(){unknown00=lbl_804A71C4;}
};
extern "C" {
void *fn_8014CD4C(){return fn_801651CC();}
void *fn_8014CD6C(){return fn_801652D4();}
void *fn_8014CD8C(){
 if(!lbl_805643CC) lbl_805643CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805643CC;
}
void *igMetaEnumList_getMeta(){
 if(!lbl_805643CC || !(reinterpret_cast<unsigned int *>(lbl_805643CC)[0x24/4]&4)) fn_8014CE74();
 return lbl_805643CC;
}
void *igMetaEnumList_vtableRead(){
 UnknownGenObject8014CE04_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A8A6C;
 object.unknown00=lbl_804A8A08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014CE74(){
 fn_80066188((int)igMetaEnumList_register);
}
void igMetaEnumList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643CC,(int)igObjectList_register,(int)fn_80024180,(int)igMetaEnumList_getMetaCall,(int)lbl_8049F7C8,20,(int)igMetaEnumList_vtableRead,0,0,(int)lbl_8055FBB0);
}
void *igMetaEnumList_getMetaCall(){return igMetaEnumList_getMeta();}
void *fn_8014CF28(void *object){
 fn_8014D048();
 return fn_8006546C(lbl_805643D0,object);
}
void *fn_8014CF60(){
 if(!lbl_805643D0) lbl_805643D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805643D0;
}
void *igDataListList_getMeta(){
 if(!lbl_805643D0 || !(reinterpret_cast<unsigned int *>(lbl_805643D0)[0x24/4]&4)) fn_8014D048();
 return lbl_805643D0;
}
void *igDataListList_vtableRead(){
 UnknownGenObject8014CFD8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A89A4;
 object.unknown00=lbl_804A8940;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D048(){
 fn_80066188((int)igDataListList_register);
}
void igDataListList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643D0,(int)igObjectList_register,(int)fn_80024180,(int)igDataListList_getMetaCall,(int)lbl_8049F7D8,20,(int)igDataListList_vtableRead,0,0,(int)lbl_8055FBB8);
}
void *igDataListList_getMetaCall(){return igDataListList_getMeta();}
void *igDataPumpLock_getMeta(){
 if(!lbl_805643D4 || !(reinterpret_cast<unsigned int *>(lbl_805643D4)[0x24/4]&4)) fn_8014D1A8();
 return lbl_805643D4;
}
void *igDataPumpLock_vtableRead(){
 UnknownGenObject8014D138_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA8E4;
 object.unknown00=lbl_804A6564;
 object.unknown00=lbl_804A8524;
 object.unknown00=lbl_804A70C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D1A8(){
 fn_80066188((int)igDataPumpLock_register);
}
void igDataPumpLock_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643D4,(int)igCachedInstanceLock_register,(int)igDataPumpLock_parentMeta,(int)igDataPumpLock_getMetaCall,(int)lbl_8049F7E8,32,(int)igDataPumpLock_vtableRead,0,0,0);
}
void *igDataPumpLock_getMetaCall(){return igDataPumpLock_getMeta();}
void *igDataPumpLock_parentMeta(){return lbl_80564558;}
void *igCreateInfosFromRegistry_getMeta(){
 if(!lbl_805643D8 || !(reinterpret_cast<unsigned int *>(lbl_805643D8)[0x24/4]&4)) fn_8014D3CC();
 return lbl_805643D8;
}
void *igCreateInfosFromRegistry_vtableRead(){
 UnknownGenObject8014D29C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A713C;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D3CC(){
 fn_80066188((int)igCreateInfosFromRegistry_register);
}
void igCreateInfosFromRegistry_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643D8,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateInfosFromRegistry_getMetaCall,(int)lbl_8049F7F8,48,(int)igCreateInfosFromRegistry_vtableRead,(int)igCreateInfosFromRegistry_fieldInit,0,0);
}
void *igCreateInfosFromRegistry_getMetaCall(){return igCreateInfosFromRegistry_getMeta();}
void igCreateInfosFromRegistry_fieldInit(){
 void *value0=lbl_805643D8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FBC0,2);
 fn_800659C0(value0,lbl_8055FBC8,lbl_8055FBD0,lbl_8055FBD8,value1);
}
void *igCreateBoundingBoxes_getMeta(){
 if(!lbl_805643E4 || !(reinterpret_cast<unsigned int *>(lbl_805643E4)[0x24/4]&4)) fn_8014D658();
 return lbl_805643E4;
}
void *igCreateBoundingBoxes_vtableRead(){
 UnknownGenObject8014D528 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A71C4;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014D658(){
 fn_80066188((int)igCreateBoundingBoxes_register);
}
void igCreateBoundingBoxes_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643E4,(int)igOptBase_register,(int)fn_801308D0,(int)igCreateBoundingBoxes_getMetaCall,(int)lbl_8049F834,52,(int)igCreateBoundingBoxes_vtableRead,(int)igCreateBoundingBoxes_fieldInit,0,0);
}
void *igCreateBoundingBoxes_getMetaCall(){return igCreateBoundingBoxes_getMeta();}
}
#pragma pop
