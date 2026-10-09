#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void _face_fieldInit();
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
extern char lbl_804ADFB0[];
extern char lbl_804B7FFC[];
extern char lbl_804B8058[];
extern char lbl_804B80BC[];
extern char lbl_8056040C[8];
extern char lbl_80560414[8];
extern char lbl_8056041C[6];
extern void *lbl_805621F4;
extern void *lbl_80564C04;
extern void *lbl_80564C08;
void *_faceList_getMeta();
void *_faceList_vtableRead();
void fn_801B8084();
void _faceList_register();
void *_faceList_getMetaCall();
void *_face_getMeta();
void *_face_vtableRead();
void fn_801B81F0();
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
 if(!lbl_80564C04) lbl_80564C04=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C04;
}
void *_faceList_getMeta(){
 if(!lbl_80564C04 || !(reinterpret_cast<unsigned int *>(lbl_80564C04)[0x24/4]&4)) fn_801B8084();
 return lbl_80564C04;
}
void *_faceList_vtableRead(){
 UnknownGenObject801B8014_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B80BC;
 object.unknown00=lbl_804B8058;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B8084(){
 fn_80066188((int)_faceList_register);
}
void _faceList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C04,(int)igObjectList_register,(int)fn_80024180,(int)_faceList_getMetaCall,(int)lbl_804ADFB0,20,(int)_faceList_vtableRead,0,0,(int)lbl_8056040C);
}
void *_faceList_getMetaCall(){return _faceList_getMeta();}
void *fn_801B8138(){
 if(!lbl_80564C08) lbl_80564C08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C08;
}
void *_face_getMeta(){
 if(!lbl_80564C08 || !(reinterpret_cast<unsigned int *>(lbl_80564C08)[0x24/4]&4)) fn_801B81F0();
 return lbl_80564C08;
}
void *_face_vtableRead(){
 UnknownGenObject801B81B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B7FFC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B81F0(){
 fn_80066188((int)_face_register);
}
void _face_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C08,(int)igObject_register,(int)fn_800237D0,(int)_face_getMetaCall,(int)lbl_8056041C,36,(int)_face_vtableRead,(int)_face_fieldInit,0,(int)lbl_80560414);
}
void *_face_getMetaCall(){return _face_getMeta();}
}
#pragma pop
