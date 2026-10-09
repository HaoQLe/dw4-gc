#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void igMessageFilter_fieldInit();
void igObjectList_register();
void igObject_register();
extern char lbl_804169E0[];
extern char lbl_804169EC[];
extern char lbl_80416A04[];
extern char lbl_80416A18[];
extern char lbl_80416A2C[];
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CB084[];
extern char lbl_804CB08C[];
extern char lbl_804CB094[];
extern char lbl_804CB79C[];
extern char lbl_804CB7FC[];
extern char lbl_804CB860[];
extern char lbl_804CB8C4[];
extern char lbl_804CB928[];
extern char lbl_804CBB90[];
extern void *lbl_80515C84;
extern void *lbl_80515C88;
extern void *lbl_80515C8C;
extern void *lbl_80515C90;
extern void *lbl_80515C94;
extern void *lbl_805621F4;
void *igMessage_getMeta();
void *igMessage_vtableRead();
void fn_80284B4C();
void igMessage_register();
void *igMessage_getMetaCall();
void *igMessageReceiverList_getMeta();
void *igMessageReceiverList_vtableRead();
void fn_80284D14();
void igMessageReceiverList_register();
void *igMessageReceiverList_getMetaCall();
void *igMessageReceiver_getMeta();
void fn_80284E1C();
void igMessageReceiver_register();
void *igMessageReceiver_getMetaCall();
void *igMessageFilterList_getMeta();
void *igMessageFilterList_vtableRead();
void fn_80284FE0();
void igMessageFilterList_register();
void *igMessageFilterList_getMetaCall();
void *igMessageFilter_getMeta();
void *igMessageFilter_vtableRead();
void fn_802851F8();
void igMessageFilter_register();
void *igMessageFilter_getMetaCall();
}
struct UnknownGenObject80284B04_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject80284CA0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80284F6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80285128 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285128(){fn_8006665C(this);}
};
struct UnknownGenObject80285128 : UnknownGenRoot80285128 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject80285128(){unknown00=lbl_804CB79C;}
};
extern "C" {
void *igMessage_getMeta(){
 if(!lbl_80515C84 || !(reinterpret_cast<unsigned int *>(lbl_80515C84)[0x24/4]&4)) fn_80284B4C();
 return lbl_80515C84;
}
void *igMessage_vtableRead(){
 UnknownGenObject80284B04_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CBB90;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284B4C(){
 fn_80066188((int)igMessage_register);
}
void igMessage_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C84,(int)igObject_register,(int)fn_800237D0,(int)igMessage_getMetaCall,(int)lbl_804169E0,8,(int)igMessage_vtableRead,0,0,0);
}
void *igMessage_getMetaCall(){return igMessage_getMeta();}
void *fn_80284C00(){
 if(!lbl_80515C88) lbl_80515C88=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515C88;
}
void *igMessageReceiverList_getMeta(){
 if(!lbl_80515C88 || !(reinterpret_cast<unsigned int *>(lbl_80515C88)[0x24/4]&4)) fn_80284D14();
 return lbl_80515C88;
}
void *igMessageReceiverList_vtableRead(){
 UnknownGenObject80284CA0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CB928;
 object.unknown00=lbl_804CB8C4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284D14(){
 fn_80066188((int)igMessageReceiverList_register);
}
void igMessageReceiverList_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C88,(int)igObjectList_register,(int)fn_80024180,(int)igMessageReceiverList_getMetaCall,(int)lbl_804169EC,20,(int)igMessageReceiverList_vtableRead,0,0,(int)lbl_804CB084);
}
void *igMessageReceiverList_getMetaCall(){return igMessageReceiverList_getMeta();}
void *igMessageReceiver_getMeta(){
 if(!lbl_80515C8C || !(reinterpret_cast<unsigned int *>(lbl_80515C8C)[0x24/4]&4)) fn_80284E1C();
 return lbl_80515C8C;
}
void fn_80284E1C(){
 fn_80066188((int)igMessageReceiver_register);
}
void igMessageReceiver_register(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515C8C,(int)igObject_register,(int)fn_800237D0,(int)igMessageReceiver_getMetaCall,(int)lbl_80416A04,8,0,0,0,0);
}
void *igMessageReceiver_getMetaCall(){return igMessageReceiver_getMeta();}
void *fn_80284ECC(){
 if(!lbl_80515C90) lbl_80515C90=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515C90;
}
void *igMessageFilterList_getMeta(){
 if(!lbl_80515C90 || !(reinterpret_cast<unsigned int *>(lbl_80515C90)[0x24/4]&4)) fn_80284FE0();
 return lbl_80515C90;
}
void *igMessageFilterList_vtableRead(){
 UnknownGenObject80284F6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CB860;
 object.unknown00=lbl_804CB7FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284FE0(){
 fn_80066188((int)igMessageFilterList_register);
}
void igMessageFilterList_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C90,(int)igObjectList_register,(int)fn_80024180,(int)igMessageFilterList_getMetaCall,(int)lbl_80416A18,20,(int)igMessageFilterList_vtableRead,0,0,(int)lbl_804CB08C);
}
void *igMessageFilterList_getMetaCall(){return igMessageFilterList_getMeta();}
void *fn_8028509C(void *object){
 fn_802851F8();
 return fn_8006546C(lbl_80515C94,object);
}
void *igMessageFilter_getMeta(){
 if(!lbl_80515C94 || !(reinterpret_cast<unsigned int *>(lbl_80515C94)[0x24/4]&4)) fn_802851F8();
 return lbl_80515C94;
}
void *igMessageFilter_vtableRead(){
 UnknownGenObject80285128 object;
 object.unknown00=lbl_804CB79C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802851F8(){
 fn_80066188((int)igMessageFilter_register);
}
void igMessageFilter_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C94,(int)igObject_register,(int)fn_800237D0,(int)igMessageFilter_getMetaCall,(int)lbl_80416A2C,16,(int)igMessageFilter_vtableRead,(int)igMessageFilter_fieldInit,0,(int)lbl_804CB094);
}
void *igMessageFilter_getMetaCall(){return igMessageFilter_getMeta();}
}
#pragma pop
