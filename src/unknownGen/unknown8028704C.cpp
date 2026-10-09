#include <unknownGen.h>
#include <meta/igMessageFilter.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80068128(void *,void *);
void *fn_8010DF8C();
void fn_80284294();
void igRenderer_register();
extern char lbl_80416CB4[];
extern char lbl_80497C9C[];
extern char lbl_804CBDE8[];
extern void *lbl_80515C54;
extern void *lbl_80515C58;
extern void *lbl_80515C5C;
extern void *lbl_80515C7C;
extern void *lbl_80515C84;
extern void *lbl_80515C88;
extern void *lbl_80515C8C;
extern void *lbl_80515C90;
extern void *lbl_80515C94;
extern void *lbl_80515CAC;
extern void *lbl_80515CBC;
extern void *lbl_80515CC0;
extern void *lbl_80515CC4;
extern void *lbl_80515CC8;
extern void *lbl_80515D24;
extern void *lbl_80515D30;
extern void *lbl_80515D34;
extern void *lbl_80515D38;
extern void *lbl_80515D40;
extern void *lbl_805621F4;
void *igFlushRenderer_getMeta();
void *igFlushRenderer_vtableRead();
void fn_80287188();
void igFlushRenderer_register();
void *igFlushRenderer_getMetaCall();
}
struct UnknownGenRoot802870EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802870EC(){fn_8006665C(this);}
};
struct UnknownGenObject802870EC_0 : UnknownGenRoot802870EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject802870EC_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject802870EC : UnknownGenObject802870EC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802870EC(){unknown00=lbl_804CBDE8;}
};
extern "C" {
void *fn_8028704C(){
 if(!lbl_80515D40) lbl_80515D40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515D40;
}
void *igFlushRenderer_getMeta(){
 if(!lbl_80515D40 || !(reinterpret_cast<unsigned int *>(lbl_80515D40)[0x24/4]&4)) fn_80287188();
 return lbl_80515D40;
}
void *igFlushRenderer_vtableRead(){
 UnknownGenObject802870EC object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBDE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80287188(){
 fn_80066188((int)igFlushRenderer_register);
}
void igFlushRenderer_register(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D40,(int)igRenderer_register,(int)fn_8010DF8C,(int)igFlushRenderer_getMetaCall,(int)lbl_80416CB4,12,(int)igFlushRenderer_vtableRead,0,0,0);
}
void *igFlushRenderer_getMetaCall(){return igFlushRenderer_getMeta();}
void *igInfoManagerList_virtual58(){return lbl_80515D34;}
void *igInfoManagerOrderedList_virtual58(){return lbl_80515D30;}
void *igViewportResizedMessage_virtual58(){return lbl_80515D24;}
void *igInsightPluginList_virtual58(){return lbl_80515CC4;}
void *fn_8028727C(){return lbl_80515CBC;}
void fn_8028728C(){}
void *fn_80287290(){return lbl_80515C8C;}
void *fn_802872A0(){return lbl_80515CAC;}
void *igMessageFilter_virtual58(){return lbl_80515C94;}
void igMessageFilter_virtual5C(int p0,int p1){
 fn_80068128((void *)p1,reinterpret_cast<Meta::igMessageFilter *>((void *)p0)->_msgType);
}
void *igMessageFilterList_virtual58(){return lbl_80515C90;}
void *igMessageReceiverList_virtual58(){return lbl_80515C88;}
void *igMessenger_virtual58(){return lbl_80515C7C;}
void *fn_8028731C(){return lbl_80515CC0;}
void *fn_8028732C(){return lbl_80515D38;}
void *fn_8028733C(){return lbl_80515C5C;}
void *igMessage_virtual58(){return lbl_80515C84;}
void *igTriggerableList_virtual58(){return lbl_80515C54;}
void *igInsightPluginList_virtual60(){return lbl_80515CC8;}
void *igMessageFilterList_virtual60(){return lbl_80515C94;}
void *igInfoManagerList_virtual60(){return lbl_80515D38;}
void *igMessageReceiverList_virtual60(){return lbl_80515C8C;}
void *igTriggerableList_virtual60(){return lbl_80515C58;}
}
#pragma pop
