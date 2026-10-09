#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void *igFilterMessageDispatcher_getMetaCall();
void igMessageDefaultReceiver_fieldInit();
void igMessageReceiver_register();
void igObject_register();
extern char lbl_80416A8C[];
extern char lbl_80416AA0[];
extern char lbl_804CB0E8[];
extern char lbl_804CB6C8[];
extern char lbl_804CBF40[];
extern void *lbl_80515C8C;
extern void *lbl_80515CAC;
extern void *lbl_80515CB0;
extern void *lbl_805621F4;
void *igMessageDispatcher_getMeta();
void fn_802856E4();
void igMessageDispatcher_register();
void *igMessageDispatcher_getMetaCall();
void *fn_8028579C();
void *igMessageDefaultReceiver_getMeta();
void *igMessageDefaultReceiver_vtableRead();
void fn_802858DC();
void igMessageDefaultReceiver_register();
void *igMessageDefaultReceiver_getMetaCall();
void *igMessageDefaultReceiver_parentMeta();
}
struct UnknownGenRoot80285844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285844(){fn_8006665C(this);}
};
struct UnknownGenObject80285844 : UnknownGenRoot80285844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject80285844(){unknown00=lbl_804CBF40;}
};
extern "C" {
void *fn_80285644(){
 if(!lbl_80515CAC) lbl_80515CAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515CAC;
}
void *igMessageDispatcher_getMeta(){
 if(!lbl_80515CAC || !(reinterpret_cast<unsigned int *>(lbl_80515CAC)[0x24/4]&4)) fn_802856E4();
 return lbl_80515CAC;
}
void fn_802856E4(){
 fn_80066188((int)igMessageDispatcher_register);
}
void igMessageDispatcher_register(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515CAC,(int)igObject_register,(int)fn_800237D0,(int)igMessageDispatcher_getMetaCall,(int)lbl_80416A8C,8,0,(int)fn_8028579C,0,0);
}
void *igMessageDispatcher_getMetaCall(){return igMessageDispatcher_getMeta();}
void *fn_8028579C(){
 void *value0=lbl_80515CAC;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+60)=(void *)igFilterMessageDispatcher_getMetaCall;
 return value0;
}
void *fn_802857B8(void *object){
 fn_802858DC();
 return fn_8006546C(lbl_80515CB0,object);
}
void *igMessageDefaultReceiver_getMeta(){
 if(!lbl_80515CB0 || !(reinterpret_cast<unsigned int *>(lbl_80515CB0)[0x24/4]&4)) fn_802858DC();
 return lbl_80515CB0;
}
void *igMessageDefaultReceiver_vtableRead(){
 UnknownGenObject80285844 object;
 object.unknown00=lbl_804CB6C8;
 object.unknown00=lbl_804CBF40;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802858DC(){
 fn_80066188((int)igMessageDefaultReceiver_register);
}
void igMessageDefaultReceiver_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515CB0,(int)igMessageReceiver_register,(int)igMessageDefaultReceiver_parentMeta,(int)igMessageDefaultReceiver_getMetaCall,(int)lbl_80416AA0,24,(int)igMessageDefaultReceiver_vtableRead,(int)igMessageDefaultReceiver_fieldInit,0,(int)lbl_804CB0E8);
}
void *igMessageDefaultReceiver_getMetaCall(){return igMessageDefaultReceiver_getMeta();}
void *igMessageDefaultReceiver_parentMeta(){return lbl_80515C8C;}
}
#pragma pop
