#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801BF5B4();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF4A8[];
extern char lbl_804AF4B8[];
extern char lbl_804B48D0[];
extern char lbl_804B74F8[];
extern char lbl_804B755C[];
extern char lbl_804B817C[];
extern char lbl_805605A0[8];
extern char lbl_805605A8[7];
extern char lbl_805605B0[4];
extern char lbl_805605BC[4];
extern char lbl_805605C0[4];
extern char lbl_805605C4[4];
extern char lbl_805605C8[8];
extern char lbl_805605D0[8];
extern char lbl_805605D8[8];
extern char lbl_805605E0[8];
extern char lbl_805605E8[8];
extern void *lbl_805621F4;
extern void *lbl_80564EB0;
extern void *lbl_80564EB8;
extern void *lbl_80564EBC;
extern void *lbl_80564EC8;
void *igHeap_getMeta();
void *igHeap_vtableRead();
void fn_801BEEF0();
void igHeap_register();
void *igHeap_getMetaCall();
void igHeap_fieldInit();
void *fn_801BF030();
void *igHeapableList_getMeta();
void *igHeapableList_vtableRead();
void fn_801BF118();
void igHeapableList_register();
void *igHeapableList_getMetaCall();
void *igHeapable_getMeta();
void *igHeapable_vtableRead();
void fn_801BF248();
void igHeapable_register();
void *igHeapable_getMetaCall();
void igHeapable_fieldInit();
}
struct UnknownGenRoot801BEE68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BEE68(){fn_8006665C(this);}
};
struct UnknownGenObject801BEE68 : UnknownGenRoot801BEE68 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801BEE68(){unknown00=lbl_804B48D0;}
};
struct UnknownGenObject801BF0A8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801BF208_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igHeap_getMeta(){
 if(!lbl_80564EB0 || !(reinterpret_cast<unsigned int *>(lbl_80564EB0)[0x24/4]&4)) fn_801BEEF0();
 return lbl_80564EB0;
}
void *igHeap_vtableRead(){
 UnknownGenObject801BEE68 object;
 object.unknown00=lbl_804B48D0;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BEEF0(){
 fn_80066188((int)igHeap_register);
}
void igHeap_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EB0,(int)igObject_register,(int)fn_800237D0,(int)igHeap_getMetaCall,(int)lbl_805605A8,12,(int)igHeap_vtableRead,(int)igHeap_fieldInit,0,(int)lbl_805605A0);
}
void *igHeap_getMetaCall(){return igHeap_getMeta();}
void igHeap_fieldInit(){
 void *value0=lbl_80564EB0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805605B0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801BF030();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_805605BC,lbl_805605C0,lbl_805605C4,value1);
}
void *fn_801BF030(){
 if(!lbl_80564EB8) lbl_80564EB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EB8;
}
void *igHeapableList_getMeta(){
 if(!lbl_80564EB8 || !(reinterpret_cast<unsigned int *>(lbl_80564EB8)[0x24/4]&4)) fn_801BF118();
 return lbl_80564EB8;
}
void *igHeapableList_vtableRead(){
 UnknownGenObject801BF0A8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B755C;
 object.unknown00=lbl_804B74F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BF118(){
 fn_80066188((int)igHeapableList_register);
}
void igHeapableList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EB8,(int)igObjectList_register,(int)fn_80024180,(int)igHeapableList_getMetaCall,(int)lbl_804AF4A8,20,(int)igHeapableList_vtableRead,0,0,(int)lbl_805605C8);
}
void *igHeapableList_getMetaCall(){return igHeapableList_getMeta();}
void *igHeapable_getMeta(){
 if(!lbl_80564EBC || !(reinterpret_cast<unsigned int *>(lbl_80564EBC)[0x24/4]&4)) fn_801BF248();
 return lbl_80564EBC;
}
void *igHeapable_vtableRead(){
 UnknownGenObject801BF208_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B817C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BF248(){
 fn_80066188((int)igHeapable_register);
}
void igHeapable_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EBC,(int)igObject_register,(int)fn_800237D0,(int)igHeapable_getMetaCall,(int)lbl_804AF4B8,16,(int)igHeapable_vtableRead,(int)igHeapable_fieldInit,0,0);
}
void *igHeapable_getMetaCall(){return igHeapable_getMeta();}
void igHeapable_fieldInit(){
 void *value0=lbl_80564EBC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805605D0,2);
 fn_800659C0(value0,lbl_805605D8,lbl_805605E0,lbl_805605E8,value1);
}
void *igHashedUserInfo_getMeta(){
 if(!lbl_80564EC8 || !(reinterpret_cast<unsigned int *>(lbl_80564EC8)[0x24/4]&4)) fn_801BF5B4();
 return lbl_80564EC8;
}
}
#pragma pop
