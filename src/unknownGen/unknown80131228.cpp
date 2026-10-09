#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igGenericAttrStatistics_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049BE94[];
extern char lbl_8049BEBC[];
extern char lbl_8049BEE4[];
extern char lbl_8049BF00[];
extern char lbl_8049BF1C[];
extern char lbl_8049BF28[];
extern char lbl_804A2EAC[];
extern char lbl_804A2F08[];
extern char lbl_804AA9B0[];
extern char lbl_804AAA0C[];
extern char lbl_804AAA70[];
extern char lbl_804AAAD4[];
extern char lbl_804AAB38[];
extern char lbl_8055F4EC[8];
extern char lbl_8055F4F4[4];
extern char lbl_8055F4F8[4];
extern char lbl_8055F4FC[4];
extern char lbl_8055F500[4];
extern char lbl_8055F504[8];
extern char lbl_8055F50C[4];
extern char lbl_8055F510[4];
extern char lbl_8055F514[4];
extern char lbl_8055F518[4];
extern char lbl_8055F51C[8];
extern char lbl_8055F524[8];
extern void *lbl_805621F4;
extern void *lbl_80563B00;
extern void *lbl_80563B08;
extern void *lbl_80563B10;
extern void *lbl_80563B14;
extern void *lbl_80563B18;
void *igAllNodeStatistics_getMeta();
void *igAllNodeStatistics_vtableRead();
void fn_80131328();
void igAllNodeStatistics_register();
void *igAllNodeStatistics_getMetaCall();
void igAllNodeStatistics_fieldInit();
void *igAllAttrStatistics_getMeta();
void *igAllAttrStatistics_vtableRead();
void fn_8013156C();
void igAllAttrStatistics_register();
void *igAllAttrStatistics_getMetaCall();
void igAllAttrStatistics_fieldInit();
void *fn_801316B0();
void *igGenericAttrStatisticsList_getMeta();
void *igGenericAttrStatisticsList_vtableRead();
void fn_80131798();
void igGenericAttrStatisticsList_register();
void *igGenericAttrStatisticsList_getMetaCall();
void *fn_8013184C();
void *igGenericNodeStatisticsList_getMeta();
void *igGenericNodeStatisticsList_vtableRead();
void fn_80131934();
void igGenericNodeStatisticsList_register();
void *igGenericNodeStatisticsList_getMetaCall();
void *igGenericAttrStatistics_getMeta();
void *igGenericAttrStatistics_vtableRead();
void fn_80131B24();
void igGenericAttrStatistics_register();
void *igGenericAttrStatistics_getMetaCall();
}
struct UnknownGenRoot801312A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801312A0(){fn_8006665C(this);}
};
struct UnknownGenObject801312A0 : UnknownGenRoot801312A0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801312A0(){unknown00=lbl_804A2EAC;}
};
struct UnknownGenRoot801314E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801314E4(){fn_8006665C(this);}
};
struct UnknownGenObject801314E4 : UnknownGenRoot801314E4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801314E4(){unknown00=lbl_804A2F08;}
};
struct UnknownGenObject80131728_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801318C4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80131A5C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131A5C(){fn_8006665C(this);}
};
struct UnknownGenObject80131A5C : UnknownGenRoot80131A5C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131A5C(){unknown00=lbl_804AA9B0;}
};
extern "C" {
void *fn_80131228(){
 if(!lbl_80563B00) lbl_80563B00=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B00;
}
void *igAllNodeStatistics_getMeta(){
 if(!lbl_80563B00 || !(reinterpret_cast<unsigned int *>(lbl_80563B00)[0x24/4]&4)) fn_80131328();
 return lbl_80563B00;
}
void *igAllNodeStatistics_vtableRead(){
 UnknownGenObject801312A0 object;
 object.unknown00=lbl_804A2EAC;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131328(){
 fn_80066188((int)igAllNodeStatistics_register);
}
void igAllNodeStatistics_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B00,(int)igObject_register,(int)fn_800237D0,(int)igAllNodeStatistics_getMetaCall,(int)lbl_8049BE94,12,(int)igAllNodeStatistics_vtableRead,(int)igAllNodeStatistics_fieldInit,0,(int)lbl_8055F4EC);
}
void *igAllNodeStatistics_getMetaCall(){return igAllNodeStatistics_getMeta();}
void igAllNodeStatistics_fieldInit(){
 void *value0=lbl_80563B00;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F4F4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8013184C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055F4F8,lbl_8055F4FC,lbl_8055F500,value1);
}
void *fn_8013146C(){
 if(!lbl_80563B08) lbl_80563B08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B08;
}
void *igAllAttrStatistics_getMeta(){
 if(!lbl_80563B08 || !(reinterpret_cast<unsigned int *>(lbl_80563B08)[0x24/4]&4)) fn_8013156C();
 return lbl_80563B08;
}
void *igAllAttrStatistics_vtableRead(){
 UnknownGenObject801314E4 object;
 object.unknown00=lbl_804A2F08;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013156C(){
 fn_80066188((int)igAllAttrStatistics_register);
}
void igAllAttrStatistics_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B08,(int)igObject_register,(int)fn_800237D0,(int)igAllAttrStatistics_getMetaCall,(int)lbl_8049BEBC,12,(int)igAllAttrStatistics_vtableRead,(int)igAllAttrStatistics_fieldInit,0,(int)lbl_8055F504);
}
void *igAllAttrStatistics_getMetaCall(){return igAllAttrStatistics_getMeta();}
void igAllAttrStatistics_fieldInit(){
 void *value0=lbl_80563B08;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F50C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801316B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055F510,lbl_8055F514,lbl_8055F518,value1);
}
void *fn_801316B0(){
 if(!lbl_80563B10) lbl_80563B10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B10;
}
void *igGenericAttrStatisticsList_getMeta(){
 if(!lbl_80563B10 || !(reinterpret_cast<unsigned int *>(lbl_80563B10)[0x24/4]&4)) fn_80131798();
 return lbl_80563B10;
}
void *igGenericAttrStatisticsList_vtableRead(){
 UnknownGenObject80131728_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAB38;
 object.unknown00=lbl_804AAAD4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131798(){
 fn_80066188((int)igGenericAttrStatisticsList_register);
}
void igGenericAttrStatisticsList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B10,(int)igObjectList_register,(int)fn_80024180,(int)igGenericAttrStatisticsList_getMetaCall,(int)lbl_8049BEE4,20,(int)igGenericAttrStatisticsList_vtableRead,0,0,(int)lbl_8055F51C);
}
void *igGenericAttrStatisticsList_getMetaCall(){return igGenericAttrStatisticsList_getMeta();}
void *fn_8013184C(){
 if(!lbl_80563B14) lbl_80563B14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B14;
}
void *igGenericNodeStatisticsList_getMeta(){
 if(!lbl_80563B14 || !(reinterpret_cast<unsigned int *>(lbl_80563B14)[0x24/4]&4)) fn_80131934();
 return lbl_80563B14;
}
void *igGenericNodeStatisticsList_vtableRead(){
 UnknownGenObject801318C4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAA70;
 object.unknown00=lbl_804AAA0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131934(){
 fn_80066188((int)igGenericNodeStatisticsList_register);
}
void igGenericNodeStatisticsList_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B14,(int)igObjectList_register,(int)fn_80024180,(int)igGenericNodeStatisticsList_getMetaCall,(int)lbl_8049BF00,20,(int)igGenericNodeStatisticsList_vtableRead,0,0,(int)lbl_8055F524);
}
void *igGenericNodeStatisticsList_getMetaCall(){return igGenericNodeStatisticsList_getMeta();}
void *fn_801319E8(void *object){
 fn_80131B24();
 return fn_8006546C(lbl_80563B18,object);
}
void *igGenericAttrStatistics_getMeta(){
 if(!lbl_80563B18 || !(reinterpret_cast<unsigned int *>(lbl_80563B18)[0x24/4]&4)) fn_80131B24();
 return lbl_80563B18;
}
void *igGenericAttrStatistics_vtableRead(){
 UnknownGenObject80131A5C object;
 object.unknown00=lbl_804AA9B0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131B24(){
 fn_80066188((int)igGenericAttrStatistics_register);
}
void igGenericAttrStatistics_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B18,(int)igObject_register,(int)fn_800237D0,(int)igGenericAttrStatistics_getMetaCall,(int)lbl_8049BF28,24,(int)igGenericAttrStatistics_vtableRead,(int)igGenericAttrStatistics_fieldInit,0,(int)lbl_8049BF1C);
}
void *igGenericAttrStatistics_getMetaCall(){return igGenericAttrStatistics_getMeta();}
}
#pragma pop
