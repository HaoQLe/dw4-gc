#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_8010E6DC();
void igActiveComponentsObserver_fieldInit();
void igView_register();
extern char lbl_80494CE4[];
extern char lbl_80495AD8[];
extern char lbl_80496284[];
extern char lbl_8055F08C[8];
extern void *lbl_805636AC;
void *igActiveComponentsObserver_getMeta();
void *igActiveComponentsObserver_vtableRead();
void fn_801105AC();
void igActiveComponentsObserver_register();
void *igActiveComponentsObserver_getMetaCall();
}
struct UnknownGenRoot801104A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801104A0(){fn_8006665C(this);}
};
struct UnknownGenObject801104A0 : UnknownGenRoot801104A0 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801104A0(){unknown00=lbl_80496284;}
};
extern "C" {
void *fn_8011042C(void *object){
 fn_801105AC();
 return fn_8006546C(lbl_805636AC,object);
}
void *igActiveComponentsObserver_getMeta(){
 if(!lbl_805636AC || !(reinterpret_cast<unsigned int *>(lbl_805636AC)[0x24/4]&4)) fn_801105AC();
 return lbl_805636AC;
}
void *igActiveComponentsObserver_vtableRead(){
 UnknownGenObject801104A0 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_80496284;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801105AC(){
 fn_80066188((int)igActiveComponentsObserver_register);
}
void igActiveComponentsObserver_register(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805636AC,(int)igView_register,(int)fn_8010E6DC,(int)igActiveComponentsObserver_getMetaCall,(int)lbl_80494CE4,24,(int)igActiveComponentsObserver_vtableRead,(int)igActiveComponentsObserver_fieldInit,0,(int)lbl_8055F08C);
}
void *igActiveComponentsObserver_getMetaCall(){return igActiveComponentsObserver_getMeta();}
}
#pragma pop
