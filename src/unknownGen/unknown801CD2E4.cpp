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
void igAnimationTrack_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2924[];
extern char lbl_804B293C[];
extern char lbl_804B59D8[];
extern char lbl_804B5A34[];
extern char lbl_804B5A98[];
extern char lbl_80560A38[8];
extern char lbl_80560A40[8];
extern void *lbl_805621F4;
extern void *lbl_8056556C;
extern void *lbl_80565570;
void *igAnimationTrackList_getMeta();
void *igAnimationTrackList_vtableRead();
void fn_801CD3CC();
void igAnimationTrackList_register();
void *igAnimationTrackList_getMetaCall();
void *igAnimationTrack_getMeta();
void *igAnimationTrack_vtableRead();
void fn_801CD5D4();
void igAnimationTrack_register();
void *igAnimationTrack_getMetaCall();
}
struct UnknownGenObject801CD35C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801CD4F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD4F4(){fn_8006665C(this);}
};
struct UnknownGenObject801CD4F4_0 : UnknownGenRoot801CD4F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD4F4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CD4F4 : UnknownGenObject801CD4F4_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject801CD4F4(){unknown00=lbl_804B59D8;}
};
extern "C" {
void *fn_801CD2E4(){
 if(!lbl_8056556C) lbl_8056556C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056556C;
}
void *igAnimationTrackList_getMeta(){
 if(!lbl_8056556C || !(reinterpret_cast<unsigned int *>(lbl_8056556C)[0x24/4]&4)) fn_801CD3CC();
 return lbl_8056556C;
}
void *igAnimationTrackList_vtableRead(){
 UnknownGenObject801CD35C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5A98;
 object.unknown00=lbl_804B5A34;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD3CC(){
 fn_80066188((int)igAnimationTrackList_register);
}
void igAnimationTrackList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056556C,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTrackList_getMetaCall,(int)lbl_804B2924,20,(int)igAnimationTrackList_vtableRead,0,0,(int)lbl_80560A38);
}
void *igAnimationTrackList_getMetaCall(){return igAnimationTrackList_getMeta();}
void *fn_801CD480(void *object){
 fn_801CD5D4();
 return fn_8006546C(lbl_80565570,object);
}
void *igAnimationTrack_getMeta(){
 if(!lbl_80565570 || !(reinterpret_cast<unsigned int *>(lbl_80565570)[0x24/4]&4)) fn_801CD5D4();
 return lbl_80565570;
}
void *igAnimationTrack_vtableRead(){
 UnknownGenObject801CD4F4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B59D8;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD5D4(){
 fn_80066188((int)igAnimationTrack_register);
}
void igAnimationTrack_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565570,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimationTrack_getMetaCall,(int)lbl_804B293C,44,(int)igAnimationTrack_vtableRead,(int)igAnimationTrack_fieldInit,0,(int)lbl_80560A40);
}
void *igAnimationTrack_getMetaCall(){return igAnimationTrack_getMeta();}
}
#pragma pop
