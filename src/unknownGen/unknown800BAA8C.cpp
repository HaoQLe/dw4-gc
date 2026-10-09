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
void fn_800ABC8C();
void fn_800BB148();
void igAttrPool_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80479FD8[];
extern char lbl_80479FE8[];
extern char lbl_80479FFC[];
extern char lbl_8047A008[];
extern char lbl_8047D4B8[];
extern char lbl_8047D9C0[];
extern char lbl_8047DA24[];
extern char lbl_8047DA88[];
extern char lbl_8047DAEC[];
extern char lbl_8055E6C8[8];
extern char lbl_8055E6D0[8];
extern void *lbl_805621F4;
extern void *lbl_80562A40;
extern void *lbl_80562A44;
extern void *lbl_80562A48;
void *igTextureList_getMeta();
void *igTextureList_vtableRead();
void fn_800BABAC();
void igTextureList_register();
void *igTextureList_getMetaCall();
void *igGeometryAttrList_getMeta();
void *igGeometryAttrList_vtableRead();
void fn_800BAD80();
void igGeometryAttrList_register();
void *igGeometryAttrList_getMetaCall();
void *igAttrPool_getMeta();
void *igAttrPool_vtableRead();
void fn_800BAFA8();
void igAttrPool_register();
void *igAttrPool_getMetaCall();
}
struct UnknownGenObject800BAB3C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BAD10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800BAEA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BAEA8(){fn_8006665C(this);}
};
struct UnknownGenObject800BAEA8 : UnknownGenRoot800BAEA8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject800BAEA8(){unknown00=lbl_8047D4B8;}
};
extern "C" {
void *fn_800BAA8C(void *object){
 fn_800BABAC();
 return fn_8006546C(lbl_80562A40,object);
}
void *fn_800BAAC4(){
 if(!lbl_80562A40) lbl_80562A40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A40;
}
void *igTextureList_getMeta(){
 if(!lbl_80562A40 || !(reinterpret_cast<unsigned int *>(lbl_80562A40)[0x24/4]&4)) fn_800BABAC();
 return lbl_80562A40;
}
void *igTextureList_vtableRead(){
 UnknownGenObject800BAB3C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DAEC;
 object.unknown00=lbl_8047DA88;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BABAC(){
 fn_80066188((int)igTextureList_register);
}
void igTextureList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A40,(int)igObjectList_register,(int)fn_80024180,(int)igTextureList_getMetaCall,(int)lbl_80479FD8,20,(int)igTextureList_vtableRead,0,0,(int)lbl_8055E6C8);
}
void *igTextureList_getMetaCall(){return igTextureList_getMeta();}
void *fn_800BAC60(void *object){
 fn_800BAD80();
 return fn_8006546C(lbl_80562A44,object);
}
void *fn_800BAC98(){
 if(!lbl_80562A44) lbl_80562A44=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562A44;
}
void *igGeometryAttrList_getMeta(){
 if(!lbl_80562A44 || !(reinterpret_cast<unsigned int *>(lbl_80562A44)[0x24/4]&4)) fn_800BAD80();
 return lbl_80562A44;
}
void *igGeometryAttrList_vtableRead(){
 UnknownGenObject800BAD10_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DA24;
 object.unknown00=lbl_8047D9C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BAD80(){
 fn_80066188((int)igGeometryAttrList_register);
}
void igGeometryAttrList_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A44,(int)igObjectList_register,(int)fn_80024180,(int)igGeometryAttrList_getMetaCall,(int)lbl_80479FE8,20,(int)igGeometryAttrList_vtableRead,0,0,(int)lbl_8055E6D0);
}
void *igGeometryAttrList_getMetaCall(){return igGeometryAttrList_getMeta();}
void *fn_800BAE34(void *object){
 fn_800BAFA8();
 return fn_8006546C(lbl_80562A48,object);
}
void *igAttrPool_getMeta(){
 if(!lbl_80562A48 || !(reinterpret_cast<unsigned int *>(lbl_80562A48)[0x24/4]&4)) fn_800BAFA8();
 return lbl_80562A48;
}
void *igAttrPool_vtableRead(){
 UnknownGenObject800BAEA8 object;
 object.unknown00=lbl_8047D4B8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BAFA8(){
 fn_80066188((int)igAttrPool_register);
}
void igAttrPool_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A48,(int)igObject_register,(int)fn_800237D0,(int)igAttrPool_getMetaCall,(int)lbl_8047A008,20,(int)igAttrPool_vtableRead,(int)igAttrPool_fieldInit,(int)fn_800BB148,(int)lbl_80479FFC);
}
void *igAttrPool_getMetaCall(){return igAttrPool_getMeta();}
}
#pragma pop
