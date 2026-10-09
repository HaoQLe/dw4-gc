#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void _vertex_fieldInit();
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igObjectList_register();
void igObject_register();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AE00C[];
extern char lbl_804AE018[];
extern char lbl_804B7ED8[];
extern char lbl_804B7F34[];
extern char lbl_804B7F98[];
extern char lbl_80560424[8];
extern char lbl_8056042C[8];
extern void *lbl_805621F4;
extern void *lbl_80564C18;
extern void *lbl_80564C1C;
void *_vertexList_getMeta();
void *_vertexList_vtableRead();
void fn_801B8434();
void _vertexList_register();
void *_vertexList_getMetaCall();
void *_vertex_getMeta();
void *_vertex_vtableRead();
void fn_801B8708();
void _vertex_register();
void *_vertex_getMetaCall();
}
struct UnknownGenObject801B83C4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B8560 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B8560(){fn_8006665C(this);}
};
struct UnknownGenObject801B8560 : UnknownGenRoot801B8560 {
 char unknown04[44];
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 char unknown48[24];
 inline ~UnknownGenObject801B8560(){unknown00=lbl_804B7ED8;}
};
extern "C" {
void *_vertexList_getMeta(){
 if(!lbl_80564C18 || !(reinterpret_cast<unsigned int *>(lbl_80564C18)[0x24/4]&4)) fn_801B8434();
 return lbl_80564C18;
}
void *_vertexList_vtableRead(){
 UnknownGenObject801B83C4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7F98;
 object.unknown00=lbl_804B7F34;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B8434(){
 fn_80066188((int)_vertexList_register);
}
void _vertexList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C18,(int)igObjectList_register,(int)fn_80024180,(int)_vertexList_getMetaCall,(int)lbl_804AE00C,20,(int)_vertexList_vtableRead,0,0,(int)lbl_80560424);
}
void *_vertexList_getMetaCall(){return _vertexList_getMeta();}
void *fn_801B84E8(){
 if(!lbl_80564C1C) lbl_80564C1C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C1C;
}
void *_vertex_getMeta(){
 if(!lbl_80564C1C || !(reinterpret_cast<unsigned int *>(lbl_80564C1C)[0x24/4]&4)) fn_801B8708();
 return lbl_80564C1C;
}
void *_vertex_vtableRead(){
 UnknownGenObject801B8560 object;
 object.unknown00=lbl_804B7ED8;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B8708(){
 fn_80066188((int)_vertex_register);
}
void _vertex_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C1C,(int)igObject_register,(int)fn_800237D0,(int)_vertex_getMetaCall,(int)lbl_8056042C,84,(int)_vertex_vtableRead,(int)_vertex_fieldInit,0,(int)lbl_804AE018);
}
void *_vertex_getMetaCall(){return _vertex_getMeta();}
}
#pragma pop
