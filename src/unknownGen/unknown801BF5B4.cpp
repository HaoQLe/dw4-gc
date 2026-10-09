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
void fn_801AA6DC();
void *fn_801B0404();
void *fn_801B47CC();
void *fn_801B7354();
void *fn_801BBBF0();
void igGraphPath_fieldInit();
void *igHashedUserInfo_getMeta();
void igHashedUserInfo_vtableRead();
void igNode_register();
void igObjectList_register();
void igObject_register();
void igUserInfo_register();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF4E0[];
extern char lbl_804AF510[];
extern char lbl_804AF520[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B73D4[];
extern char lbl_804B7430[];
extern char lbl_804B7494[];
extern char lbl_805605F0[8];
extern char lbl_805605F8[4];
extern char lbl_805605FC[4];
extern char lbl_80560600[4];
extern char lbl_80560604[4];
extern char lbl_80560608[8];
extern char lbl_80560610[8];
extern char lbl_80560618[4];
extern char lbl_8056061C[4];
extern char lbl_80560620[4];
extern char lbl_80560624[4];
extern char lbl_80560628[8];
extern char lbl_80560630[8];
extern void *lbl_805621F4;
extern void *lbl_80564EC8;
extern void *lbl_80564ED0;
extern void *lbl_80564ED8;
extern void *lbl_80564EDC;
void igHashedUserInfo_register();
void *igHashedUserInfo_getMetaCall();
void igHashedUserInfo_fieldInit();
void *igGroup_getMeta();
void *igGroup_vtableRead();
void fn_801BF910();
void igGroup_register();
void *igGroup_getMetaCall();
void igGroup_fieldInit();
void *igGraphPathList_getMeta();
void *igGraphPathList_vtableRead();
void fn_801BFB88();
void igGraphPathList_register();
void *igGraphPathList_getMetaCall();
void *igGraphPath_getMeta();
void *igGraphPath_vtableRead();
void fn_801BFD74();
void igGraphPath_register();
void *igGraphPath_getMetaCall();
}
struct UnknownGenRoot801BF7A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BF7A8(){fn_8006665C(this);}
};
struct UnknownGenObject801BF7A8_0 : UnknownGenRoot801BF7A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BF7A8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BF7A8_1 : UnknownGenObject801BF7A8_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BF7A8_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BF7A8 : UnknownGenObject801BF7A8_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BF7A8(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801BFB18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801BFCEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BFCEC(){fn_8006665C(this);}
};
struct UnknownGenObject801BFCEC : UnknownGenRoot801BFCEC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject801BFCEC(){unknown00=lbl_804B73D4;}
};
extern "C" {
void fn_801BF5B4(){
 fn_80066188((int)igHashedUserInfo_register);
}
void igHashedUserInfo_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EC8,(int)igUserInfo_register,(int)fn_801B0404,(int)igHashedUserInfo_getMetaCall,(int)lbl_804AF4E0,40,(int)igHashedUserInfo_vtableRead,(int)igHashedUserInfo_fieldInit,0,(int)lbl_805605F0);
}
void *igHashedUserInfo_getMetaCall(){return igHashedUserInfo_getMeta();}
void igHashedUserInfo_fieldInit(){
 void *value0=lbl_80564EC8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805605F8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B47CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_805605FC,lbl_80560600,lbl_80560604,value1);
}
void *fn_801BF6F8(void *object){
 fn_801BF910();
 return fn_8006546C(lbl_80564ED0,object);
}
void *fn_801BF730(){
 if(!lbl_80564ED0) lbl_80564ED0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564ED0;
}
void *igGroup_getMeta(){
 if(!lbl_80564ED0 || !(reinterpret_cast<unsigned int *>(lbl_80564ED0)[0x24/4]&4)) fn_801BF910();
 return lbl_80564ED0;
}
void *igGroup_vtableRead(){
 UnknownGenObject801BF7A8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BF910(){
 fn_80066188((int)igGroup_register);
}
void igGroup_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564ED0,(int)igNode_register,(int)fn_801BBBF0,(int)igGroup_getMetaCall,(int)lbl_80560610,32,(int)igGroup_vtableRead,(int)igGroup_fieldInit,0,(int)lbl_80560608);
}
void *igGroup_getMetaCall(){return igGroup_getMeta();}
void igGroup_fieldInit(){
 void *value0=lbl_80564ED0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560618,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B7354();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+36)=3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_8056061C,lbl_80560620,lbl_80560624,value1);
}
void *fn_801BFA68(void *object){
 fn_801BFB88();
 return fn_8006546C(lbl_80564ED8,object);
}
void *fn_801BFAA0(){
 if(!lbl_80564ED8) lbl_80564ED8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564ED8;
}
void *igGraphPathList_getMeta(){
 if(!lbl_80564ED8 || !(reinterpret_cast<unsigned int *>(lbl_80564ED8)[0x24/4]&4)) fn_801BFB88();
 return lbl_80564ED8;
}
void *igGraphPathList_vtableRead(){
 UnknownGenObject801BFB18_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7494;
 object.unknown00=lbl_804B7430;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BFB88(){
 fn_80066188((int)igGraphPathList_register);
}
void igGraphPathList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564ED8,(int)igObjectList_register,(int)fn_80024180,(int)igGraphPathList_getMetaCall,(int)lbl_804AF510,20,(int)igGraphPathList_vtableRead,0,0,(int)lbl_80560628);
}
void *igGraphPathList_getMetaCall(){return igGraphPathList_getMeta();}
void *fn_801BFC3C(void *object){
 fn_801BFD74();
 return fn_8006546C(lbl_80564EDC,object);
}
void *fn_801BFC74(){
 if(!lbl_80564EDC) lbl_80564EDC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EDC;
}
void *igGraphPath_getMeta(){
 if(!lbl_80564EDC || !(reinterpret_cast<unsigned int *>(lbl_80564EDC)[0x24/4]&4)) fn_801BFD74();
 return lbl_80564EDC;
}
void *igGraphPath_vtableRead(){
 UnknownGenObject801BFCEC object;
 object.unknown00=lbl_804B73D4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BFD74(){
 fn_80066188((int)igGraphPath_register);
}
void igGraphPath_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EDC,(int)igObject_register,(int)fn_800237D0,(int)igGraphPath_getMetaCall,(int)lbl_804AF520,28,(int)igGraphPath_vtableRead,(int)igGraphPath_fieldInit,0,(int)lbl_80560630);
}
void *igGraphPath_getMetaCall(){return igGraphPath_getMeta();}
}
#pragma pop
