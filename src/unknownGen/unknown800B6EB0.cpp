#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800ABEF8();
void *fn_800AC294();
void igAttrDefaultManager_register();
void igFogAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80479760[];
extern char lbl_8047977C[];
extern char lbl_8047978C[];
extern char lbl_8047C658[];
extern char lbl_8047C6BC[];
extern char lbl_8047C740[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E474[4];
extern char lbl_8055E478[4];
extern char lbl_8055E47C[4];
extern char lbl_8055E480[4];
extern void *lbl_805628B0;
extern void *lbl_805628B4;
extern void *lbl_805628BC;
void *igGenericAttrDefaultManager_getMeta();
void *igGenericAttrDefaultManager_vtableRead();
void fn_800B6F70();
void igGenericAttrDefaultManager_register();
void *igGenericAttrDefaultManager_getMetaCall();
void *igFogStateAttr_getMeta();
void *igFogStateAttr_vtableRead();
void fn_800B70B4();
void igFogStateAttr_register();
void *igFogStateAttr_getMetaCall();
void igFogStateAttr_fieldInit();
void *igFogAttr_getMeta();
void *igFogAttr_vtableRead();
void fn_800B7268();
void igFogAttr_register();
void *igFogAttr_getMetaCall();
}
struct UnknownGenObject800B6F24_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject800B705C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7210_0 {
 void *unknown00;
 char unknown04[52];
};
extern "C" {
void *fn_800B6EB0(void *object){
 fn_800B6F70();
 return fn_8006546C(lbl_805628B0,object);
}
void *igGenericAttrDefaultManager_getMeta(){
 if(!lbl_805628B0 || !(reinterpret_cast<unsigned int *>(lbl_805628B0)[0x24/4]&4)) fn_800B6F70();
 return lbl_805628B0;
}
void *igGenericAttrDefaultManager_vtableRead(){
 UnknownGenObject800B6F24_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D514;
 object.unknown00=lbl_8047C658;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B6F70(){
 fn_80066188((int)igGenericAttrDefaultManager_register);
}
void igGenericAttrDefaultManager_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628B0,(int)igAttrDefaultManager_register,(int)fn_800ABEF8,(int)igGenericAttrDefaultManager_getMetaCall,(int)lbl_80479760,8,(int)igGenericAttrDefaultManager_vtableRead,0,0,0);
}
void *igGenericAttrDefaultManager_getMetaCall(){return igGenericAttrDefaultManager_getMeta();}
void *igFogStateAttr_getMeta(){
 if(!lbl_805628B4 || !(reinterpret_cast<unsigned int *>(lbl_805628B4)[0x24/4]&4)) fn_800B70B4();
 return lbl_805628B4;
}
void *igFogStateAttr_vtableRead(){
 UnknownGenObject800B705C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C6BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B70B4(){
 fn_80066188((int)igFogStateAttr_register);
}
void igFogStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628B4,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igFogStateAttr_getMetaCall,(int)lbl_8047977C,16,(int)igFogStateAttr_vtableRead,(int)igFogStateAttr_fieldInit,0,0);
}
void *igFogStateAttr_getMetaCall(){return igFogStateAttr_getMeta();}
void igFogStateAttr_fieldInit(){
 void *value0=lbl_805628B4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E474,1);
 fn_800659C0(value0,lbl_8055E478,lbl_8055E47C,lbl_8055E480,value1);
}
void *igFogAttr_getMeta(){
 if(!lbl_805628BC || !(reinterpret_cast<unsigned int *>(lbl_805628BC)[0x24/4]&4)) fn_800B7268();
 return lbl_805628BC;
}
void *igFogAttr_vtableRead(){
 UnknownGenObject800B7210_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C740;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7268(){
 fn_80066188((int)igFogAttr_register);
}
void igFogAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628BC,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igFogAttr_getMetaCall,(int)lbl_8047978C,44,(int)igFogAttr_vtableRead,(int)igFogAttr_fieldInit,0,0);
}
void *igFogAttr_getMetaCall(){return igFogAttr_getMeta();}
}
#pragma pop
