#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void _face_fieldInit();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char _faceList_className[];
extern char _face_vtable[];
extern char _faceList_vtable[];
extern char lbl_804B80BC[];
extern char _faceList_dependencies[8];
extern char _face_dependencies[8];
extern char lbl_8056041C[6];
extern void *lbl_805621F4;
extern void *_faceList_meta;
extern void *_face_meta;
void *_faceList_getMeta();
void *_faceList_vtableRead();
void _faceList_arkRegister();
void _faceList_register();
void *_faceList_getMetaCall();
void *_face_getMeta();
void *_face_vtableRead();
void _face_arkRegister();
void _face_register();
void *_face_getMetaCall();
}
struct UnknownGenObject801B8014_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B81B0_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_801B8138(){
 if(!_face_meta) _face_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return _face_meta;
}
void *_face_getMeta(){
 if(!_face_meta || !(reinterpret_cast<unsigned int *>(_face_meta)[0x24/4]&4)) _face_arkRegister();
 return _face_meta;
}
void *_face_vtableRead(){
 UnknownGenObject801B81B0_0 object;
 igObject_construct(&object);
 object.unknown00=_face_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void _face_arkRegister(){
 meta_registerNow((int)_face_register);
}
void _face_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&_face_meta,(int)igObject_register,(int)fn_800237D0,(int)_face_getMetaCall,(int)lbl_8056041C,36,(int)_face_vtableRead,(int)_face_fieldInit,0,(int)_face_dependencies);
}
void *_face_getMetaCall(){return _face_getMeta();}
}
#pragma pop
