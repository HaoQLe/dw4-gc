#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800284EC();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igActorInfo_fieldInit();
void igInfo_register();
void igObjectList_register();
extern char lbl_80472460[];
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2980[];
extern char lbl_804B2990[];
extern char lbl_804B29A8[];
extern char lbl_804B58AC[];
extern char lbl_804B5910[];
extern char lbl_804B5974[];
extern char lbl_80560A48[8];
extern void *lbl_805621F4;
extern void *lbl_80565580;
extern void *lbl_80565584;
void *igActorInfoList_getMeta();
void *igActorInfoList_vtableRead();
void fn_801CD800();
void igActorInfoList_register();
void *igActorInfoList_getMetaCall();
void *igActorInfo_getMeta();
void *igActorInfo_vtableRead();
void fn_801CDB00();
void igActorInfo_register();
void *igActorInfo_getMetaCall();
}
struct UnknownGenObject801CD790_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CD928 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD928(){fn_8006665C(this);}
};
struct UnknownGenObject801CD928_0 : UnknownGenRoot801CD928 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD928_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CD928_1 : UnknownGenObject801CD928_0 {
 inline ~UnknownGenObject801CD928_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801CD928 : UnknownGenObject801CD928_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CD928(){unknown00=lbl_804B58AC;}
};
extern "C" {
void *fn_801CD718(){
 if(!lbl_80565580) lbl_80565580=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565580;
}
void *igActorInfoList_getMeta(){
 if(!lbl_80565580 || !(reinterpret_cast<unsigned int *>(lbl_80565580)[0x24/4]&4)) fn_801CD800();
 return lbl_80565580;
}
void *igActorInfoList_vtableRead(){
 UnknownGenObject801CD790_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5974;
 object.unknown00=lbl_804B5910;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD800(){
 fn_80066188((int)igActorInfoList_register);
}
void igActorInfoList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565580,(int)igObjectList_register,(int)fn_80024180,(int)igActorInfoList_getMetaCall,(int)lbl_804B2980,20,(int)igActorInfoList_vtableRead,0,0,(int)lbl_80560A48);
}
void *igActorInfoList_getMetaCall(){return igActorInfoList_getMeta();}
void *fn_801CD8B4(void *object){
 fn_801CDB00();
 return fn_8006546C(lbl_80565584,object);
}
void *igActorInfo_getMeta(){
 if(!lbl_80565584 || !(reinterpret_cast<unsigned int *>(lbl_80565584)[0x24/4]&4)) fn_801CDB00();
 return lbl_80565584;
}
void *igActorInfo_vtableRead(){
 UnknownGenObject801CD928 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B58AC;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CDB00(){
 fn_80066188((int)igActorInfo_register);
}
void igActorInfo_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565584,(int)igInfo_register,(int)fn_800284EC,(int)igActorInfo_getMetaCall,(int)lbl_804B29A8,40,(int)igActorInfo_vtableRead,(int)igActorInfo_fieldInit,0,(int)lbl_804B2990);
}
void *igActorInfo_getMetaCall(){return igActorInfo_getMeta();}
}
#pragma pop
