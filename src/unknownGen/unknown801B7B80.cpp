#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void _edge_fieldInit();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igHeapable_register();
void igObjectList_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804ADF48[];
extern char lbl_804ADF54[];
extern char lbl_804B8120[];
extern char lbl_804B817C[];
extern char lbl_804B81D8[];
extern char lbl_804B823C[];
extern char lbl_805603D4[8];
extern char lbl_805603DC[6];
extern void *lbl_805621F4;
extern void *lbl_80564BE8;
extern void *lbl_80564BEC;
extern void *lbl_80564EBC;
void *_edgeList_getMeta();
void *_edgeList_vtableRead();
void fn_801B7C68();
void _edgeList_register();
void *_edgeList_getMetaCall();
void *_edge_getMeta();
void *_edge_vtableRead();
void fn_801B7DEC();
void _edge_register();
void *_edge_getMetaCall();
void *_edge_parentMeta();
}
struct UnknownGenObject801B7BF8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B7D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B7D58(){fn_8006665C(this);}
};
struct UnknownGenObject801B7D58 : UnknownGenRoot801B7D58 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801B7D58(){unknown00=lbl_804B8120;}
};
extern "C" {
void *fn_801B7B80(){
 if(!lbl_80564BE8) lbl_80564BE8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BE8;
}
void *_edgeList_getMeta(){
 if(!lbl_80564BE8 || !(reinterpret_cast<unsigned int *>(lbl_80564BE8)[0x24/4]&4)) fn_801B7C68();
 return lbl_80564BE8;
}
void *_edgeList_vtableRead(){
 UnknownGenObject801B7BF8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B823C;
 object.unknown00=lbl_804B81D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7C68(){
 fn_80066188((int)_edgeList_register);
}
void _edgeList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BE8,(int)igObjectList_register,(int)fn_80024180,(int)_edgeList_getMetaCall,(int)lbl_804ADF48,20,(int)_edgeList_vtableRead,0,0,(int)lbl_805603D4);
}
void *_edgeList_getMetaCall(){return _edgeList_getMeta();}
void *_edge_getMeta(){
 if(!lbl_80564BEC || !(reinterpret_cast<unsigned int *>(lbl_80564BEC)[0x24/4]&4)) fn_801B7DEC();
 return lbl_80564BEC;
}
void *_edge_vtableRead(){
 UnknownGenObject801B7D58 object;
 object.unknown00=lbl_804B817C;
 object.unknown00=lbl_804B8120;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7DEC(){
 fn_80066188((int)_edge_register);
}
void _edge_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BEC,(int)igHeapable_register,(int)_edge_parentMeta,(int)_edge_getMetaCall,(int)lbl_805603DC,44,(int)_edge_vtableRead,(int)_edge_fieldInit,0,(int)lbl_804ADF54);
}
void *_edge_getMetaCall(){return _edge_getMeta();}
void *_edge_parentMeta(){return lbl_80564EBC;}
}
#pragma pop
