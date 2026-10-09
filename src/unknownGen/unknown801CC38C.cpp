#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igAnimation_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B268C[];
extern char lbl_804B269C[];
extern char lbl_804B26B0[];
extern char lbl_804B5DA0[];
extern char lbl_804B5E04[];
extern char lbl_804B76E0[];
extern char lbl_805609F0[8];
extern void *lbl_805621F4;
extern void *lbl_8056550C;
extern void *lbl_80565510;
void *igAnimationList_getMeta();
void *igAnimationList_vtableRead();
void fn_801CC4AC();
void igAnimationList_register();
void *igAnimationList_getMetaCall();
void *igAnimation_getMeta();
void *igAnimation_vtableRead();
void fn_801CC798();
void igAnimation_register();
void *igAnimation_getMetaCall();
}
struct UnknownGenObject801CC43C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CC610 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CC610(){fn_8006665C(this);}
};
struct UnknownGenObject801CC610_0 : UnknownGenRoot801CC610 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CC610_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CC610 : UnknownGenObject801CC610_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject801CC610(){unknown00=lbl_804B76E0;}
};
extern "C" {
void *fn_801CC38C(void *object){
 fn_801CC4AC();
 return fn_8006546C(lbl_8056550C,object);
}
void *fn_801CC3C4(){
 if(!lbl_8056550C) lbl_8056550C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056550C;
}
void *igAnimationList_getMeta(){
 if(!lbl_8056550C || !(reinterpret_cast<unsigned int *>(lbl_8056550C)[0x24/4]&4)) fn_801CC4AC();
 return lbl_8056550C;
}
void *igAnimationList_vtableRead(){
 UnknownGenObject801CC43C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5E04;
 object.unknown00=lbl_804B5DA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CC4AC(){
 fn_80066188((int)igAnimationList_register);
}
void igAnimationList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056550C,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationList_getMetaCall,(int)lbl_804B268C,20,(int)igAnimationList_vtableRead,0,0,(int)lbl_805609F0);
}
void *igAnimationList_getMetaCall(){return igAnimationList_getMeta();}
void *fn_801CC560(void *object){
 fn_801CC798();
 return fn_8006546C(lbl_80565510,object);
}
void *fn_801CC598(){
 if(!lbl_80565510) lbl_80565510=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565510;
}
void *igAnimation_getMeta(){
 if(!lbl_80565510 || !(reinterpret_cast<unsigned int *>(lbl_80565510)[0x24/4]&4)) fn_801CC798();
 return lbl_80565510;
}
void *igAnimation_vtableRead(){
 UnknownGenObject801CC610 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B76E0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CC798(){
 fn_80066188((int)igAnimation_register);
}
void igAnimation_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565510,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimation_getMetaCall,(int)lbl_804B26B0,64,(int)igAnimation_vtableRead,(int)igAnimation_fieldInit,0,(int)lbl_804B269C);
}
void *igAnimation_getMetaCall(){return igAnimation_getMeta();}
}
#pragma pop
