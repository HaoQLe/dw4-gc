#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_8010E6DC();
void *igBasicColorChanger_getMeta();
void igBasicColorChanger_vtableRead();
void igBoxAspect_fieldInit();
void igGuiComponentAspect_register();
void igGuiComponent_register();
void igObjectList_register();
void igObject_register();
void igView_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80494570[];
extern char lbl_8049553C[];
extern char lbl_80495560[];
extern char lbl_80495570[];
extern char lbl_80495580[];
extern char lbl_80495598[];
extern char lbl_804955F4[];
extern char lbl_80495600[];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char lbl_8049659C[];
extern char lbl_80496834[];
extern char lbl_80496894[];
extern char lbl_804968F8[];
extern char lbl_80496F94[];
extern char lbl_80496FF8[];
extern char lbl_8049705C[];
extern char lbl_8055F1D0[8];
extern char lbl_8055F1E0[8];
extern char lbl_8055F1E8[8];
extern char lbl_8055F1F0[8];
extern char lbl_8055F1F8[8];
extern char lbl_8055F200[8];
extern char lbl_8055F208[4];
extern char lbl_8055F20C[4];
extern char lbl_8055F210[4];
extern char lbl_8055F214[4];
extern void *lbl_805621F4;
extern void *lbl_80563750;
extern void *lbl_805637F8;
extern void *lbl_80563804;
extern void *lbl_80563808;
extern void *lbl_8056380C;
extern void *lbl_80563810;
extern void *lbl_80563818;
extern void *lbl_8056381C;
void igBasicColorChanger_register();
void *igBasicColorChanger_getMetaCall();
void *igBasicColorChanger_parentMeta();
void igBasicColorChanger_fieldInit();
void *igColorChanger_getMeta();
void *igColorChanger_vtableRead();
void fn_80113D10();
void igColorChanger_register();
void *igColorChanger_getMetaCall();
void *igBoxComponent_getMeta();
void *igBoxComponent_vtableRead();
void fn_80113F80();
void igBoxComponent_register();
void *igBoxComponent_getMetaCall();
void *igBoxComponent_parentMeta();
void *igChildSizeObserverList_getMeta();
void *igChildSizeObserverList_vtableRead();
void fn_80114120();
void igChildSizeObserverList_register();
void *igChildSizeObserverList_getMetaCall();
void *igChildSizeObserver_getMeta();
void *igChildSizeObserver_vtableRead();
void fn_80114294();
void igChildSizeObserver_register();
void *igChildSizeObserver_getMetaCall();
void igChildSizeObserver_fieldInit();
void *fn_80114424();
void *igBoxAspect_getMeta();
void *igBoxAspect_vtableRead();
void fn_8011457C();
void igBoxAspect_register();
void *igBoxAspect_getMetaCall();
}
struct UnknownGenObject80113CD0_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot80113E38 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80113E38(){fn_8006665C(this);}
};
struct UnknownGenObject80113E38_0 : UnknownGenRoot80113E38 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80113E38_0(){unknown00=lbl_8049659C;}
};
struct UnknownGenObject80113E38 : UnknownGenObject80113E38_0 {
 char unknown20[8];
 inline ~UnknownGenObject80113E38(){unknown00=lbl_8049705C;}
};
struct UnknownGenObject801140B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80114248_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8011449C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011449C(){fn_8006665C(this);}
};
struct UnknownGenObject8011449C : UnknownGenRoot8011449C {
 char unknown04[40];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject8011449C(){unknown00=lbl_804968F8;}
};
extern "C" {
void fn_80113B1C(){
 fn_80066188((int)igBasicColorChanger_register);
}
void igBasicColorChanger_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637F8,(int)igColorChanger_register,(int)igBasicColorChanger_parentMeta,(int)igBasicColorChanger_getMetaCall,(int)lbl_8049553C,88,(int)igBasicColorChanger_vtableRead,(int)igBasicColorChanger_fieldInit,0,0);
}
void *igBasicColorChanger_getMetaCall(){return igBasicColorChanger_getMeta();}
void *igBasicColorChanger_parentMeta(){return lbl_80563804;}
void igBasicColorChanger_fieldInit(){
 void *value0=lbl_805637F8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F1D0,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)4;
 fn_800659C0(value0,lbl_8055F1E0,lbl_8055F1E8,lbl_8055F1F0,value1);
}
void *fn_80113C58(){
 if(!lbl_80563804) lbl_80563804=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563804;
}
void *igColorChanger_getMeta(){
 if(!lbl_80563804 || !(reinterpret_cast<unsigned int *>(lbl_80563804)[0x24/4]&4)) fn_80113D10();
 return lbl_80563804;
}
void *igColorChanger_vtableRead(){
 UnknownGenObject80113CD0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80496834;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80113D10(){
 fn_80066188((int)igColorChanger_register);
}
void igColorChanger_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563804,(int)igObject_register,(int)fn_800237D0,(int)igColorChanger_getMetaCall,(int)lbl_80495560,8,(int)igColorChanger_vtableRead,0,0,0);
}
void *igColorChanger_getMetaCall(){return igColorChanger_getMeta();}
void *fn_80113DC0(){
 if(!lbl_80563808) lbl_80563808=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563808;
}
void *igBoxComponent_getMeta(){
 if(!lbl_80563808 || !(reinterpret_cast<unsigned int *>(lbl_80563808)[0x24/4]&4)) fn_80113F80();
 return lbl_80563808;
}
void *igBoxComponent_vtableRead(){
 UnknownGenObject80113E38 object;
 object.unknown00=lbl_8049659C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 object.unknown00=lbl_8049705C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80113F80(){
 fn_80066188((int)igBoxComponent_register);
}
void igBoxComponent_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563808,(int)igGuiComponent_register,(int)igBoxComponent_parentMeta,(int)igBoxComponent_getMetaCall,(int)lbl_80495570,36,(int)igBoxComponent_vtableRead,0,0,0);
}
void *igBoxComponent_getMetaCall(){return igBoxComponent_getMeta();}
void *igBoxComponent_parentMeta(){return lbl_80563750;}
void *fn_80114038(){
 if(!lbl_8056380C) lbl_8056380C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056380C;
}
void *igChildSizeObserverList_getMeta(){
 if(!lbl_8056380C || !(reinterpret_cast<unsigned int *>(lbl_8056380C)[0x24/4]&4)) fn_80114120();
 return lbl_8056380C;
}
void *igChildSizeObserverList_vtableRead(){
 UnknownGenObject801140B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80496FF8;
 object.unknown00=lbl_80496F94;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114120(){
 fn_80066188((int)igChildSizeObserverList_register);
}
void igChildSizeObserverList_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056380C,(int)igObjectList_register,(int)fn_80024180,(int)igChildSizeObserverList_getMetaCall,(int)lbl_80495580,20,(int)igChildSizeObserverList_vtableRead,0,0,(int)lbl_8055F1F8);
}
void *igChildSizeObserverList_getMetaCall(){return igChildSizeObserverList_getMeta();}
void *fn_801141D4(void *object){
 fn_80114294();
 return fn_8006546C(lbl_80563810,object);
}
void *igChildSizeObserver_getMeta(){
 if(!lbl_80563810 || !(reinterpret_cast<unsigned int *>(lbl_80563810)[0x24/4]&4)) fn_80114294();
 return lbl_80563810;
}
void *igChildSizeObserver_vtableRead(){
 UnknownGenObject80114248_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_80496894;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114294(){
 fn_80066188((int)igChildSizeObserver_register);
}
void igChildSizeObserver_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563810,(int)igView_register,(int)fn_8010E6DC,(int)igChildSizeObserver_getMetaCall,(int)lbl_80495598,16,(int)igChildSizeObserver_vtableRead,(int)igChildSizeObserver_fieldInit,0,(int)lbl_8055F200);
}
void *igChildSizeObserver_getMetaCall(){return igChildSizeObserver_getMeta();}
void igChildSizeObserver_fieldInit(){
 void *value0=lbl_80563810;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F208,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80114424();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_8055F20C,lbl_8055F210,lbl_8055F214,value1);
}
void *fn_801143D8(){
 char *data=lbl_80494570;
 if(!lbl_80563818) lbl_80563818=fn_800635C8(data+0x1078,data+0x1060,data+0x106C,0x3);
 return lbl_80563818;
}
void *fn_80114424(){
 if(!lbl_8056381C) lbl_8056381C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056381C;
}
void *igBoxAspect_getMeta(){
 if(!lbl_8056381C || !(reinterpret_cast<unsigned int *>(lbl_8056381C)[0x24/4]&4)) fn_8011457C();
 return lbl_8056381C;
}
void *igBoxAspect_vtableRead(){
 UnknownGenObject8011449C object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049652C;
 object.unknown00=lbl_804968F8;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011457C(){
 fn_80066188((int)igBoxAspect_register);
}
void igBoxAspect_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056381C,(int)igGuiComponentAspect_register,(int)fn_8010DB2C,(int)igBoxAspect_getMetaCall,(int)lbl_80495600,52,(int)igBoxAspect_vtableRead,(int)igBoxAspect_fieldInit,0,(int)lbl_804955F4);
}
void *igBoxAspect_getMetaCall(){return igBoxAspect_getMeta();}
}
#pragma pop
