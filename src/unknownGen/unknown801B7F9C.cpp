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
void *fn_801B7F9C(){
 if(!_faceList_meta) _faceList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return _faceList_meta;
}
}
#pragma pop
