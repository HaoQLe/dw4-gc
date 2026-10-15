#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void _vertex_fieldInit();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char _vertexList_className[];
extern char lbl_804AE018[];
extern char _vertex_vtable[];
extern char _vertexList_vtable[];
extern char lbl_804B7F98[];
extern char lbl_80560424[8];
extern char lbl_8056042C[8];
extern void *lbl_805621F4;
extern void *_vertexList_meta;
extern void *_vertex_meta;
void *_vertexList_getMeta();
void *_vertexList_vtableRead();
void _vertexList_registerNow();
void _vertexList_register();
void *_vertexList_getMetaCall();
void *_vertex_getMeta();
void *_vertex_vtableRead();
void _vertex_registerNow();
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
 inline ~UnknownGenObject801B8560(){unknown00=_vertex_vtable;}
};
extern "C" {
void *_vertexList_getMeta(){
 if(!_vertexList_meta || !(reinterpret_cast<unsigned int *>(_vertexList_meta)[0x24/4]&4)) _vertexList_registerNow();
 return _vertexList_meta;
}
void *_vertexList_vtableRead(){
 UnknownGenObject801B83C4_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B7F98;
 object.unknown00=_vertexList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void _vertexList_registerNow(){
 meta_registerNow((int)_vertexList_register);
}
void _vertexList_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&_vertexList_meta,(int)igObjectList_register,(int)fn_80024180,(int)_vertexList_getMetaCall,(int)_vertexList_className,20,(int)_vertexList_vtableRead,0,0,(int)lbl_80560424);
}
void *_vertexList_getMetaCall(){return _vertexList_getMeta();}
void *fn_801B84E8(){
 if(!_vertex_meta) _vertex_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return _vertex_meta;
}
void *_vertex_getMeta(){
 if(!_vertex_meta || !(reinterpret_cast<unsigned int *>(_vertex_meta)[0x24/4]&4)) _vertex_registerNow();
 return _vertex_meta;
}
void *_vertex_vtableRead(){
 UnknownGenObject801B8560 object;
 object.unknown00=_vertex_vtable;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void _vertex_registerNow(){
 meta_registerNow((int)_vertex_register);
}
void _vertex_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&_vertex_meta,(int)igObject_register,(int)fn_800237D0,(int)_vertex_getMetaCall,(int)lbl_8056042C,84,(int)_vertex_vtableRead,(int)_vertex_fieldInit,0,(int)lbl_804AE018);
}
void *_vertex_getMetaCall(){return _vertex_getMeta();}
}
#pragma pop
