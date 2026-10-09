#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igInfo_register();
void igSceneInfo_fieldInit();
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804AD340[];
extern char lbl_804AD34C[];
extern char lbl_804AD360[];
extern char lbl_804B3D68[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B877C[];
extern void *lbl_805621F4;
extern void *lbl_80564A10;
extern void *lbl_80564A14;
void *igSegment_getMeta();
void *igSegment_vtableRead();
void fn_801B3EC0();
void igSegment_register();
void *igSegment_getMetaCall();
void *igSceneInfo_getMeta();
void *igSceneInfo_vtableRead();
void fn_801B41C0();
void igSceneInfo_register();
void *igSceneInfo_getMetaCall();
}
struct UnknownGenRoot801B3D48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B3D48(){fn_8006665C(this);}
};
struct UnknownGenObject801B3D48_0 : UnknownGenRoot801B3D48 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B3D48_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B3D48_1 : UnknownGenObject801B3D48_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801B3D48_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801B3D48_2 : UnknownGenObject801B3D48_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801B3D48_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801B3D48 : UnknownGenObject801B3D48_2 {
 char unknown20[8];
 inline ~UnknownGenObject801B3D48(){unknown00=lbl_804B877C;}
};
struct UnknownGenRoot801B4020 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4020(){fn_8006665C(this);}
};
struct UnknownGenObject801B4020_0 : UnknownGenRoot801B4020 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B4020_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B4020_1 : UnknownGenObject801B4020_0 {
 inline ~UnknownGenObject801B4020_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801B4020 : UnknownGenObject801B4020_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[28];
 UnknownGenRefMember unknown3C;
 inline ~UnknownGenObject801B4020(){unknown00=lbl_804B3D68;}
};
extern "C" {
void *fn_801B3CD0(){
 if(!lbl_80564A10) lbl_80564A10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A10;
}
void *igSegment_getMeta(){
 if(!lbl_80564A10 || !(reinterpret_cast<unsigned int *>(lbl_80564A10)[0x24/4]&4)) fn_801B3EC0();
 return lbl_80564A10;
}
void *igSegment_vtableRead(){
 UnknownGenObject801B3D48 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B877C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B3EC0(){
 fn_80066188((int)igSegment_register);
}
void igSegment_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A10,(int)igGroup_register,(int)fn_8011148C,(int)igSegment_getMetaCall,(int)lbl_804AD340,32,(int)igSegment_vtableRead,0,0,0);
}
void *igSegment_getMetaCall(){return igSegment_getMeta();}
void *fn_801B3F70(void *object){
 fn_801B41C0();
 return fn_8006546C(lbl_80564A14,object);
}
void *fn_801B3FA8(){
 if(!lbl_80564A14) lbl_80564A14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A14;
}
void *igSceneInfo_getMeta(){
 if(!lbl_80564A14 || !(reinterpret_cast<unsigned int *>(lbl_80564A14)[0x24/4]&4)) fn_801B41C0();
 return lbl_80564A14;
}
void *igSceneInfo_vtableRead(){
 UnknownGenObject801B4020 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B3D68;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B41C0(){
 fn_80066188((int)igSceneInfo_register);
}
void igSceneInfo_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A14,(int)igInfo_register,(int)fn_800284EC,(int)igSceneInfo_getMetaCall,(int)lbl_804AD360,64,(int)igSceneInfo_vtableRead,(int)igSceneInfo_fieldInit,0,(int)lbl_804AD34C);
}
void *igSceneInfo_getMetaCall(){return igSceneInfo_getMeta();}
}
#pragma pop
