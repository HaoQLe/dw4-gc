#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igAnimationTrack_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAnimationTrackList_className[];
extern char igAnimationTrack_className[];
extern char igAnimationTrack_vtable[];
extern char igAnimationTrackList_vtable[];
extern char lbl_804B5A98[];
extern char lbl_80560A38[8];
extern char lbl_80560A40[8];
extern void *lbl_805621F4;
extern void *igAnimationTrackList_meta;
extern void *igAnimationTrack_meta;
void *igAnimationTrackList_getMeta();
void *igAnimationTrackList_vtableRead();
void igAnimationTrackList_registerNow();
void igAnimationTrackList_register();
void *igAnimationTrackList_getMetaCall();
void *igAnimationTrack_getMeta();
void *igAnimationTrack_vtableRead();
void igAnimationTrack_registerNow();
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
 inline UnknownGenRoot801CD4F4(){igObject_construct(this);}
};
struct UnknownGenObject801CD4F4_0 : UnknownGenRoot801CD4F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD4F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801CD4F4 : UnknownGenObject801CD4F4_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject801CD4F4(){unknown00=igAnimationTrack_vtable;}
};
extern "C" {
void *fn_801CD2E4(){
 if(!igAnimationTrackList_meta) igAnimationTrackList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAnimationTrackList_meta;
}
void *igAnimationTrackList_getMeta(){
 if(!igAnimationTrackList_meta || !(reinterpret_cast<unsigned int *>(igAnimationTrackList_meta)[0x24/4]&4)) igAnimationTrackList_registerNow();
 return igAnimationTrackList_meta;
}
void *igAnimationTrackList_vtableRead(){
 UnknownGenObject801CD35C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B5A98;
 object.unknown00=igAnimationTrackList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTrackList_registerNow(){
 meta_registerNow((int)igAnimationTrackList_register);
}
void igAnimationTrackList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTrackList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igAnimationTrackList_getMetaCall,(int)igAnimationTrackList_className,20,(int)igAnimationTrackList_vtableRead,0,0,(int)lbl_80560A38);
}
void *igAnimationTrackList_getMetaCall(){return igAnimationTrackList_getMeta();}
void *igAnimationTrack_create(void *object){
 igAnimationTrack_registerNow();
 return meta_createInstance(igAnimationTrack_meta,object);
}
void *igAnimationTrack_getMeta(){
 if(!igAnimationTrack_meta || !(reinterpret_cast<unsigned int *>(igAnimationTrack_meta)[0x24/4]&4)) igAnimationTrack_registerNow();
 return igAnimationTrack_meta;
}
void *igAnimationTrack_vtableRead(){
 UnknownGenObject801CD4F4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igAnimationTrack_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAnimationTrack_registerNow(){
 meta_registerNow((int)igAnimationTrack_register);
}
void igAnimationTrack_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAnimationTrack_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igAnimationTrack_getMetaCall,(int)igAnimationTrack_className,44,(int)igAnimationTrack_vtableRead,(int)igAnimationTrack_fieldInit,0,(int)lbl_80560A40);
}
void *igAnimationTrack_getMetaCall(){return igAnimationTrack_getMeta();}
}
#pragma pop
